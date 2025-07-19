/*
 * Copyright 2025 NXP
 *
 * SPDX-License-Identifier: BSD-3-Clause
 */

#include "fsl_display.h"
#include "fsl_st7703.h"

/*******************************************************************************
 * Definitions
 ******************************************************************************/
#define ST7703_DelayMs VIDEO_DelayMs

typedef struct
{
    const uint8_t *cmd;
    uint8_t cmdLen;
} st7703_cmd_t;

/*******************************************************************************
 * Variables
 ******************************************************************************/
const display_operations_t st7703_ops = {
    .init   = ST7703_Init,
    .deinit = ST7703_Deinit,
    .start  = ST7703_Start,
    .stop   = ST7703_Stop,
};

/* ST7703 initialization commands based on provided sequence */
static const st7703_cmd_t s_st7703Cmds[] = {
    /* Set EXTC */
    {(const uint8_t[]){0xB9U, 0xF1U, 0x12U, 0x83U}, 4U},
    
    /* Power control commands */
    {(const uint8_t[]){0xB1U, 0x00U, 0x00U, 0x00U, 0xDAU, 0x80U}, 5U},
    
    /* Set RSO */
    {(const uint8_t[]){0xB2U, 0xC8U, 0x02U, 0x30U}, 3U},
    
    /* Set RGB */
    {(const uint8_t[]){0xB3U, 0x10U, 0x10U, 0x28U, 0x28U, 0x03U, 0xFFU, 0x00U, 0x00U, 0x00U, 0x00U}, 10U},
    
    /* Set Panel Inversion */
    {(const uint8_t[]){0xB4U, 0x80U}, 1U},
    
    /* Set BGP */
    {(const uint8_t[]){0xB5U, 0x0AU, 0x0AU}, 2U},
    
    /* Set VCOM */
    {(const uint8_t[]){0xB6U, 0x36U, 0x36U}, 2U},
    
    /* Set ECP */
    {(const uint8_t[]){0xB8U, 0x26U, 0x22U, 0xF0U, 0x13U}, 4U},
    
    /* Set DSI - 2-lane configuration */
    {(const uint8_t[]){0xBAU, 0x31U, 0x81U, 0x05U, 0xF9U, 0x0EU, 0x0EU, 0x20U, 0x00U, 0x00U, 0x00U, 
                       0x00U, 0x00U, 0x00U, 0x00U, 0x44U, 0x25U, 0x00U, 0x90U, 0x0AU, 0x00U, 
                       0x00U, 0x01U, 0x4FU, 0x01U, 0x00U, 0x00U, 0x37U}, 27U},
    
    /* Set VDC */
    {(const uint8_t[]){0xBCU, 0x47U}, 1U},
    
    /* Set PCR */
    {(const uint8_t[]){0xBFU, 0x02U, 0x11U, 0x00U}, 3U},
    
    /* Set SCR */
    {(const uint8_t[]){0xC0U, 0x73U, 0x73U, 0x50U, 0x50U, 0x00U, 0x00U, 0x12U, 0x70U, 0x00U}, 9U},
    
    /* Set POWER */
    {(const uint8_t[]){0xC1U, 0x25U, 0x00U, 0x32U, 0x32U, 0x77U, 0xC1U, 0xFFU, 0xFFU, 0xCCU, 0xCCU, 0x77U, 0x77U}, 12U},
    
    /* Set SCR */
    {(const uint8_t[]){0xC6U, 0x82U, 0x00U, 0xBFU, 0xFFU, 0x00U, 0xFFU}, 6U},
    
    {(const uint8_t[]){0xC7U, 0xB8U, 0x00U, 0x0AU, 0x00U, 0x00U, 0x02U}, 6U},
    
    {(const uint8_t[]){0xC8U, 0x10U, 0x40U, 0x1EU, 0x03U}, 4U},
    
    /* Set Panel */
    {(const uint8_t[]){0xCCU, 0x0BU}, 1U},
    
    /* Set Gamma */
    {(const uint8_t[]){0xE0U, 0x1FU, 0x3FU, 0x3FU, 0x2DU, 0x31U, 0x38U, 0x65U, 0x4BU, 0x08U, 0x0DU, 
                       0x0EU, 0x12U, 0x14U, 0x12U, 0x14U, 0x11U, 0x19U, 0x1FU, 0x3FU, 0x3FU, 
                       0x2DU, 0x31U, 0x38U, 0x65U, 0x4BU, 0x08U, 0x0DU, 0x0EU, 0x12U, 0x14U, 
                       0x12U, 0x14U, 0x11U, 0x19U}, 34U},
    
    /* Set EQ */
    {(const uint8_t[]){0xE3U, 0x07U, 0x07U, 0x0BU, 0x0BU, 0x0BU, 0x0BU, 0x00U, 0x00U, 0x00U, 0x00U, 0xFFU, 0x00U, 0xC0U, 0x10U}, 14U},
    
    /* Set GIP */
    {(const uint8_t[]){0xE9U, 0xC8U, 0x10U, 0x08U, 0x00U, 0x00U, 0x80U, 0x81U, 0x12U, 0x31U, 0x23U, 
                       0x47U, 0x86U, 0x80U, 0x81U, 0x47U, 0x08U, 0x00U, 0x00U, 0x0CU, 0x00U, 
                       0x00U, 0x00U, 0x00U, 0x00U, 0x0CU, 0x00U, 0x00U, 0x00U, 0x88U, 0x20U, 
                       0x44U, 0x66U, 0x88U, 0x00U, 0x82U, 0x2FU, 0xF8U, 0x88U, 0x88U, 0x88U, 
                       0x31U, 0x55U, 0x77U, 0x88U, 0x11U, 0x83U, 0x3FU, 0xF8U, 0x88U, 0x88U, 
                       0x00U, 0x00U, 0x00U, 0x00U, 0x00U, 0x00U, 0x00U, 0x00U, 0x00U, 0x00U, 
                       0x00U, 0x00U, 0x00U}, 63U},
    
    /* Set GIP2 */
    {(const uint8_t[]){0xEAU, 0x00U, 0x1AU, 0x00U, 0x00U, 0x00U, 0x00U, 0x02U, 0x00U, 0x00U, 0x00U, 
                       0x00U, 0x00U, 0x8FU, 0x13U, 0x33U, 0x11U, 0x88U, 0x77U, 0x85U, 0x5FU, 
                       0x88U, 0x88U, 0x88U, 0x8FU, 0x02U, 0x22U, 0x00U, 0x88U, 0x66U, 0x84U, 
                       0x4FU, 0x88U, 0x88U, 0x88U, 0x23U, 0x00U, 0x00U, 0x00U, 0x6DU, 0x00U, 
                       0x00U, 0x00U, 0x00U, 0x00U, 0x00U, 0x00U, 0x00U, 0x00U, 0x00U, 0x00U, 
                       0x00U, 0x00U, 0x00U, 0x00U, 0x00U, 0x00U, 0x00U, 0x00U, 0x00U, 0x00U, 
                       0x00U}, 61U},
};

