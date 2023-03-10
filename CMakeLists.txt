cmake_minimum_required(VERSION 3.13)

# initialize the SDK based on PICO_SDK_PATH
# note: this must happen before project()
include(pico_sdk_import.cmake)

project(my_project)

# initialize the Raspberry Pi Pico SDK
pico_sdk_init()

# rest of your project
add_executable(altair8800_emu
    main.c
)
# Enable the USB serial port
pico_enable_stdio_usb(altair8800_emu 1)

# Add pico_stdlib library which aggregates commonly used features
target_link_libraries(altair8800_emu pico_stdlib)

# create map/bin/hex/uf2 file in addition to ELF.
pico_add_extra_outputs(altair8800_emu)
