add_executable(blink
        blink.c
        )

# pull in common dependencies
target_link_libraries(blink pico_stdlib hardware_adc)

pico_enable_stdio_usb(blink 1)
pico_enable_stdio_uart(blink 0)

# create map/bin/hex file etc.
pico_add_extra_outputs(blink)