/*******************************************************************************
 * Code
 ******************************************************************************/

status_t ST7703_Init(display_handle_t *handle, const display_config_t *config)
{
    uint32_t i;
    status_t status                   = kStatus_Success;
    const st7703_resource_t *resource = (const st7703_resource_t *)(handle->resource);
    mipi_dsi_device_t *dsiDevice      = resource->dsiDevice;

    /* Only support 720 * 1280 */
    if (config->resolution != FSL_VIDEO_RESOLUTION(720, 1280))
    {
        return kStatus_InvalidArgument;
    }

    /* Power on. */
    resource->pullPowerPin(true);
    ST7703_DelayMs(1);

    /* Perform reset. */
    resource->pullResetPin(false);
    ST7703_DelayMs(1);
    resource->pullResetPin(true);
    ST7703_DelayMs(5);

    /* Send initialization commands */
    for (i = 0; i < ARRAY_SIZE(s_st7703Cmds); i++)
    {
        status = MIPI_DSI_GenericWrite(dsiDevice, s_st7703Cmds[i].cmd, (int32_t)s_st7703Cmds[i].cmdLen);

        if (kStatus_Success != status)
        {
            return status;
        }
    }

    /* Exit sleep mode (0x11) */
    status = MIPI_DSI_DCS_EnterSleepMode(dsiDevice, false);
    if (kStatus_Success != status)
    {
        return status;
    }

    ST7703_DelayMs(250);

    /* Set display on (0x29) */
    status = MIPI_DSI_DCS_SetDisplayOn(dsiDevice, true);
    if (kStatus_Success != status)
    {
        return status;
    }

    ST7703_DelayMs(50);

    return status;
}

status_t ST7703_Deinit(display_handle_t *handle)
{
    const st7703_resource_t *resource = (const st7703_resource_t *)(handle->resource);
    mipi_dsi_device_t *dsiDevice      = resource->dsiDevice;

    (void)MIPI_DSI_DCS_EnterSleepMode(dsiDevice, true);

    resource->pullResetPin(false);
    resource->pullPowerPin(false);

    return kStatus_Success;
}

status_t ST7703_Start(display_handle_t *handle)
{
    const st7703_resource_t *resource = (const st7703_resource_t *)(handle->resource);
    mipi_dsi_device_t *dsiDevice      = resource->dsiDevice;

    return MIPI_DSI_DCS_SetDisplayOn(dsiDevice, true);
}

status_t ST7703_Stop(display_handle_t *handle)
{
    const st7703_resource_t *resource = (const st7703_resource_t *)(handle->resource);
    mipi_dsi_device_t *dsiDevice      = resource->dsiDevice;

    return MIPI_DSI_DCS_SetDisplayOn(dsiDevice, false);
} 