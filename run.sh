#!/bin/bash
# This script does all the necessary steps for running the code on the Pi Pico
# In order, these are the steps it performs:
# * Mounts the Pico if it isn't already
# * Runs the project build script
# * Copies the .uf2 file to the Pico
# * Opens the serial port with a screen command

# Make sure to change the below constants for your system!
I_HAVE_CONFIRMED_THESE_ARE_CORRECT=yes    # Change to 'yes' once you're happy.
PICO_MNTDIR=~/Mount/RPI-RP2 # Where the device is mounted, or where it should be mounted
PICO_BLKDEV=/dev/sdb1 # Block device used for automatic mounting, if it isn't already
SERIAL_PORT=/dev/ttyACM0 # Serial port for the screen command

# Automount abort routine
cleanup() {
  echo "Cleaning up mountpoint"
  # Attempt to unmount device
  failed=0 # Zero means all ok, 1 means umount failed, 2 means rmdir failed
  if grep -qs "$PICO_BLKDEV " /proc/mounts; then
    # Try three times to unmount the device
    for try in 1 2 3; do
      sudo umount "$PICO_BLKDEV" 
      if [ $? -eq 0 ]; then
        # Show how many tries it took, if more than 1 was needed.
        [ $try -gt 1 ] && echo Unmounted OK after $try tries
        break # We can stop trying now it's unmounted ok
      fi
      sleep 1 # Waiting is sometimes necessary
    done
    failed=1 # None of the tries worked! Oh dear.
  fi

  # Then clean up the directory if it exists
  if [ -d "$PICO_MNTDIR" ]; then
    sudo rmdir "$PICO_MNTDIR"
    failed=$? # Store the return code
  fi
  
  # Apologetic failure message
  if [ $failed -ne 0 ]; then
    echo Cleanup failed! Something has gone terribly wrong.
    echo "There is now a (probably) empty mountpoint at \"$PICO_MNTDIR\""
    echo You will have to clean this up manually. Very sorry for the inconvenience.
    exit 1 # Definitely want to make sure we stop at this point
  fi
}

# Ensure the user isn't just blindly running this
if [ $I_HAVE_CONFIRMED_THESE_ARE_CORRECT != yes ]; then
  echo "Hold on just a second! There's some configuration you need to do."
  echo "Not all systems behave the same, so there are some constant variables at the top of this script you will need to adjust."
  echo "The option to disable this message is alongside the other constants."
  exit 1
fi

# First, check if the device is connected
if [ ! -d "$PICO_MNTDIR" ]; then
  # If not, that's ok. We can try to mount it ourselves.
  # Well, provided the device is actually connected.
  if [ ! -b "$PICO_BLKDEV" ]; then
    echo "Can't find the Pico. Did you hold the BOOTSEL button while plugging it in?"
    exit 1
  fi
  
  echo Attempting to automatically mount...
  sudo mkdir -p "$PICO_MNTDIR" # Create the mountpoint
  if [ ! -d "$PICO_MNTDIR" ]; then
    # User must have failed to authenticate the sudo.
    echo "Unauthorised; Can't create mountpoint"
    exit 1
  fi
  
  # Then mount the device. The uid and gid must be specfied, otherwise there are errors during the copy operation.
  sudo mount -o uid=1000,gid=1000 "$PICO_BLKDEV" "$PICO_MNTDIR" 
  if [ $? -ne 0 ]; then # If we quit at this moment then we'd be leaving behind an empty mountpoint
    echo Failed to mount device!
    cleanup
    exit 1
  fi

  # Make sure we can write to it
  : <<'END_COMMENT'  # Removing this for now - it may not be necessary?
  sudo chown -v `whoami`:`whoami` "$PICO_MNTDIR"
  if [ $? -ne 0 ]; then
    echo "Unauthorised; Failed to transfer ownership of mountpoint"
    cleanup
    exit 1
  fi
END_COMMENT

  echo -e "Successfully mounted device!\n" # All went well!
fi

# Run the build script and exit if it fails
./build.sh
[ $? -ne 0 ] && exit 1

# Attempt to copy the firmware file
echo Uploading .uf2...
cp -v build/*.uf2 "$PICO_MNTDIR"
if [ $? -ne 0 ]; then
  echo Unable to copy firmware!
  exit 1
fi
echo Done.
cleanup

# Show a spinner while waiting for the serial port to show up
echo -n "Wait for chip reboot  "
i=0
declare -a anim=("-" "\\" "|" "/")
while [ ! -c "$SERIAL_PORT" ]; do
  sleep 0.1
  printf "\b${anim[$i]}"
  ((i=i+1))
  [ $i -ge 4 ] && i=0
done
echo

screen "$SERIAL_PORT" 115200
