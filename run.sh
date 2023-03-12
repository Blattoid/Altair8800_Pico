#!/bin/bash
PICO_DIR=~/Mount/RPI-RP2
SERIAL_PORT=/dev/ttyACM0
# Check the device is connected
if [ ! -d "$PICO_DIR" ]; then
  echo Pico not mounted! Is it in BOOTSEL mode?
  exit 1
fi

# Run the build script and exit if it fails
./build.sh
[ $? -ne 0 ] && exit 1

# Attempt to copy the firmware file
echo -n "Uploading .uf2... "
cp bin/*.uf2 "$PICO_DIR"
if [ $? -ne 0 ]; then
  echo Unable to copy firmware!
  exit 1
fi
echo Done.

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
