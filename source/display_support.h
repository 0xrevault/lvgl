/*
 * Copyright 2019-2021, 2023 NXP
 * All rights reserved.
 *
 * SPDX-License-Identifier: BSD-3-Clause
 */

#ifndef _DISPLAY_SUPPORT_H_
#define _DISPLAY_SUPPORT_H_

#include "fsl_dc_fb.h"

/*******************************************************************************
 * Definitions
 ******************************************************************************/

/* @TEST_ANCHOR */

#define DEMO_PANEL_RK055AHD091 0 /* 720 * 1280, RK055AHD091-CTG(RK055HDMIPI4M) */
#define DEMO_PANEL_RK055IQH091 1 /* 540 * 960,  RK055IQH091-CTG */
#define DEMO_PANEL_RK055MHD091 2 /* 720 * 1280, RK055MHD091A0-CTG(RK055HDMIPI4MA0) */
#define DEMO_PANEL_ST7703_BV041HDE 3 /* 720 * 1280, ST7703 BV041HDE-NB0-1Q00 2-lane MIPI */
#define DEMO_PANEL_RASPI_7INCH 5 /* 800 * 480, Raspberry Pi 7" */

#define DEMO_DISPLAY_CONTROLLER_ELCDIF  0
#define DEMO_DISPLAY_CONTROLLER_LCDIFV2 1

/* Configure this macro in Kconfig or directly in the generated mcux_config.h. */
#ifndef DEMO_PANEL
#define DEMO_PANEL DEMO_PANEL_ST7703_BV041HDE
#endif

/* Configure this macro in Kconfig or directly in the generated mcux_config.h. */
#ifndef DEMO_DISPLAY_CONTROLLER
/* Use LCDIFV2 by default, could use ELCDIF by changing this macro. */
#define DEMO_DISPLAY_CONTROLLER DEMO_DISPLAY_CONTROLLER_LCDIFV2
#endif

#define DEMO_BUFFER_FIXED_ADDRESS 0

#if DEMO_BUFFER_FIXED_ADDRESS
#define DEMO_BUFFER0_ADDR 0x80000000
#define DEMO_BUFFER1_ADDR 0x80200000
#endif

/*
 * Use the MIPI dumb panel
 */

/* Definitions for the frame buffer. */
#define DEMO_BUFFER_COUNT 2 /* 2 is enough for DPI interface display. */

/* Don't change here, change in mcux_config.h */
#ifndef DEMO_USE_XRGB8888
#define DEMO_USE_XRGB8888 0
#endif

/* Use LCDIF LUT (or named color palette) which is 8-bit per-pixel */
/* Don't change here, change in mcux_config.h */
#ifndef DEMO_USE_LUT8
#define DEMO_USE_LUT8 0
#endif

#if DEMO_USE_XRGB8888
#define DEMO_BUFFER_PIXEL_FORMAT   kVIDEO_PixelFormatXRGB8888
#define DEMO_BUFFER_BYTE_PER_PIXEL 4
#elif DEMO_USE_LUT8
#define DEMO_BUFFER_PIXEL_FORMAT   kVIDEO_PixelFormatLUT8
#define DEMO_BUFFER_BYTE_PER_PIXEL 1
#else
#define DEMO_BUFFER_PIXEL_FORMAT   kVIDEO_PixelFormatRGB565
#define DEMO_BUFFER_BYTE_PER_PIXEL 2
#endif

#if ((DEMO_PANEL_RK055AHD091 == DEMO_PANEL) || (DEMO_PANEL_RK055MHD091 == DEMO_PANEL))

#define DEMO_PANEL_WIDTH  (720)
#define DEMO_PANEL_HEIGHT (1280)

#elif (DEMO_PANEL_RK055IQH091 == DEMO_PANEL)

#define DEMO_PANEL_WIDTH  (540)
#define DEMO_PANEL_HEIGHT (960)

#elif (DEMO_PANEL_ST7703_BV041HDE == DEMO_PANEL)

#define DEMO_PANEL_WIDTH  (720)
#define DEMO_PANEL_HEIGHT (1280)

#elif (DEMO_PANEL_RASPI_7INCH == DEMO_PANEL)

#define DEMO_PANEL_WIDTH  (800)
#define DEMO_PANEL_HEIGHT (480)

#endif

#define DEMO_FB_WIDTH  DEMO_PANEL_WIDTH
#define DEMO_FB_HEIGHT DEMO_PANEL_HEIGHT
#define DEMO_BUFFER_WIDTH  DEMO_FB_WIDTH
#define DEMO_BUFFER_HEIGHT DEMO_FB_HEIGHT

/* Where the frame buffer is shown in the screen. */
#define DEMO_BUFFER_START_X 0U
#define DEMO_BUFFER_START_Y 0U

#define DEMO_FB_STRIDE(x) ((x * DEMO_BUFFER_BYTE_PER_PIXEL + FRAME_BUFFER_ALIGN - 1) & ~(FRAME_BUFFER_ALIGN - 1))
#define DEMO_BUFFER_STRIDE_BYTE DEMO_FB_STRIDE(DEMO_FB_WIDTH)

/* There is not frame buffer aligned requirement, consider the 64-bit AXI data
 * bus width and 32-byte cache line size, the frame buffer alignment is set to
 * 32 byte.
 */
#define FRAME_BUFFER_ALIGN 32

extern const dc_fb_t g_dc;

/*******************************************************************************
 * API
 ******************************************************************************/
#if defined(__cplusplus)
extern "C" {
#endif /* __cplusplus */

status_t BOARD_PrepareDisplayController(void);

#if defined(__cplusplus)
}
#endif /* __cplusplus */

#endif /* _DISPLAY_SUPPORT_H_ */
