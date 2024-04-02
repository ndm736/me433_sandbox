add_executable(blink)

target_sources(blink PRIVATE blink.c)

pico_enable_stdio_usb(blink 1)
pico_enable_stdio_uart(blink 0)

# Pull in our pico_stdlib which pulls in commonly used features
target_link_libraries(blink pico_stdlib hardware_adc)


# create map/bin/hex file etc.
pico_add_extra_outputs(blink)

