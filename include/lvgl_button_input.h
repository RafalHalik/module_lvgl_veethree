/*
 * Copyright 2023 Fabian Blatz <fabianblatz@gmail.com>
 *
 * SPDX-License-Identifier: Apache-2.0
 */

#ifndef ZEPHYR_MODULES_LVGL_LVGL_BUTTON_INPUT_VEETHREE_H_
#define ZEPHYR_MODULES_LVGL_LVGL_BUTTON_INPUT_VEETHREE_H_

#include <zephyr/device.h>

#ifdef __cplusplus
extern "C" {
#endif

int lvgl_button_input_init(const struct device *dev);

#ifdef __cplusplus
}
#endif

#endif /* ZEPHYR_MODULES_LVGL_LVGL_BUTTON_INPUT_H_ */
