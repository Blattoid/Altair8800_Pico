cmake_minimum_required(VERSION 3.13)

# initialize the SDK based on PICO_SDK_PATH
# note: this must happen before project()
include(pico_sdk_import.cmake)

project(my_project)

# initialize the Raspberry Pi Pico SDK
pico_sdk_init()

# Add the cpu emulation library
add_library(altair_cpu STATIC
  src/instructions_impl.c
  src/instructions.c
)
# Include the headers for the library
target_include_directories(altair_cpu PUBLIC ${CMAKE_CURRENT_SOURCE_DIR}/include)

# rest of your project
add_executable(altair8800_pico
    src/main.c
)

# Enable the USB serial port
pico_enable_stdio_usb(altair8800_pico 1)

target_link_libraries(altair8800_pico
    pico_stdlib # Add pico_stdlib library which aggregates commonly used features
    altair_cpu
)

# create map/bin/hex/uf2 file in addition to ELF.
pico_add_extra_outputs(altair8800_pico altair_cpu)
