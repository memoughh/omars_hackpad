# Processor architecture
MCU = RP2040
BOOTLOADER = rp2040

# Direct-pin wiring (no matrix grid)
# Note: the real switch for direct pins is matrix_pins.direct in keyboard.json.
# These lines are kept as requested and are harmless.
DIRECT_PINS_ENABLE = yes
MATRIX_ENABLE = no

# Features
ENCODER_ENABLE = yes
EXTRAKEY_ENABLE = yes