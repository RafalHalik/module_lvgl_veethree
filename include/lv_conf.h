/*
 * Copyright (c) 2018-2020 Jan Van Winkel <jan.van_winkel@dxplore.eu>
 * Copyright (c) 2020 Teslabs Engineering S.L.
 *
 * SPDX-License-Identifier: Apache-2.0
 */

#ifndef ZEPHYR_MODULES_LVGL_LV_CONF_VEETHREE_H_
#define ZEPHYR_MODULES_LVGL_LV_CONF_VEETHREE_H_

/* Memory manager settings */

#define LV_MEMCPY_MEMSET_STD_VEETHREE 1
#define LV_MEM_CUSTOM_VEETHREE        1

#if defined(CONFIG_LV_Z_MEM_POOL_HEAP_LIB_C_VEETHREE)

#define LV_MEM_CUSTOM_INCLUDE_VEETHREE "stdlib.h"
#define LV_MEM_CUSTOM_ALLOC_VEETHREE   malloc
#define LV_MEM_CUSTOM_REALLOC_VEETHREE realloc
#define LV_MEM_CUSTOM_FREE_VEETHREE    free

#else

#define LV_MEM_CUSTOM_INCLUDE_VEETHREE "lvgl_mem.h"
#define LV_MEM_CUSTOM_ALLOC_VEETHREE   lvgl_malloc
#define LV_MEM_CUSTOM_REALLOC_VEETHREE lvgl_realloc
#define LV_MEM_CUSTOM_FREE_VEETHREE    lvgl_free

#endif

/* HAL settings */

#define LV_TICK_CUSTOM_VEETHREE               1
#define LV_TICK_CUSTOM_INCLUDE_VEETHREE       <zephyr/kernel.h>
#define LV_TICK_CUSTOM_SYS_TIME_EXPR_VEETHREE (k_uptime_get_32())

/* Misc settings */

#define LV_SPRINTF_CUSTOM_VEETHREE  1
#define LV_SPRINTF_INCLUDE_VEETHREE "stdio.h"
#define lv_snprintf_VEETHREE        snprintf
#define lv_vsnprintf_VEETHREE      vsnprintf

/*
 * Needed because of a workaround for a GCC bug,
 * see https://github.com/lvgl/lvgl/issues/3078
 */
#define LV_CONF_SUPPRESS_DEFINE_CHECK_VEETHREE 1

#endif /* ZEPHYR_MODULES_LVGL_LV_CONF_H_ */
