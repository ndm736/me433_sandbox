add_executable(cdc)

target_sources(cdc PRIVATE cdc.c)

# Pull in our pico_stdlib which pulls in commonly used features
target_link_libraries(cdc pico_stdlib)

pico_enable_stdio_usb(cdc 1)
pico_enable_stdio_uart(cdc 0)

# create map/bin/hex file etc.
pico_add_extra_outputs(cdc)

