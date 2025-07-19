# ST7703 BV041HDE Panel Configuration Guide

## Overview
This guide explains how to configure the LVGL demo project to use the ST7703 BV041HDE-NB0-1Q00 display panel.

## Panel Specifications
- **Resolution**: 720 x 1280 pixels
- **Interface**: 2-lane MIPI DSI
- **Controller**: ST7703
- **Frame Rate**: 60Hz
- **Pixel Clock**: 65.54MHz
- **Panel Type**: IPS TFT LCD

## Timing Parameters
- **Horizontal Sync Width (HSA)**: 30
- **Horizontal Front Porch (HFP)**: 40  
- **Horizontal Back Porch (HBP)**: 40
- **Vertical Sync Width (VSA)**: 4
- **Vertical Front Porch (VFP)**: 16
- **Vertical Back Porch (VBP)**: 16

## Configuration Steps

### 1. Hardware Connections
Connect the ST7703 BV041HDE panel to the MIMXRT1170-EVKB board:
- Connect the panel to J48 connector
- Ensure 5V power is connected to J43
- Set J38 to 1-2 position

### 2. Software Configuration
Edit the `source/mcux_config.h` file and change:

```c
#define DEMO_PANEL 3
// #define CONFIG_DEMO_PANEL_RK055AHD091 0
// #define CONFIG_DEMO_PANEL_RK055IQH091 0  
// #define CONFIG_DEMO_PANEL_RK055MHD091A0 0
#define CONFIG_DEMO_PANEL_ST7703_BV041HDE 1
// #define CONFIG_DEMO_PANEL_RASPI_7INCH 0
```

### 3. Build and Flash
1. Build the project in your IDE
2. Flash the firmware to the MIMXRT1170-EVKB board
3. Reset the board to start the demo

## Panel Features
- **Display Technology**: IPS for wide viewing angles
- **Color Support**: 16.7M colors (RGB565 mode)
- **Touch Support**: Compatible with GT911 touch controller
- **Power Efficiency**: Optimized for mobile applications

## Troubleshooting
- If display remains blank, check power connections and panel cable
- Verify DEMO_PANEL is set to 3 in mcux_config.h
- Ensure the panel is properly seated in the J48 connector
- Check that the 5V power supply is stable

## Technical Notes
- The ST7703 controller supports various video modes; this configuration uses burst mode for optimal performance
- The 2-lane MIPI configuration provides sufficient bandwidth for 60Hz operation
- Hardware acceleration via VGLite GPU is supported for smooth graphics rendering 