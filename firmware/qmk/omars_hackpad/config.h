#pragma once

/* Rotary encoder: pad A = GP28, pad B = GP29 */
#define ENCODER_A_PINS { GP28 }
#define ENCODER_B_PINS { GP29 }

/* Pulses per detent: 4 is typical for EC11; use 2 if one click skips a step */
#define ENCODER_RESOLUTION 4

/* Switches and encoder are active-low to GND.
   QMK enables the internal pull-ups automatically for direct pins
   and encoder pins, so no external resistors are needed. */

#define DEBOUNCE 5