add_executable(adc)

target_sources(adc PRIVATE adc.c)

# Pull in our pico_stdlib which pulls in commonly used features
target_link_libraries(adc pico_stdlib hardware_adc)

pico_enable_stdio_usb(adc 1)
pico_enable_stdio_uart(adc 0)

# create map/bin/hex file etc.
pico_add_extra_outputs(adc)

