/*
 * This file is part of the MicroPython project, http://micropython.org/
 *
 * The MIT License (MIT)
 *
 * Copyright (c) 2016 Scott Shawcroft
 *
 * Permission is hereby granted, free of charge, to any person obtaining a copy
 * of this software and associated documentation files (the "Software"), to deal
 * in the Software without restriction, including without limitation the rights
 * to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
 * copies of the Software, and to permit persons to whom the Software is
 * furnished to do so, subject to the following conditions:
 *
 * The above copyright notice and this permission notice shall be included in
 * all copies or substantial portions of the Software.
 *
 * THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
 * IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
 * FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
 * AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
 * LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
 * OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN
 * THE SOFTWARE.
 */

#ifndef MICROPY_INCLUDED_ESPRESSIF_COMMON_HAL_MICROCONTROLLER_PIN_H
#define MICROPY_INCLUDED_ESPRESSIF_COMMON_HAL_MICROCONTROLLER_PIN_H

#include "py/mphal.h"

#include "peripherals/pins.h"

void reset_all_pins(void);
// reset_pin_number takes the pin number instead of the pointer so that objects don't
// need to store a full pointer.
void reset_pin_number(gpio_num_t pin_number);
void common_hal_reset_pin(const mcu_pin_obj_t *pin);
void claim_pin(const mcu_pin_obj_t *pin);
void claim_pin_number(gpio_num_t pin_number);
bool pin_number_is_free(gpio_num_t pin_number);
void never_reset_pin_number(gpio_num_t pin_number);

#endif // MICROPY_INCLUDED_ESPRESSIF_COMMON_HAL_MICROCONTROLLER_PIN_H
