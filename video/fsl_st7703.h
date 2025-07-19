/*
 * Copyright 2025 NXP
 *
 * SPDX-License-Identifier: BSD-3-Clause
 */

#ifndef _FSL_ST7703_H_
#define _FSL_ST7703_H_

#include "fsl_display.h"
#include "fsl_mipi_dsi_cmd.h"

/*
 * Change log:
 *
 *   1.0.0
 *     - Initial version
 */

/*******************************************************************************
 * Definitions
 ******************************************************************************/

/*!
 * @brief ST7703 resource.
 */
typedef struct _st7703_resource
{
    mipi_dsi_device_t *dsiDevice;      /*!< MIPI DSI device. */
    void (*pullResetPin)(bool pullUp); /*!< Function to pull reset pin high or low. */
    void (*pullPowerPin)(bool pullUp); /*!< Function to pull power pin high or low. */
} st7703_resource_t;

extern const display_operations_t st7703_ops;

/*******************************************************************************
 * API
 ******************************************************************************/

#if defined(__cplusplus)
extern "C" {
#endif

status_t ST7703_Init(display_handle_t *handle, const display_config_t *config);

status_t ST7703_Deinit(display_handle_t *handle);

status_t ST7703_Start(display_handle_t *handle);

status_t ST7703_Stop(display_handle_t *handle);

#if defined(__cplusplus)
}
#endif

#endif /* _FSL_ST7703_H_ */ 