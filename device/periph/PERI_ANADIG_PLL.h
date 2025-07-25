/*
** ###################################################################
**     Processors:          MIMXRT1171AVM8A
**                          MIMXRT1171AVM8B
**                          MIMXRT1171CVM8A
**                          MIMXRT1171CVM8B
**                          MIMXRT1171DVMAA
**                          MIMXRT1171DVMAB
**                          MIMXRT1172AVM8A
**                          MIMXRT1172AVM8B
**                          MIMXRT1172CVM8A
**                          MIMXRT1172CVM8B
**                          MIMXRT1172DVMAA
**                          MIMXRT1172DVMAB
**                          MIMXRT1173CVM8A_cm4
**                          MIMXRT1173CVM8A_cm7
**                          MIMXRT1173CVM8B_cm4
**                          MIMXRT1173CVM8B_cm7
**                          MIMXRT1175AVM8A_cm4
**                          MIMXRT1175AVM8A_cm7
**                          MIMXRT1175AVM8B_cm4
**                          MIMXRT1175AVM8B_cm7
**                          MIMXRT1175CVM8A_cm4
**                          MIMXRT1175CVM8A_cm7
**                          MIMXRT1175CVM8B_cm4
**                          MIMXRT1175CVM8B_cm7
**                          MIMXRT1175DVMAA_cm4
**                          MIMXRT1175DVMAA_cm7
**                          MIMXRT1175DVMAB_cm4
**                          MIMXRT1175DVMAB_cm7
**                          MIMXRT1176AVM8A_cm4
**                          MIMXRT1176AVM8A_cm7
**                          MIMXRT1176AVM8B_cm4
**                          MIMXRT1176AVM8B_cm7
**                          MIMXRT1176CVM8A_cm4
**                          MIMXRT1176CVM8A_cm7
**                          MIMXRT1176CVM8B_cm4
**                          MIMXRT1176CVM8B_cm7
**                          MIMXRT1176DVMAA_cm4
**                          MIMXRT1176DVMAA_cm7
**                          MIMXRT1176DVMAB_cm4
**                          MIMXRT1176DVMAB_cm7
**                          MIMXRT117HAVM8A_cm4
**                          MIMXRT117HAVM8A_cm7
**                          MIMXRT117HAVM8B_cm4
**                          MIMXRT117HAVM8B_cm7
**                          MIMXRT117HCVM8A_cm4
**                          MIMXRT117HCVM8A_cm7
**                          MIMXRT117HCVM8B_cm4
**                          MIMXRT117HCVM8B_cm7
**                          MIMXRT117HDVMAA_cm4
**                          MIMXRT117HDVMAA_cm7
**                          MIMXRT117HDVMAB_cm4
**                          MIMXRT117HDVMAB_cm7
**
**     Version:             rev. 2.0, 2024-10-29
**     Build:               b250520
**
**     Abstract:
**         CMSIS Peripheral Access Layer for ANADIG_PLL
**
**     Copyright 1997-2016 Freescale Semiconductor, Inc.
**     Copyright 2016-2025 NXP
**     SPDX-License-Identifier: BSD-3-Clause
**
**     http:                 www.nxp.com
**     mail:                 support@nxp.com
**
**     Revisions:
**     - rev. 0.1 (2018-03-05)
**         Initial version.
**     - rev. 1.0 (2020-12-29)
**         Update header files to align with IMXRT1170RM Rev.0.
**     - rev. 2.0 (2024-10-29)
**         Change the device header file from single flat file to multiple files based on peripherals,
**         each peripheral with dedicated header file located in periphN folder.
**
** ###################################################################
*/

/*!
 * @file PERI_ANADIG_PLL.h
 * @version 2.0
 * @date 2024-10-29
 * @brief CMSIS Peripheral Access Layer for ANADIG_PLL
 *
 * CMSIS Peripheral Access Layer for ANADIG_PLL
 */

#if !defined(PERI_ANADIG_PLL_H_)
#define PERI_ANADIG_PLL_H_                       /**< Symbol preventing repeated inclusion */

#if (defined(CPU_MIMXRT1171AVM8A) || defined(CPU_MIMXRT1171AVM8B) || defined(CPU_MIMXRT1171CVM8A) || defined(CPU_MIMXRT1171CVM8B) || defined(CPU_MIMXRT1171DVMAA) || defined(CPU_MIMXRT1171DVMAB))
#include "MIMXRT1171_COMMON.h"
#elif (defined(CPU_MIMXRT1172AVM8A) || defined(CPU_MIMXRT1172AVM8B) || defined(CPU_MIMXRT1172CVM8A) || defined(CPU_MIMXRT1172CVM8B) || defined(CPU_MIMXRT1172DVMAA) || defined(CPU_MIMXRT1172DVMAB))
#include "MIMXRT1172_COMMON.h"
#elif (defined(CPU_MIMXRT1173CVM8A_cm4) || defined(CPU_MIMXRT1173CVM8B_cm4))
#include "MIMXRT1173_cm4_COMMON.h"
#elif (defined(CPU_MIMXRT1173CVM8A_cm7) || defined(CPU_MIMXRT1173CVM8B_cm7))
#include "MIMXRT1173_cm7_COMMON.h"
#elif (defined(CPU_MIMXRT1175AVM8A_cm4) || defined(CPU_MIMXRT1175AVM8B_cm4) || defined(CPU_MIMXRT1175CVM8A_cm4) || defined(CPU_MIMXRT1175CVM8B_cm4) || defined(CPU_MIMXRT1175DVMAA_cm4) || defined(CPU_MIMXRT1175DVMAB_cm4))
#include "MIMXRT1175_cm4_COMMON.h"
#elif (defined(CPU_MIMXRT1175AVM8A_cm7) || defined(CPU_MIMXRT1175AVM8B_cm7) || defined(CPU_MIMXRT1175CVM8A_cm7) || defined(CPU_MIMXRT1175CVM8B_cm7) || defined(CPU_MIMXRT1175DVMAA_cm7) || defined(CPU_MIMXRT1175DVMAB_cm7))
#include "MIMXRT1175_cm7_COMMON.h"
#elif (defined(CPU_MIMXRT1176AVM8A_cm4) || defined(CPU_MIMXRT1176AVM8B_cm4) || defined(CPU_MIMXRT1176CVM8A_cm4) || defined(CPU_MIMXRT1176CVM8B_cm4) || defined(CPU_MIMXRT1176DVMAA_cm4) || defined(CPU_MIMXRT1176DVMAB_cm4))
#include "MIMXRT1176_cm4_COMMON.h"
#elif (defined(CPU_MIMXRT1176AVM8A_cm7) || defined(CPU_MIMXRT1176AVM8B_cm7) || defined(CPU_MIMXRT1176CVM8A_cm7) || defined(CPU_MIMXRT1176CVM8B_cm7) || defined(CPU_MIMXRT1176DVMAA_cm7) || defined(CPU_MIMXRT1176DVMAB_cm7))
#include "MIMXRT1176_cm7_COMMON.h"
#elif (defined(CPU_MIMXRT117HAVM8A_cm4) || defined(CPU_MIMXRT117HAVM8B_cm4) || defined(CPU_MIMXRT117HCVM8A_cm4) || defined(CPU_MIMXRT117HCVM8B_cm4) || defined(CPU_MIMXRT117HDVMAA_cm4) || defined(CPU_MIMXRT117HDVMAB_cm4))
#include "MIMXRT117H_cm4_COMMON.h"
#elif (defined(CPU_MIMXRT117HAVM8A_cm7) || defined(CPU_MIMXRT117HAVM8B_cm7) || defined(CPU_MIMXRT117HCVM8A_cm7) || defined(CPU_MIMXRT117HCVM8B_cm7) || defined(CPU_MIMXRT117HDVMAA_cm7) || defined(CPU_MIMXRT117HDVMAB_cm7))
#include "MIMXRT117H_cm7_COMMON.h"
#else
  #error "No valid CPU defined!"
#endif

/* ----------------------------------------------------------------------------
   -- Device Peripheral Access Layer
   ---------------------------------------------------------------------------- */

/*!
 * @addtogroup Peripheral_access_layer Device Peripheral Access Layer
 * @{
 */


/*
** Start of section using anonymous unions
*/

#if defined(__ARMCC_VERSION)
  #if (__ARMCC_VERSION >= 6010050)
    #pragma clang diagnostic push
  #else
    #pragma push
    #pragma anon_unions
  #endif
#elif defined(__CWCC__)
  #pragma push
  #pragma cpp_extensions on
#elif defined(__GNUC__)
  /* anonymous unions are enabled by default */
#elif defined(__IAR_SYSTEMS_ICC__)
  #pragma language=extended
#else
  #error Not supported compiler type
#endif

/* ----------------------------------------------------------------------------
   -- ANADIG_PLL Peripheral Access Layer
   ---------------------------------------------------------------------------- */

/*!
 * @addtogroup ANADIG_PLL_Peripheral_Access_Layer ANADIG_PLL Peripheral Access Layer
 * @{
 */

/** ANADIG_PLL - Register Layout Typedef */
typedef struct {
       uint8_t RESERVED_0[512];
  __IO uint32_t ARM_PLL_CTRL;                      /**< ARM_PLL_CTRL_REGISTER, offset: 0x200 */
       uint8_t RESERVED_1[12];
  __IO uint32_t SYS_PLL3_CTRL;                     /**< SYS_PLL3_CTRL_REGISTER, offset: 0x210 */
       uint8_t RESERVED_2[12];
  __IO uint32_t SYS_PLL3_UPDATE;                   /**< SYS_PLL3_UPDATE_REGISTER, offset: 0x220 */
       uint8_t RESERVED_3[12];
  __IO uint32_t SYS_PLL3_PFD;                      /**< SYS_PLL3_PFD_REGISTER, offset: 0x230 */
       uint8_t RESERVED_4[12];
  __IO uint32_t SYS_PLL2_CTRL;                     /**< SYS_PLL2_CTRL_REGISTER, offset: 0x240 */
       uint8_t RESERVED_5[12];
  __IO uint32_t SYS_PLL2_UPDATE;                   /**< SYS_PLL2_UPDATE_REGISTER, offset: 0x250 */
       uint8_t RESERVED_6[12];
  __IO uint32_t SYS_PLL2_SS;                       /**< SYS_PLL2_SS_REGISTER, offset: 0x260 */
       uint8_t RESERVED_7[12];
  __IO uint32_t SYS_PLL2_PFD;                      /**< SYS_PLL2_PFD_REGISTER, offset: 0x270 */
       uint8_t RESERVED_8[44];
  __IO uint32_t SYS_PLL2_MFD;                      /**< SYS_PLL2_MFD_REGISTER, offset: 0x2A0 */
       uint8_t RESERVED_9[12];
  __IO uint32_t SYS_PLL1_SS;                       /**< SYS_PLL1_SS_REGISTER, offset: 0x2B0 */
       uint8_t RESERVED_10[12];
  __IO uint32_t SYS_PLL1_CTRL;                     /**< SYS_PLL1_CTRL_REGISTER, offset: 0x2C0 */
       uint8_t RESERVED_11[12];
  __IO uint32_t SYS_PLL1_DENOMINATOR;              /**< SYS_PLL1_DENOMINATOR_REGISTER, offset: 0x2D0 */
       uint8_t RESERVED_12[12];
  __IO uint32_t SYS_PLL1_NUMERATOR;                /**< SYS_PLL1_NUMERATOR_REGISTER, offset: 0x2E0 */
       uint8_t RESERVED_13[12];
  __IO uint32_t SYS_PLL1_DIV_SELECT;               /**< SYS_PLL1_DIV_SELECT_REGISTER, offset: 0x2F0 */
       uint8_t RESERVED_14[12];
  __IO uint32_t PLL_AUDIO_CTRL;                    /**< PLL_AUDIO_CTRL_REGISTER, offset: 0x300 */
       uint8_t RESERVED_15[12];
  __IO uint32_t PLL_AUDIO_SS;                      /**< PLL_AUDIO_SS_REGISTER, offset: 0x310 */
       uint8_t RESERVED_16[12];
  __IO uint32_t PLL_AUDIO_DENOMINATOR;             /**< PLL_AUDIO_DENOMINATOR_REGISTER, offset: 0x320 */
       uint8_t RESERVED_17[12];
  __IO uint32_t PLL_AUDIO_NUMERATOR;               /**< PLL_AUDIO_NUMERATOR_REGISTER, offset: 0x330 */
       uint8_t RESERVED_18[12];
  __IO uint32_t PLL_AUDIO_DIV_SELECT;              /**< PLL_AUDIO_DIV_SELECT_REGISTER, offset: 0x340 */
       uint8_t RESERVED_19[12];
  __IO uint32_t PLL_VIDEO_CTRL;                    /**< PLL_VIDEO_CTRL_REGISTER, offset: 0x350 */
       uint8_t RESERVED_20[12];
  __IO uint32_t PLL_VIDEO_SS;                      /**< PLL_VIDEO_SS_REGISTER, offset: 0x360 */
       uint8_t RESERVED_21[12];
  __IO uint32_t PLL_VIDEO_DENOMINATOR;             /**< PLL_VIDEO_DENOMINATOR_REGISTER, offset: 0x370 */
       uint8_t RESERVED_22[12];
  __IO uint32_t PLL_VIDEO_NUMERATOR;               /**< PLL_VIDEO_NUMERATOR_REGISTER, offset: 0x380 */
       uint8_t RESERVED_23[12];
  __IO uint32_t PLL_VIDEO_DIV_SELECT;              /**< PLL_VIDEO_DIV_SELECT_REGISTER, offset: 0x390 */
} ANADIG_PLL_Type;

/* ----------------------------------------------------------------------------
   -- ANADIG_PLL Register Masks
   ---------------------------------------------------------------------------- */

/*!
 * @addtogroup ANADIG_PLL_Register_Masks ANADIG_PLL Register Masks
 * @{
 */

/*! @name ARM_PLL_CTRL - ARM_PLL_CTRL_REGISTER */
/*! @{ */

#define ANADIG_PLL_ARM_PLL_CTRL_DIV_SELECT_MASK  (0xFFU)
#define ANADIG_PLL_ARM_PLL_CTRL_DIV_SELECT_SHIFT (0U)
/*! DIV_SELECT - DIV_SELECT */
#define ANADIG_PLL_ARM_PLL_CTRL_DIV_SELECT(x)    (((uint32_t)(((uint32_t)(x)) << ANADIG_PLL_ARM_PLL_CTRL_DIV_SELECT_SHIFT)) & ANADIG_PLL_ARM_PLL_CTRL_DIV_SELECT_MASK)

#define ANADIG_PLL_ARM_PLL_CTRL_HOLD_RING_OFF_MASK (0x1000U)
#define ANADIG_PLL_ARM_PLL_CTRL_HOLD_RING_OFF_SHIFT (12U)
/*! HOLD_RING_OFF - PLL Start up initialization
 *  0b0..Normal operation
 *  0b1..Initialize PLL start up
 */
#define ANADIG_PLL_ARM_PLL_CTRL_HOLD_RING_OFF(x) (((uint32_t)(((uint32_t)(x)) << ANADIG_PLL_ARM_PLL_CTRL_HOLD_RING_OFF_SHIFT)) & ANADIG_PLL_ARM_PLL_CTRL_HOLD_RING_OFF_MASK)

#define ANADIG_PLL_ARM_PLL_CTRL_POWERUP_MASK     (0x2000U)
#define ANADIG_PLL_ARM_PLL_CTRL_POWERUP_SHIFT    (13U)
/*! POWERUP - Powers up the PLL.
 *  0b0..Power down the PLL
 *  0b1..Power Up the PLL
 */
#define ANADIG_PLL_ARM_PLL_CTRL_POWERUP(x)       (((uint32_t)(((uint32_t)(x)) << ANADIG_PLL_ARM_PLL_CTRL_POWERUP_SHIFT)) & ANADIG_PLL_ARM_PLL_CTRL_POWERUP_MASK)

#define ANADIG_PLL_ARM_PLL_CTRL_ENABLE_CLK_MASK  (0x4000U)
#define ANADIG_PLL_ARM_PLL_CTRL_ENABLE_CLK_SHIFT (14U)
/*! ENABLE_CLK - Enable the clock output.
 *  0b0..Disable the clock
 *  0b1..Enable the clock
 */
#define ANADIG_PLL_ARM_PLL_CTRL_ENABLE_CLK(x)    (((uint32_t)(((uint32_t)(x)) << ANADIG_PLL_ARM_PLL_CTRL_ENABLE_CLK_SHIFT)) & ANADIG_PLL_ARM_PLL_CTRL_ENABLE_CLK_MASK)

#define ANADIG_PLL_ARM_PLL_CTRL_POST_DIV_SEL_MASK (0x18000U)
#define ANADIG_PLL_ARM_PLL_CTRL_POST_DIV_SEL_SHIFT (15U)
/*! POST_DIV_SEL - POST_DIV_SEL
 *  0b00..Divide by 2
 *  0b01..Divide by 4
 *  0b10..Divide by 8
 *  0b11..Divide by 1
 */
#define ANADIG_PLL_ARM_PLL_CTRL_POST_DIV_SEL(x)  (((uint32_t)(((uint32_t)(x)) << ANADIG_PLL_ARM_PLL_CTRL_POST_DIV_SEL_SHIFT)) & ANADIG_PLL_ARM_PLL_CTRL_POST_DIV_SEL_MASK)

#define ANADIG_PLL_ARM_PLL_CTRL_BYPASS_MASK      (0x20000U)
#define ANADIG_PLL_ARM_PLL_CTRL_BYPASS_SHIFT     (17U)
/*! BYPASS - Bypass the pll.
 *  0b0..Function mode
 *  0b1..Bypass Mode
 */
#define ANADIG_PLL_ARM_PLL_CTRL_BYPASS(x)        (((uint32_t)(((uint32_t)(x)) << ANADIG_PLL_ARM_PLL_CTRL_BYPASS_SHIFT)) & ANADIG_PLL_ARM_PLL_CTRL_BYPASS_MASK)

#define ANADIG_PLL_ARM_PLL_CTRL_ARM_PLL_STABLE_MASK (0x20000000U)
#define ANADIG_PLL_ARM_PLL_CTRL_ARM_PLL_STABLE_SHIFT (29U)
/*! ARM_PLL_STABLE - ARM_PLL_STABLE
 *  0b0..ARM PLL is not stable
 *  0b1..ARM PLL is stable
 */
#define ANADIG_PLL_ARM_PLL_CTRL_ARM_PLL_STABLE(x) (((uint32_t)(((uint32_t)(x)) << ANADIG_PLL_ARM_PLL_CTRL_ARM_PLL_STABLE_SHIFT)) & ANADIG_PLL_ARM_PLL_CTRL_ARM_PLL_STABLE_MASK)

#define ANADIG_PLL_ARM_PLL_CTRL_ARM_PLL_GATE_MASK (0x40000000U)
#define ANADIG_PLL_ARM_PLL_CTRL_ARM_PLL_GATE_SHIFT (30U)
/*! ARM_PLL_GATE - ARM_PLL_GATE
 *  0b0..Clock is not gated
 *  0b1..Clock is gated
 */
#define ANADIG_PLL_ARM_PLL_CTRL_ARM_PLL_GATE(x)  (((uint32_t)(((uint32_t)(x)) << ANADIG_PLL_ARM_PLL_CTRL_ARM_PLL_GATE_SHIFT)) & ANADIG_PLL_ARM_PLL_CTRL_ARM_PLL_GATE_MASK)

#define ANADIG_PLL_ARM_PLL_CTRL_ARM_PLL_CONTROL_MODE_MASK (0x80000000U)
#define ANADIG_PLL_ARM_PLL_CTRL_ARM_PLL_CONTROL_MODE_SHIFT (31U)
/*! ARM_PLL_CONTROL_MODE - pll_arm_control_mode
 *  0b0..Software Mode (Default)
 *  0b1..GPC Mode
 */
#define ANADIG_PLL_ARM_PLL_CTRL_ARM_PLL_CONTROL_MODE(x) (((uint32_t)(((uint32_t)(x)) << ANADIG_PLL_ARM_PLL_CTRL_ARM_PLL_CONTROL_MODE_SHIFT)) & ANADIG_PLL_ARM_PLL_CTRL_ARM_PLL_CONTROL_MODE_MASK)
/*! @} */

/*! @name SYS_PLL3_CTRL - SYS_PLL3_CTRL_REGISTER */
/*! @{ */

#define ANADIG_PLL_SYS_PLL3_CTRL_SYS_PLL3_DIV2_MASK (0x8U)
#define ANADIG_PLL_SYS_PLL3_CTRL_SYS_PLL3_DIV2_SHIFT (3U)
/*! SYS_PLL3_DIV2 - SYS PLL3 DIV2 gate */
#define ANADIG_PLL_SYS_PLL3_CTRL_SYS_PLL3_DIV2(x) (((uint32_t)(((uint32_t)(x)) << ANADIG_PLL_SYS_PLL3_CTRL_SYS_PLL3_DIV2_SHIFT)) & ANADIG_PLL_SYS_PLL3_CTRL_SYS_PLL3_DIV2_MASK)

#define ANADIG_PLL_SYS_PLL3_CTRL_PLL_REG_EN_MASK (0x10U)
#define ANADIG_PLL_SYS_PLL3_CTRL_PLL_REG_EN_SHIFT (4U)
/*! PLL_REG_EN - Enable Internal PLL Regulator */
#define ANADIG_PLL_SYS_PLL3_CTRL_PLL_REG_EN(x)   (((uint32_t)(((uint32_t)(x)) << ANADIG_PLL_SYS_PLL3_CTRL_PLL_REG_EN_SHIFT)) & ANADIG_PLL_SYS_PLL3_CTRL_PLL_REG_EN_MASK)

#define ANADIG_PLL_SYS_PLL3_CTRL_HOLD_RING_OFF_MASK (0x800U)
#define ANADIG_PLL_SYS_PLL3_CTRL_HOLD_RING_OFF_SHIFT (11U)
/*! HOLD_RING_OFF - PLL Start up initialization
 *  0b0..Normal operation
 *  0b1..Initialize PLL start up
 */
#define ANADIG_PLL_SYS_PLL3_CTRL_HOLD_RING_OFF(x) (((uint32_t)(((uint32_t)(x)) << ANADIG_PLL_SYS_PLL3_CTRL_HOLD_RING_OFF_SHIFT)) & ANADIG_PLL_SYS_PLL3_CTRL_HOLD_RING_OFF_MASK)

#define ANADIG_PLL_SYS_PLL3_CTRL_ENABLE_CLK_MASK (0x2000U)
#define ANADIG_PLL_SYS_PLL3_CTRL_ENABLE_CLK_SHIFT (13U)
/*! ENABLE_CLK - Enable the clock output.
 *  0b0..Disable the clock
 *  0b1..Enable the clock
 */
#define ANADIG_PLL_SYS_PLL3_CTRL_ENABLE_CLK(x)   (((uint32_t)(((uint32_t)(x)) << ANADIG_PLL_SYS_PLL3_CTRL_ENABLE_CLK_SHIFT)) & ANADIG_PLL_SYS_PLL3_CTRL_ENABLE_CLK_MASK)

#define ANADIG_PLL_SYS_PLL3_CTRL_BYPASS_MASK     (0x10000U)
#define ANADIG_PLL_SYS_PLL3_CTRL_BYPASS_SHIFT    (16U)
/*! BYPASS - BYPASS
 *  0b0..Function mode
 *  0b1..Bypass Mode
 */
#define ANADIG_PLL_SYS_PLL3_CTRL_BYPASS(x)       (((uint32_t)(((uint32_t)(x)) << ANADIG_PLL_SYS_PLL3_CTRL_BYPASS_SHIFT)) & ANADIG_PLL_SYS_PLL3_CTRL_BYPASS_MASK)

#define ANADIG_PLL_SYS_PLL3_CTRL_POWERUP_MASK    (0x200000U)
#define ANADIG_PLL_SYS_PLL3_CTRL_POWERUP_SHIFT   (21U)
/*! POWERUP - Powers up the PLL.
 *  0b0..Power down the PLL
 *  0b1..Power Up the PLL
 */
#define ANADIG_PLL_SYS_PLL3_CTRL_POWERUP(x)      (((uint32_t)(((uint32_t)(x)) << ANADIG_PLL_SYS_PLL3_CTRL_POWERUP_SHIFT)) & ANADIG_PLL_SYS_PLL3_CTRL_POWERUP_MASK)

#define ANADIG_PLL_SYS_PLL3_CTRL_SYS_PLL3_DIV2_CONTROL_MODE_MASK (0x10000000U)
#define ANADIG_PLL_SYS_PLL3_CTRL_SYS_PLL3_DIV2_CONTROL_MODE_SHIFT (28U)
/*! SYS_PLL3_DIV2_CONTROL_MODE - SYS_PLL3_DIV2_CONTROL_MODE
 *  0b0..Software Mode (Default)
 *  0b1..GPC Mode
 */
#define ANADIG_PLL_SYS_PLL3_CTRL_SYS_PLL3_DIV2_CONTROL_MODE(x) (((uint32_t)(((uint32_t)(x)) << ANADIG_PLL_SYS_PLL3_CTRL_SYS_PLL3_DIV2_CONTROL_MODE_SHIFT)) & ANADIG_PLL_SYS_PLL3_CTRL_SYS_PLL3_DIV2_CONTROL_MODE_MASK)

#define ANADIG_PLL_SYS_PLL3_CTRL_SYS_PLL3_STABLE_MASK (0x20000000U)
#define ANADIG_PLL_SYS_PLL3_CTRL_SYS_PLL3_STABLE_SHIFT (29U)
/*! SYS_PLL3_STABLE - SYS_PLL3_STABLE */
#define ANADIG_PLL_SYS_PLL3_CTRL_SYS_PLL3_STABLE(x) (((uint32_t)(((uint32_t)(x)) << ANADIG_PLL_SYS_PLL3_CTRL_SYS_PLL3_STABLE_SHIFT)) & ANADIG_PLL_SYS_PLL3_CTRL_SYS_PLL3_STABLE_MASK)

#define ANADIG_PLL_SYS_PLL3_CTRL_SYS_PLL3_GATE_MASK (0x40000000U)
#define ANADIG_PLL_SYS_PLL3_CTRL_SYS_PLL3_GATE_SHIFT (30U)
/*! SYS_PLL3_GATE - SYS_PLL3_GATE
 *  0b0..Clock is not gated
 *  0b1..Clock is gated
 */
#define ANADIG_PLL_SYS_PLL3_CTRL_SYS_PLL3_GATE(x) (((uint32_t)(((uint32_t)(x)) << ANADIG_PLL_SYS_PLL3_CTRL_SYS_PLL3_GATE_SHIFT)) & ANADIG_PLL_SYS_PLL3_CTRL_SYS_PLL3_GATE_MASK)

#define ANADIG_PLL_SYS_PLL3_CTRL_SYS_PLL3_CONTROL_MODE_MASK (0x80000000U)
#define ANADIG_PLL_SYS_PLL3_CTRL_SYS_PLL3_CONTROL_MODE_SHIFT (31U)
/*! SYS_PLL3_CONTROL_MODE - SYS_PLL3_control_mode
 *  0b0..Software Mode (Default)
 *  0b1..GPC Mode
 */
#define ANADIG_PLL_SYS_PLL3_CTRL_SYS_PLL3_CONTROL_MODE(x) (((uint32_t)(((uint32_t)(x)) << ANADIG_PLL_SYS_PLL3_CTRL_SYS_PLL3_CONTROL_MODE_SHIFT)) & ANADIG_PLL_SYS_PLL3_CTRL_SYS_PLL3_CONTROL_MODE_MASK)
/*! @} */

/*! @name SYS_PLL3_UPDATE - SYS_PLL3_UPDATE_REGISTER */
/*! @{ */

#define ANADIG_PLL_SYS_PLL3_UPDATE_PFD0_UPDATE_MASK (0x2U)
#define ANADIG_PLL_SYS_PLL3_UPDATE_PFD0_UPDATE_SHIFT (1U)
/*! PFD0_UPDATE - PFD0_OVERRIDE */
#define ANADIG_PLL_SYS_PLL3_UPDATE_PFD0_UPDATE(x) (((uint32_t)(((uint32_t)(x)) << ANADIG_PLL_SYS_PLL3_UPDATE_PFD0_UPDATE_SHIFT)) & ANADIG_PLL_SYS_PLL3_UPDATE_PFD0_UPDATE_MASK)

#define ANADIG_PLL_SYS_PLL3_UPDATE_PFD1_UPDATE_MASK (0x4U)
#define ANADIG_PLL_SYS_PLL3_UPDATE_PFD1_UPDATE_SHIFT (2U)
/*! PFD1_UPDATE - PFD1_OVERRIDE */
#define ANADIG_PLL_SYS_PLL3_UPDATE_PFD1_UPDATE(x) (((uint32_t)(((uint32_t)(x)) << ANADIG_PLL_SYS_PLL3_UPDATE_PFD1_UPDATE_SHIFT)) & ANADIG_PLL_SYS_PLL3_UPDATE_PFD1_UPDATE_MASK)

#define ANADIG_PLL_SYS_PLL3_UPDATE_PFD2_UPDATE_MASK (0x8U)
#define ANADIG_PLL_SYS_PLL3_UPDATE_PFD2_UPDATE_SHIFT (3U)
/*! PFD2_UPDATE - PFD2_OVERRIDE */
#define ANADIG_PLL_SYS_PLL3_UPDATE_PFD2_UPDATE(x) (((uint32_t)(((uint32_t)(x)) << ANADIG_PLL_SYS_PLL3_UPDATE_PFD2_UPDATE_SHIFT)) & ANADIG_PLL_SYS_PLL3_UPDATE_PFD2_UPDATE_MASK)

#define ANADIG_PLL_SYS_PLL3_UPDATE_PFD3_UPDATE_MASK (0x10U)
#define ANADIG_PLL_SYS_PLL3_UPDATE_PFD3_UPDATE_SHIFT (4U)
/*! PFD3_UPDATE - PFD3_UPDATE */
#define ANADIG_PLL_SYS_PLL3_UPDATE_PFD3_UPDATE(x) (((uint32_t)(((uint32_t)(x)) << ANADIG_PLL_SYS_PLL3_UPDATE_PFD3_UPDATE_SHIFT)) & ANADIG_PLL_SYS_PLL3_UPDATE_PFD3_UPDATE_MASK)

#define ANADIG_PLL_SYS_PLL3_UPDATE_PFD0_CONTROL_MODE_MASK (0x20U)
#define ANADIG_PLL_SYS_PLL3_UPDATE_PFD0_CONTROL_MODE_SHIFT (5U)
/*! PFD0_CONTROL_MODE - pfd0_control_mode
 *  0b0..Software Mode (Default)
 *  0b1..GPC Mode
 */
#define ANADIG_PLL_SYS_PLL3_UPDATE_PFD0_CONTROL_MODE(x) (((uint32_t)(((uint32_t)(x)) << ANADIG_PLL_SYS_PLL3_UPDATE_PFD0_CONTROL_MODE_SHIFT)) & ANADIG_PLL_SYS_PLL3_UPDATE_PFD0_CONTROL_MODE_MASK)

#define ANADIG_PLL_SYS_PLL3_UPDATE_PFD1_CONTROL_MODE_MASK (0x40U)
#define ANADIG_PLL_SYS_PLL3_UPDATE_PFD1_CONTROL_MODE_SHIFT (6U)
/*! PFD1_CONTROL_MODE - pfd1_control_mode
 *  0b0..Software Mode (Default)
 *  0b1..GPC Mode
 */
#define ANADIG_PLL_SYS_PLL3_UPDATE_PFD1_CONTROL_MODE(x) (((uint32_t)(((uint32_t)(x)) << ANADIG_PLL_SYS_PLL3_UPDATE_PFD1_CONTROL_MODE_SHIFT)) & ANADIG_PLL_SYS_PLL3_UPDATE_PFD1_CONTROL_MODE_MASK)

#define ANADIG_PLL_SYS_PLL3_UPDATE_PDF2_CONTROL_MODE_MASK (0x80U)
#define ANADIG_PLL_SYS_PLL3_UPDATE_PDF2_CONTROL_MODE_SHIFT (7U)
/*! PDF2_CONTROL_MODE - pdf2_control_mode
 *  0b0..Software Mode (Default)
 *  0b1..GPC Mode
 */
#define ANADIG_PLL_SYS_PLL3_UPDATE_PDF2_CONTROL_MODE(x) (((uint32_t)(((uint32_t)(x)) << ANADIG_PLL_SYS_PLL3_UPDATE_PDF2_CONTROL_MODE_SHIFT)) & ANADIG_PLL_SYS_PLL3_UPDATE_PDF2_CONTROL_MODE_MASK)

#define ANADIG_PLL_SYS_PLL3_UPDATE_PFD3_CONTROL_MODE_MASK (0x100U)
#define ANADIG_PLL_SYS_PLL3_UPDATE_PFD3_CONTROL_MODE_SHIFT (8U)
/*! PFD3_CONTROL_MODE - pfd3_control_mode
 *  0b0..Software Mode (Default)
 *  0b1..GPC Mode
 */
#define ANADIG_PLL_SYS_PLL3_UPDATE_PFD3_CONTROL_MODE(x) (((uint32_t)(((uint32_t)(x)) << ANADIG_PLL_SYS_PLL3_UPDATE_PFD3_CONTROL_MODE_SHIFT)) & ANADIG_PLL_SYS_PLL3_UPDATE_PFD3_CONTROL_MODE_MASK)
/*! @} */

/*! @name SYS_PLL3_PFD - SYS_PLL3_PFD_REGISTER */
/*! @{ */

#define ANADIG_PLL_SYS_PLL3_PFD_PFD0_FRAC_MASK   (0x3FU)
#define ANADIG_PLL_SYS_PLL3_PFD_PFD0_FRAC_SHIFT  (0U)
/*! PFD0_FRAC - PFD0_FRAC */
#define ANADIG_PLL_SYS_PLL3_PFD_PFD0_FRAC(x)     (((uint32_t)(((uint32_t)(x)) << ANADIG_PLL_SYS_PLL3_PFD_PFD0_FRAC_SHIFT)) & ANADIG_PLL_SYS_PLL3_PFD_PFD0_FRAC_MASK)

#define ANADIG_PLL_SYS_PLL3_PFD_PFD0_STABLE_MASK (0x40U)
#define ANADIG_PLL_SYS_PLL3_PFD_PFD0_STABLE_SHIFT (6U)
/*! PFD0_STABLE - PFD0_STABLE */
#define ANADIG_PLL_SYS_PLL3_PFD_PFD0_STABLE(x)   (((uint32_t)(((uint32_t)(x)) << ANADIG_PLL_SYS_PLL3_PFD_PFD0_STABLE_SHIFT)) & ANADIG_PLL_SYS_PLL3_PFD_PFD0_STABLE_MASK)

#define ANADIG_PLL_SYS_PLL3_PFD_PFD0_DIV1_CLKGATE_MASK (0x80U)
#define ANADIG_PLL_SYS_PLL3_PFD_PFD0_DIV1_CLKGATE_SHIFT (7U)
/*! PFD0_DIV1_CLKGATE - PFD0_DIV1_CLKGATE
 *  0b0..ref_pfd0 fractional divider clock is enabled
 *  0b1..Fractional divider clock (reference ref_pfd0) is off (power savings
 */
#define ANADIG_PLL_SYS_PLL3_PFD_PFD0_DIV1_CLKGATE(x) (((uint32_t)(((uint32_t)(x)) << ANADIG_PLL_SYS_PLL3_PFD_PFD0_DIV1_CLKGATE_SHIFT)) & ANADIG_PLL_SYS_PLL3_PFD_PFD0_DIV1_CLKGATE_MASK)

#define ANADIG_PLL_SYS_PLL3_PFD_PFD1_FRAC_MASK   (0x3F00U)
#define ANADIG_PLL_SYS_PLL3_PFD_PFD1_FRAC_SHIFT  (8U)
/*! PFD1_FRAC - PFD1_FRAC */
#define ANADIG_PLL_SYS_PLL3_PFD_PFD1_FRAC(x)     (((uint32_t)(((uint32_t)(x)) << ANADIG_PLL_SYS_PLL3_PFD_PFD1_FRAC_SHIFT)) & ANADIG_PLL_SYS_PLL3_PFD_PFD1_FRAC_MASK)

#define ANADIG_PLL_SYS_PLL3_PFD_PFD1_STABLE_MASK (0x4000U)
#define ANADIG_PLL_SYS_PLL3_PFD_PFD1_STABLE_SHIFT (14U)
/*! PFD1_STABLE - PFD1_STABLE */
#define ANADIG_PLL_SYS_PLL3_PFD_PFD1_STABLE(x)   (((uint32_t)(((uint32_t)(x)) << ANADIG_PLL_SYS_PLL3_PFD_PFD1_STABLE_SHIFT)) & ANADIG_PLL_SYS_PLL3_PFD_PFD1_STABLE_MASK)

#define ANADIG_PLL_SYS_PLL3_PFD_PFD1_DIV1_CLKGATE_MASK (0x8000U)
#define ANADIG_PLL_SYS_PLL3_PFD_PFD1_DIV1_CLKGATE_SHIFT (15U)
/*! PFD1_DIV1_CLKGATE - PFD1_DIV1_CLKGATE
 *  0b0..ref_pfd1 fractional divider clock is enabled
 *  0b1..Fractional divider clock (reference ref_pfd1) is off (power savings)
 */
#define ANADIG_PLL_SYS_PLL3_PFD_PFD1_DIV1_CLKGATE(x) (((uint32_t)(((uint32_t)(x)) << ANADIG_PLL_SYS_PLL3_PFD_PFD1_DIV1_CLKGATE_SHIFT)) & ANADIG_PLL_SYS_PLL3_PFD_PFD1_DIV1_CLKGATE_MASK)

#define ANADIG_PLL_SYS_PLL3_PFD_PFD2_FRAC_MASK   (0x3F0000U)
#define ANADIG_PLL_SYS_PLL3_PFD_PFD2_FRAC_SHIFT  (16U)
/*! PFD2_FRAC - PFD2_FRAC */
#define ANADIG_PLL_SYS_PLL3_PFD_PFD2_FRAC(x)     (((uint32_t)(((uint32_t)(x)) << ANADIG_PLL_SYS_PLL3_PFD_PFD2_FRAC_SHIFT)) & ANADIG_PLL_SYS_PLL3_PFD_PFD2_FRAC_MASK)

#define ANADIG_PLL_SYS_PLL3_PFD_PFD2_STABLE_MASK (0x400000U)
#define ANADIG_PLL_SYS_PLL3_PFD_PFD2_STABLE_SHIFT (22U)
/*! PFD2_STABLE - PFD2_STABLE */
#define ANADIG_PLL_SYS_PLL3_PFD_PFD2_STABLE(x)   (((uint32_t)(((uint32_t)(x)) << ANADIG_PLL_SYS_PLL3_PFD_PFD2_STABLE_SHIFT)) & ANADIG_PLL_SYS_PLL3_PFD_PFD2_STABLE_MASK)

#define ANADIG_PLL_SYS_PLL3_PFD_PFD2_DIV1_CLKGATE_MASK (0x800000U)
#define ANADIG_PLL_SYS_PLL3_PFD_PFD2_DIV1_CLKGATE_SHIFT (23U)
/*! PFD2_DIV1_CLKGATE - PFD2_DIV1_CLKGATE
 *  0b0..ref_pfd2 fractional divider clock is enabled
 *  0b1..Fractional divider clock (reference ref_pfd2) is off (power savings)
 */
#define ANADIG_PLL_SYS_PLL3_PFD_PFD2_DIV1_CLKGATE(x) (((uint32_t)(((uint32_t)(x)) << ANADIG_PLL_SYS_PLL3_PFD_PFD2_DIV1_CLKGATE_SHIFT)) & ANADIG_PLL_SYS_PLL3_PFD_PFD2_DIV1_CLKGATE_MASK)

#define ANADIG_PLL_SYS_PLL3_PFD_PFD3_FRAC_MASK   (0x3F000000U)
#define ANADIG_PLL_SYS_PLL3_PFD_PFD3_FRAC_SHIFT  (24U)
/*! PFD3_FRAC - PFD3_FRAC */
#define ANADIG_PLL_SYS_PLL3_PFD_PFD3_FRAC(x)     (((uint32_t)(((uint32_t)(x)) << ANADIG_PLL_SYS_PLL3_PFD_PFD3_FRAC_SHIFT)) & ANADIG_PLL_SYS_PLL3_PFD_PFD3_FRAC_MASK)

#define ANADIG_PLL_SYS_PLL3_PFD_PFD3_STABLE_MASK (0x40000000U)
#define ANADIG_PLL_SYS_PLL3_PFD_PFD3_STABLE_SHIFT (30U)
/*! PFD3_STABLE - PFD3_STABLE */
#define ANADIG_PLL_SYS_PLL3_PFD_PFD3_STABLE(x)   (((uint32_t)(((uint32_t)(x)) << ANADIG_PLL_SYS_PLL3_PFD_PFD3_STABLE_SHIFT)) & ANADIG_PLL_SYS_PLL3_PFD_PFD3_STABLE_MASK)

#define ANADIG_PLL_SYS_PLL3_PFD_PFD3_DIV1_CLKGATE_MASK (0x80000000U)
#define ANADIG_PLL_SYS_PLL3_PFD_PFD3_DIV1_CLKGATE_SHIFT (31U)
/*! PFD3_DIV1_CLKGATE - PFD3_DIV1_CLKGATE
 *  0b0..ref_pfd3 fractional divider clock is enabled
 *  0b1..Fractional divider clock (reference ref_pfd3) is off (power savings)
 */
#define ANADIG_PLL_SYS_PLL3_PFD_PFD3_DIV1_CLKGATE(x) (((uint32_t)(((uint32_t)(x)) << ANADIG_PLL_SYS_PLL3_PFD_PFD3_DIV1_CLKGATE_SHIFT)) & ANADIG_PLL_SYS_PLL3_PFD_PFD3_DIV1_CLKGATE_MASK)
/*! @} */

/*! @name SYS_PLL2_CTRL - SYS_PLL2_CTRL_REGISTER */
/*! @{ */

#define ANADIG_PLL_SYS_PLL2_CTRL_PLL_REG_EN_MASK (0x8U)
#define ANADIG_PLL_SYS_PLL2_CTRL_PLL_REG_EN_SHIFT (3U)
/*! PLL_REG_EN - Enable Internal PLL Regulator */
#define ANADIG_PLL_SYS_PLL2_CTRL_PLL_REG_EN(x)   (((uint32_t)(((uint32_t)(x)) << ANADIG_PLL_SYS_PLL2_CTRL_PLL_REG_EN_SHIFT)) & ANADIG_PLL_SYS_PLL2_CTRL_PLL_REG_EN_MASK)

#define ANADIG_PLL_SYS_PLL2_CTRL_HOLD_RING_OFF_MASK (0x800U)
#define ANADIG_PLL_SYS_PLL2_CTRL_HOLD_RING_OFF_SHIFT (11U)
/*! HOLD_RING_OFF - PLL Start up initialization
 *  0b0..Normal operation
 *  0b1..Initialize PLL start up
 */
#define ANADIG_PLL_SYS_PLL2_CTRL_HOLD_RING_OFF(x) (((uint32_t)(((uint32_t)(x)) << ANADIG_PLL_SYS_PLL2_CTRL_HOLD_RING_OFF_SHIFT)) & ANADIG_PLL_SYS_PLL2_CTRL_HOLD_RING_OFF_MASK)

#define ANADIG_PLL_SYS_PLL2_CTRL_ENABLE_CLK_MASK (0x2000U)
#define ANADIG_PLL_SYS_PLL2_CTRL_ENABLE_CLK_SHIFT (13U)
/*! ENABLE_CLK - Enable the clock output.
 *  0b0..Disable the clock
 *  0b1..Enable the clock
 */
#define ANADIG_PLL_SYS_PLL2_CTRL_ENABLE_CLK(x)   (((uint32_t)(((uint32_t)(x)) << ANADIG_PLL_SYS_PLL2_CTRL_ENABLE_CLK_SHIFT)) & ANADIG_PLL_SYS_PLL2_CTRL_ENABLE_CLK_MASK)

#define ANADIG_PLL_SYS_PLL2_CTRL_BYPASS_MASK     (0x10000U)
#define ANADIG_PLL_SYS_PLL2_CTRL_BYPASS_SHIFT    (16U)
/*! BYPASS - Bypass the pll.
 *  0b0..Function mode
 *  0b1..Bypass Mode
 */
#define ANADIG_PLL_SYS_PLL2_CTRL_BYPASS(x)       (((uint32_t)(((uint32_t)(x)) << ANADIG_PLL_SYS_PLL2_CTRL_BYPASS_SHIFT)) & ANADIG_PLL_SYS_PLL2_CTRL_BYPASS_MASK)

#define ANADIG_PLL_SYS_PLL2_CTRL_DITHER_ENABLE_MASK (0x20000U)
#define ANADIG_PLL_SYS_PLL2_CTRL_DITHER_ENABLE_SHIFT (17U)
/*! DITHER_ENABLE - DITHER_ENABLE
 *  0b0..Disable Dither
 *  0b1..Enable Dither
 */
#define ANADIG_PLL_SYS_PLL2_CTRL_DITHER_ENABLE(x) (((uint32_t)(((uint32_t)(x)) << ANADIG_PLL_SYS_PLL2_CTRL_DITHER_ENABLE_SHIFT)) & ANADIG_PLL_SYS_PLL2_CTRL_DITHER_ENABLE_MASK)

#define ANADIG_PLL_SYS_PLL2_CTRL_PFD_OFFSET_EN_MASK (0x40000U)
#define ANADIG_PLL_SYS_PLL2_CTRL_PFD_OFFSET_EN_SHIFT (18U)
/*! PFD_OFFSET_EN - PFD_OFFSET_EN */
#define ANADIG_PLL_SYS_PLL2_CTRL_PFD_OFFSET_EN(x) (((uint32_t)(((uint32_t)(x)) << ANADIG_PLL_SYS_PLL2_CTRL_PFD_OFFSET_EN_SHIFT)) & ANADIG_PLL_SYS_PLL2_CTRL_PFD_OFFSET_EN_MASK)

#define ANADIG_PLL_SYS_PLL2_CTRL_PLL_DDR_OVERRIDE_MASK (0x80000U)
#define ANADIG_PLL_SYS_PLL2_CTRL_PLL_DDR_OVERRIDE_SHIFT (19U)
/*! PLL_DDR_OVERRIDE - PLL_DDR_OVERRIDE */
#define ANADIG_PLL_SYS_PLL2_CTRL_PLL_DDR_OVERRIDE(x) (((uint32_t)(((uint32_t)(x)) << ANADIG_PLL_SYS_PLL2_CTRL_PLL_DDR_OVERRIDE_SHIFT)) & ANADIG_PLL_SYS_PLL2_CTRL_PLL_DDR_OVERRIDE_MASK)

#define ANADIG_PLL_SYS_PLL2_CTRL_POWERUP_MASK    (0x800000U)
#define ANADIG_PLL_SYS_PLL2_CTRL_POWERUP_SHIFT   (23U)
/*! POWERUP - Powers up the PLL.
 *  0b0..Power down the PLL
 *  0b1..Power Up the PLL
 */
#define ANADIG_PLL_SYS_PLL2_CTRL_POWERUP(x)      (((uint32_t)(((uint32_t)(x)) << ANADIG_PLL_SYS_PLL2_CTRL_POWERUP_SHIFT)) & ANADIG_PLL_SYS_PLL2_CTRL_POWERUP_MASK)

#define ANADIG_PLL_SYS_PLL2_CTRL_SYS_PLL2_STABLE_MASK (0x20000000U)
#define ANADIG_PLL_SYS_PLL2_CTRL_SYS_PLL2_STABLE_SHIFT (29U)
/*! SYS_PLL2_STABLE - SYS_PLL2_STABLE */
#define ANADIG_PLL_SYS_PLL2_CTRL_SYS_PLL2_STABLE(x) (((uint32_t)(((uint32_t)(x)) << ANADIG_PLL_SYS_PLL2_CTRL_SYS_PLL2_STABLE_SHIFT)) & ANADIG_PLL_SYS_PLL2_CTRL_SYS_PLL2_STABLE_MASK)

#define ANADIG_PLL_SYS_PLL2_CTRL_SYS_PLL2_GATE_MASK (0x40000000U)
#define ANADIG_PLL_SYS_PLL2_CTRL_SYS_PLL2_GATE_SHIFT (30U)
/*! SYS_PLL2_GATE - SYS_PLL2_GATE
 *  0b0..Clock is not gated
 *  0b1..Clock is gated
 */
#define ANADIG_PLL_SYS_PLL2_CTRL_SYS_PLL2_GATE(x) (((uint32_t)(((uint32_t)(x)) << ANADIG_PLL_SYS_PLL2_CTRL_SYS_PLL2_GATE_SHIFT)) & ANADIG_PLL_SYS_PLL2_CTRL_SYS_PLL2_GATE_MASK)

#define ANADIG_PLL_SYS_PLL2_CTRL_SYS_PLL2_CONTROL_MODE_MASK (0x80000000U)
#define ANADIG_PLL_SYS_PLL2_CTRL_SYS_PLL2_CONTROL_MODE_SHIFT (31U)
/*! SYS_PLL2_CONTROL_MODE - SYS_PLL2_control_mode
 *  0b0..Software Mode (Default)
 *  0b1..GPC Mode
 */
#define ANADIG_PLL_SYS_PLL2_CTRL_SYS_PLL2_CONTROL_MODE(x) (((uint32_t)(((uint32_t)(x)) << ANADIG_PLL_SYS_PLL2_CTRL_SYS_PLL2_CONTROL_MODE_SHIFT)) & ANADIG_PLL_SYS_PLL2_CTRL_SYS_PLL2_CONTROL_MODE_MASK)
/*! @} */

/*! @name SYS_PLL2_UPDATE - SYS_PLL2_UPDATE_REGISTER */
/*! @{ */

#define ANADIG_PLL_SYS_PLL2_UPDATE_PFD0_UPDATE_MASK (0x2U)
#define ANADIG_PLL_SYS_PLL2_UPDATE_PFD0_UPDATE_SHIFT (1U)
/*! PFD0_UPDATE - PFD0_UPDATE */
#define ANADIG_PLL_SYS_PLL2_UPDATE_PFD0_UPDATE(x) (((uint32_t)(((uint32_t)(x)) << ANADIG_PLL_SYS_PLL2_UPDATE_PFD0_UPDATE_SHIFT)) & ANADIG_PLL_SYS_PLL2_UPDATE_PFD0_UPDATE_MASK)

#define ANADIG_PLL_SYS_PLL2_UPDATE_PFD1_UPDATE_MASK (0x4U)
#define ANADIG_PLL_SYS_PLL2_UPDATE_PFD1_UPDATE_SHIFT (2U)
/*! PFD1_UPDATE - PFD1_UPDATE */
#define ANADIG_PLL_SYS_PLL2_UPDATE_PFD1_UPDATE(x) (((uint32_t)(((uint32_t)(x)) << ANADIG_PLL_SYS_PLL2_UPDATE_PFD1_UPDATE_SHIFT)) & ANADIG_PLL_SYS_PLL2_UPDATE_PFD1_UPDATE_MASK)

#define ANADIG_PLL_SYS_PLL2_UPDATE_PFD2_UPDATE_MASK (0x8U)
#define ANADIG_PLL_SYS_PLL2_UPDATE_PFD2_UPDATE_SHIFT (3U)
/*! PFD2_UPDATE - PFD2_UPDATE */
#define ANADIG_PLL_SYS_PLL2_UPDATE_PFD2_UPDATE(x) (((uint32_t)(((uint32_t)(x)) << ANADIG_PLL_SYS_PLL2_UPDATE_PFD2_UPDATE_SHIFT)) & ANADIG_PLL_SYS_PLL2_UPDATE_PFD2_UPDATE_MASK)

#define ANADIG_PLL_SYS_PLL2_UPDATE_PFD3_UPDATE_MASK (0x10U)
#define ANADIG_PLL_SYS_PLL2_UPDATE_PFD3_UPDATE_SHIFT (4U)
/*! PFD3_UPDATE - PFD3_UPDATE */
#define ANADIG_PLL_SYS_PLL2_UPDATE_PFD3_UPDATE(x) (((uint32_t)(((uint32_t)(x)) << ANADIG_PLL_SYS_PLL2_UPDATE_PFD3_UPDATE_SHIFT)) & ANADIG_PLL_SYS_PLL2_UPDATE_PFD3_UPDATE_MASK)

#define ANADIG_PLL_SYS_PLL2_UPDATE_PFD0_CONTROL_MODE_MASK (0x20U)
#define ANADIG_PLL_SYS_PLL2_UPDATE_PFD0_CONTROL_MODE_SHIFT (5U)
/*! PFD0_CONTROL_MODE - pfd0_control_mode
 *  0b0..Software Mode (Default)
 *  0b1..GPC Mode
 */
#define ANADIG_PLL_SYS_PLL2_UPDATE_PFD0_CONTROL_MODE(x) (((uint32_t)(((uint32_t)(x)) << ANADIG_PLL_SYS_PLL2_UPDATE_PFD0_CONTROL_MODE_SHIFT)) & ANADIG_PLL_SYS_PLL2_UPDATE_PFD0_CONTROL_MODE_MASK)

#define ANADIG_PLL_SYS_PLL2_UPDATE_PFD1_CONTROL_MODE_MASK (0x40U)
#define ANADIG_PLL_SYS_PLL2_UPDATE_PFD1_CONTROL_MODE_SHIFT (6U)
/*! PFD1_CONTROL_MODE - pfd1_control_mode
 *  0b0..Software Mode (Default)
 *  0b1..GPC Mode
 */
#define ANADIG_PLL_SYS_PLL2_UPDATE_PFD1_CONTROL_MODE(x) (((uint32_t)(((uint32_t)(x)) << ANADIG_PLL_SYS_PLL2_UPDATE_PFD1_CONTROL_MODE_SHIFT)) & ANADIG_PLL_SYS_PLL2_UPDATE_PFD1_CONTROL_MODE_MASK)

#define ANADIG_PLL_SYS_PLL2_UPDATE_PFD2_CONTROL_MODE_MASK (0x80U)
#define ANADIG_PLL_SYS_PLL2_UPDATE_PFD2_CONTROL_MODE_SHIFT (7U)
/*! PFD2_CONTROL_MODE - pfd2_control_mode
 *  0b0..Software Mode (Default)
 *  0b1..GPC Mode
 */
#define ANADIG_PLL_SYS_PLL2_UPDATE_PFD2_CONTROL_MODE(x) (((uint32_t)(((uint32_t)(x)) << ANADIG_PLL_SYS_PLL2_UPDATE_PFD2_CONTROL_MODE_SHIFT)) & ANADIG_PLL_SYS_PLL2_UPDATE_PFD2_CONTROL_MODE_MASK)

#define ANADIG_PLL_SYS_PLL2_UPDATE_PFD3_CONTROL_MODE_MASK (0x100U)
#define ANADIG_PLL_SYS_PLL2_UPDATE_PFD3_CONTROL_MODE_SHIFT (8U)
/*! PFD3_CONTROL_MODE - pfd3_control_mode
 *  0b0..Software Mode (Default)
 *  0b1..GPC Mode
 */
#define ANADIG_PLL_SYS_PLL2_UPDATE_PFD3_CONTROL_MODE(x) (((uint32_t)(((uint32_t)(x)) << ANADIG_PLL_SYS_PLL2_UPDATE_PFD3_CONTROL_MODE_SHIFT)) & ANADIG_PLL_SYS_PLL2_UPDATE_PFD3_CONTROL_MODE_MASK)
/*! @} */

/*! @name SYS_PLL2_SS - SYS_PLL2_SS_REGISTER */
/*! @{ */

#define ANADIG_PLL_SYS_PLL2_SS_STEP_MASK         (0x7FFFU)
#define ANADIG_PLL_SYS_PLL2_SS_STEP_SHIFT        (0U)
/*! STEP - STEP */
#define ANADIG_PLL_SYS_PLL2_SS_STEP(x)           (((uint32_t)(((uint32_t)(x)) << ANADIG_PLL_SYS_PLL2_SS_STEP_SHIFT)) & ANADIG_PLL_SYS_PLL2_SS_STEP_MASK)

#define ANADIG_PLL_SYS_PLL2_SS_ENABLE_MASK       (0x8000U)
#define ANADIG_PLL_SYS_PLL2_SS_ENABLE_SHIFT      (15U)
/*! ENABLE - ENABLE
 *  0b0..Disable Spread Spectrum
 *  0b1..Enable Spread Spectrum
 */
#define ANADIG_PLL_SYS_PLL2_SS_ENABLE(x)         (((uint32_t)(((uint32_t)(x)) << ANADIG_PLL_SYS_PLL2_SS_ENABLE_SHIFT)) & ANADIG_PLL_SYS_PLL2_SS_ENABLE_MASK)

#define ANADIG_PLL_SYS_PLL2_SS_STOP_MASK         (0xFFFF0000U)
#define ANADIG_PLL_SYS_PLL2_SS_STOP_SHIFT        (16U)
/*! STOP - STOP */
#define ANADIG_PLL_SYS_PLL2_SS_STOP(x)           (((uint32_t)(((uint32_t)(x)) << ANADIG_PLL_SYS_PLL2_SS_STOP_SHIFT)) & ANADIG_PLL_SYS_PLL2_SS_STOP_MASK)
/*! @} */

/*! @name SYS_PLL2_PFD - SYS_PLL2_PFD_REGISTER */
/*! @{ */

#define ANADIG_PLL_SYS_PLL2_PFD_PFD0_FRAC_MASK   (0x3FU)
#define ANADIG_PLL_SYS_PLL2_PFD_PFD0_FRAC_SHIFT  (0U)
/*! PFD0_FRAC - PFD0_FRAC */
#define ANADIG_PLL_SYS_PLL2_PFD_PFD0_FRAC(x)     (((uint32_t)(((uint32_t)(x)) << ANADIG_PLL_SYS_PLL2_PFD_PFD0_FRAC_SHIFT)) & ANADIG_PLL_SYS_PLL2_PFD_PFD0_FRAC_MASK)

#define ANADIG_PLL_SYS_PLL2_PFD_PFD0_STABLE_MASK (0x40U)
#define ANADIG_PLL_SYS_PLL2_PFD_PFD0_STABLE_SHIFT (6U)
/*! PFD0_STABLE - PFD0_STABLE */
#define ANADIG_PLL_SYS_PLL2_PFD_PFD0_STABLE(x)   (((uint32_t)(((uint32_t)(x)) << ANADIG_PLL_SYS_PLL2_PFD_PFD0_STABLE_SHIFT)) & ANADIG_PLL_SYS_PLL2_PFD_PFD0_STABLE_MASK)

#define ANADIG_PLL_SYS_PLL2_PFD_PFD0_DIV1_CLKGATE_MASK (0x80U)
#define ANADIG_PLL_SYS_PLL2_PFD_PFD0_DIV1_CLKGATE_SHIFT (7U)
/*! PFD0_DIV1_CLKGATE - PFD0_DIV1_CLKGATE */
#define ANADIG_PLL_SYS_PLL2_PFD_PFD0_DIV1_CLKGATE(x) (((uint32_t)(((uint32_t)(x)) << ANADIG_PLL_SYS_PLL2_PFD_PFD0_DIV1_CLKGATE_SHIFT)) & ANADIG_PLL_SYS_PLL2_PFD_PFD0_DIV1_CLKGATE_MASK)

#define ANADIG_PLL_SYS_PLL2_PFD_PFD1_FRAC_MASK   (0x3F00U)
#define ANADIG_PLL_SYS_PLL2_PFD_PFD1_FRAC_SHIFT  (8U)
/*! PFD1_FRAC - PFD1_FRAC */
#define ANADIG_PLL_SYS_PLL2_PFD_PFD1_FRAC(x)     (((uint32_t)(((uint32_t)(x)) << ANADIG_PLL_SYS_PLL2_PFD_PFD1_FRAC_SHIFT)) & ANADIG_PLL_SYS_PLL2_PFD_PFD1_FRAC_MASK)

#define ANADIG_PLL_SYS_PLL2_PFD_PFD1_STABLE_MASK (0x4000U)
#define ANADIG_PLL_SYS_PLL2_PFD_PFD1_STABLE_SHIFT (14U)
/*! PFD1_STABLE - PFD1_STABLE */
#define ANADIG_PLL_SYS_PLL2_PFD_PFD1_STABLE(x)   (((uint32_t)(((uint32_t)(x)) << ANADIG_PLL_SYS_PLL2_PFD_PFD1_STABLE_SHIFT)) & ANADIG_PLL_SYS_PLL2_PFD_PFD1_STABLE_MASK)

#define ANADIG_PLL_SYS_PLL2_PFD_PFD1_DIV1_CLKGATE_MASK (0x8000U)
#define ANADIG_PLL_SYS_PLL2_PFD_PFD1_DIV1_CLKGATE_SHIFT (15U)
/*! PFD1_DIV1_CLKGATE - PFD1_DIV1_CLKGATE */
#define ANADIG_PLL_SYS_PLL2_PFD_PFD1_DIV1_CLKGATE(x) (((uint32_t)(((uint32_t)(x)) << ANADIG_PLL_SYS_PLL2_PFD_PFD1_DIV1_CLKGATE_SHIFT)) & ANADIG_PLL_SYS_PLL2_PFD_PFD1_DIV1_CLKGATE_MASK)

#define ANADIG_PLL_SYS_PLL2_PFD_PFD2_FRAC_MASK   (0x3F0000U)
#define ANADIG_PLL_SYS_PLL2_PFD_PFD2_FRAC_SHIFT  (16U)
/*! PFD2_FRAC - PFD2_FRAC */
#define ANADIG_PLL_SYS_PLL2_PFD_PFD2_FRAC(x)     (((uint32_t)(((uint32_t)(x)) << ANADIG_PLL_SYS_PLL2_PFD_PFD2_FRAC_SHIFT)) & ANADIG_PLL_SYS_PLL2_PFD_PFD2_FRAC_MASK)

#define ANADIG_PLL_SYS_PLL2_PFD_PFD2_STABLE_MASK (0x400000U)
#define ANADIG_PLL_SYS_PLL2_PFD_PFD2_STABLE_SHIFT (22U)
/*! PFD2_STABLE - PFD2_STABLE */
#define ANADIG_PLL_SYS_PLL2_PFD_PFD2_STABLE(x)   (((uint32_t)(((uint32_t)(x)) << ANADIG_PLL_SYS_PLL2_PFD_PFD2_STABLE_SHIFT)) & ANADIG_PLL_SYS_PLL2_PFD_PFD2_STABLE_MASK)

#define ANADIG_PLL_SYS_PLL2_PFD_PFD2_DIV1_CLKGATE_MASK (0x800000U)
#define ANADIG_PLL_SYS_PLL2_PFD_PFD2_DIV1_CLKGATE_SHIFT (23U)
/*! PFD2_DIV1_CLKGATE - PFD2_DIV1_CLKGATE */
#define ANADIG_PLL_SYS_PLL2_PFD_PFD2_DIV1_CLKGATE(x) (((uint32_t)(((uint32_t)(x)) << ANADIG_PLL_SYS_PLL2_PFD_PFD2_DIV1_CLKGATE_SHIFT)) & ANADIG_PLL_SYS_PLL2_PFD_PFD2_DIV1_CLKGATE_MASK)

#define ANADIG_PLL_SYS_PLL2_PFD_PFD3_FRAC_MASK   (0x3F000000U)
#define ANADIG_PLL_SYS_PLL2_PFD_PFD3_FRAC_SHIFT  (24U)
/*! PFD3_FRAC - PFD3_FRAC */
#define ANADIG_PLL_SYS_PLL2_PFD_PFD3_FRAC(x)     (((uint32_t)(((uint32_t)(x)) << ANADIG_PLL_SYS_PLL2_PFD_PFD3_FRAC_SHIFT)) & ANADIG_PLL_SYS_PLL2_PFD_PFD3_FRAC_MASK)

#define ANADIG_PLL_SYS_PLL2_PFD_PFD3_STABLE_MASK (0x40000000U)
#define ANADIG_PLL_SYS_PLL2_PFD_PFD3_STABLE_SHIFT (30U)
/*! PFD3_STABLE - PFD3_STABLE */
#define ANADIG_PLL_SYS_PLL2_PFD_PFD3_STABLE(x)   (((uint32_t)(((uint32_t)(x)) << ANADIG_PLL_SYS_PLL2_PFD_PFD3_STABLE_SHIFT)) & ANADIG_PLL_SYS_PLL2_PFD_PFD3_STABLE_MASK)

#define ANADIG_PLL_SYS_PLL2_PFD_PFD3_DIV1_CLKGATE_MASK (0x80000000U)
#define ANADIG_PLL_SYS_PLL2_PFD_PFD3_DIV1_CLKGATE_SHIFT (31U)
/*! PFD3_DIV1_CLKGATE - PFD3_DIV1_CLKGATE */
#define ANADIG_PLL_SYS_PLL2_PFD_PFD3_DIV1_CLKGATE(x) (((uint32_t)(((uint32_t)(x)) << ANADIG_PLL_SYS_PLL2_PFD_PFD3_DIV1_CLKGATE_SHIFT)) & ANADIG_PLL_SYS_PLL2_PFD_PFD3_DIV1_CLKGATE_MASK)
/*! @} */

/*! @name SYS_PLL2_MFD - SYS_PLL2_MFD_REGISTER */
/*! @{ */

#define ANADIG_PLL_SYS_PLL2_MFD_MFD_MASK         (0x3FFFFFFFU)
#define ANADIG_PLL_SYS_PLL2_MFD_MFD_SHIFT        (0U)
/*! MFD - Denominator */
#define ANADIG_PLL_SYS_PLL2_MFD_MFD(x)           (((uint32_t)(((uint32_t)(x)) << ANADIG_PLL_SYS_PLL2_MFD_MFD_SHIFT)) & ANADIG_PLL_SYS_PLL2_MFD_MFD_MASK)
/*! @} */

/*! @name SYS_PLL1_SS - SYS_PLL1_SS_REGISTER */
/*! @{ */

#define ANADIG_PLL_SYS_PLL1_SS_STEP_MASK         (0x7FFFU)
#define ANADIG_PLL_SYS_PLL1_SS_STEP_SHIFT        (0U)
/*! STEP - STEP */
#define ANADIG_PLL_SYS_PLL1_SS_STEP(x)           (((uint32_t)(((uint32_t)(x)) << ANADIG_PLL_SYS_PLL1_SS_STEP_SHIFT)) & ANADIG_PLL_SYS_PLL1_SS_STEP_MASK)

#define ANADIG_PLL_SYS_PLL1_SS_ENABLE_MASK       (0x8000U)
#define ANADIG_PLL_SYS_PLL1_SS_ENABLE_SHIFT      (15U)
/*! ENABLE - ENABLE
 *  0b0..Disable Spread Spectrum
 *  0b1..Enable Spread Spectrum
 */
#define ANADIG_PLL_SYS_PLL1_SS_ENABLE(x)         (((uint32_t)(((uint32_t)(x)) << ANADIG_PLL_SYS_PLL1_SS_ENABLE_SHIFT)) & ANADIG_PLL_SYS_PLL1_SS_ENABLE_MASK)

#define ANADIG_PLL_SYS_PLL1_SS_STOP_MASK         (0xFFFF0000U)
#define ANADIG_PLL_SYS_PLL1_SS_STOP_SHIFT        (16U)
/*! STOP - STOP */
#define ANADIG_PLL_SYS_PLL1_SS_STOP(x)           (((uint32_t)(((uint32_t)(x)) << ANADIG_PLL_SYS_PLL1_SS_STOP_SHIFT)) & ANADIG_PLL_SYS_PLL1_SS_STOP_MASK)
/*! @} */

/*! @name SYS_PLL1_CTRL - SYS_PLL1_CTRL_REGISTER */
/*! @{ */

#define ANADIG_PLL_SYS_PLL1_CTRL_ENABLE_CLK_MASK (0x2000U)
#define ANADIG_PLL_SYS_PLL1_CTRL_ENABLE_CLK_SHIFT (13U)
/*! ENABLE_CLK - ENABLE_CLK */
#define ANADIG_PLL_SYS_PLL1_CTRL_ENABLE_CLK(x)   (((uint32_t)(((uint32_t)(x)) << ANADIG_PLL_SYS_PLL1_CTRL_ENABLE_CLK_SHIFT)) & ANADIG_PLL_SYS_PLL1_CTRL_ENABLE_CLK_MASK)

#define ANADIG_PLL_SYS_PLL1_CTRL_SYS_PLL1_GATE_MASK (0x4000U)
#define ANADIG_PLL_SYS_PLL1_CTRL_SYS_PLL1_GATE_SHIFT (14U)
/*! SYS_PLL1_GATE - SYS_PLL1_GATE
 *  0b0..No gate
 *  0b1..Gate the output
 */
#define ANADIG_PLL_SYS_PLL1_CTRL_SYS_PLL1_GATE(x) (((uint32_t)(((uint32_t)(x)) << ANADIG_PLL_SYS_PLL1_CTRL_SYS_PLL1_GATE_SHIFT)) & ANADIG_PLL_SYS_PLL1_CTRL_SYS_PLL1_GATE_MASK)

#define ANADIG_PLL_SYS_PLL1_CTRL_SYS_PLL1_DIV2_MASK (0x2000000U)
#define ANADIG_PLL_SYS_PLL1_CTRL_SYS_PLL1_DIV2_SHIFT (25U)
/*! SYS_PLL1_DIV2 - SYS_PLL1_DIV2 */
#define ANADIG_PLL_SYS_PLL1_CTRL_SYS_PLL1_DIV2(x) (((uint32_t)(((uint32_t)(x)) << ANADIG_PLL_SYS_PLL1_CTRL_SYS_PLL1_DIV2_SHIFT)) & ANADIG_PLL_SYS_PLL1_CTRL_SYS_PLL1_DIV2_MASK)

#define ANADIG_PLL_SYS_PLL1_CTRL_SYS_PLL1_DIV5_MASK (0x4000000U)
#define ANADIG_PLL_SYS_PLL1_CTRL_SYS_PLL1_DIV5_SHIFT (26U)
/*! SYS_PLL1_DIV5 - SYS_PLL1_DIV5 */
#define ANADIG_PLL_SYS_PLL1_CTRL_SYS_PLL1_DIV5(x) (((uint32_t)(((uint32_t)(x)) << ANADIG_PLL_SYS_PLL1_CTRL_SYS_PLL1_DIV5_SHIFT)) & ANADIG_PLL_SYS_PLL1_CTRL_SYS_PLL1_DIV5_MASK)

#define ANADIG_PLL_SYS_PLL1_CTRL_SYS_PLL1_DIV5_CONTROL_MODE_MASK (0x8000000U)
#define ANADIG_PLL_SYS_PLL1_CTRL_SYS_PLL1_DIV5_CONTROL_MODE_SHIFT (27U)
/*! SYS_PLL1_DIV5_CONTROL_MODE - SYS_PLL1_DIV5_CONTROL_MODE
 *  0b0..Software Mode (Default)
 *  0b1..GPC Mode
 */
#define ANADIG_PLL_SYS_PLL1_CTRL_SYS_PLL1_DIV5_CONTROL_MODE(x) (((uint32_t)(((uint32_t)(x)) << ANADIG_PLL_SYS_PLL1_CTRL_SYS_PLL1_DIV5_CONTROL_MODE_SHIFT)) & ANADIG_PLL_SYS_PLL1_CTRL_SYS_PLL1_DIV5_CONTROL_MODE_MASK)

#define ANADIG_PLL_SYS_PLL1_CTRL_SYS_PLL1_DIV2_CONTROL_MODE_MASK (0x10000000U)
#define ANADIG_PLL_SYS_PLL1_CTRL_SYS_PLL1_DIV2_CONTROL_MODE_SHIFT (28U)
/*! SYS_PLL1_DIV2_CONTROL_MODE - SYS_PLL1_DIV2_CONTROL_MODE
 *  0b0..Software Mode (Default)
 *  0b1..GPC Mode
 */
#define ANADIG_PLL_SYS_PLL1_CTRL_SYS_PLL1_DIV2_CONTROL_MODE(x) (((uint32_t)(((uint32_t)(x)) << ANADIG_PLL_SYS_PLL1_CTRL_SYS_PLL1_DIV2_CONTROL_MODE_SHIFT)) & ANADIG_PLL_SYS_PLL1_CTRL_SYS_PLL1_DIV2_CONTROL_MODE_MASK)

#define ANADIG_PLL_SYS_PLL1_CTRL_SYS_PLL1_STABLE_MASK (0x20000000U)
#define ANADIG_PLL_SYS_PLL1_CTRL_SYS_PLL1_STABLE_SHIFT (29U)
/*! SYS_PLL1_STABLE - SYS_PLL1_STABLE */
#define ANADIG_PLL_SYS_PLL1_CTRL_SYS_PLL1_STABLE(x) (((uint32_t)(((uint32_t)(x)) << ANADIG_PLL_SYS_PLL1_CTRL_SYS_PLL1_STABLE_SHIFT)) & ANADIG_PLL_SYS_PLL1_CTRL_SYS_PLL1_STABLE_MASK)

#define ANADIG_PLL_SYS_PLL1_CTRL_SYS_PLL1_AI_BUSY_MASK (0x40000000U)
#define ANADIG_PLL_SYS_PLL1_CTRL_SYS_PLL1_AI_BUSY_SHIFT (30U)
/*! SYS_PLL1_AI_BUSY - SYS_PLL1_AI_BUSY */
#define ANADIG_PLL_SYS_PLL1_CTRL_SYS_PLL1_AI_BUSY(x) (((uint32_t)(((uint32_t)(x)) << ANADIG_PLL_SYS_PLL1_CTRL_SYS_PLL1_AI_BUSY_SHIFT)) & ANADIG_PLL_SYS_PLL1_CTRL_SYS_PLL1_AI_BUSY_MASK)

#define ANADIG_PLL_SYS_PLL1_CTRL_SYS_PLL1_CONTROL_MODE_MASK (0x80000000U)
#define ANADIG_PLL_SYS_PLL1_CTRL_SYS_PLL1_CONTROL_MODE_SHIFT (31U)
/*! SYS_PLL1_CONTROL_MODE - SYS_PLL1_CONTROL_MODE
 *  0b0..Software Mode (Default)
 *  0b1..GPC Mode
 */
#define ANADIG_PLL_SYS_PLL1_CTRL_SYS_PLL1_CONTROL_MODE(x) (((uint32_t)(((uint32_t)(x)) << ANADIG_PLL_SYS_PLL1_CTRL_SYS_PLL1_CONTROL_MODE_SHIFT)) & ANADIG_PLL_SYS_PLL1_CTRL_SYS_PLL1_CONTROL_MODE_MASK)
/*! @} */

/*! @name SYS_PLL1_DENOMINATOR - SYS_PLL1_DENOMINATOR_REGISTER */
/*! @{ */

#define ANADIG_PLL_SYS_PLL1_DENOMINATOR_DENOM_MASK (0x3FFFFFFFU)
#define ANADIG_PLL_SYS_PLL1_DENOMINATOR_DENOM_SHIFT (0U)
/*! DENOM - DENOM */
#define ANADIG_PLL_SYS_PLL1_DENOMINATOR_DENOM(x) (((uint32_t)(((uint32_t)(x)) << ANADIG_PLL_SYS_PLL1_DENOMINATOR_DENOM_SHIFT)) & ANADIG_PLL_SYS_PLL1_DENOMINATOR_DENOM_MASK)
/*! @} */

/*! @name SYS_PLL1_NUMERATOR - SYS_PLL1_NUMERATOR_REGISTER */
/*! @{ */

#define ANADIG_PLL_SYS_PLL1_NUMERATOR_NUM_MASK   (0x3FFFFFFFU)
#define ANADIG_PLL_SYS_PLL1_NUMERATOR_NUM_SHIFT  (0U)
/*! NUM - NUM */
#define ANADIG_PLL_SYS_PLL1_NUMERATOR_NUM(x)     (((uint32_t)(((uint32_t)(x)) << ANADIG_PLL_SYS_PLL1_NUMERATOR_NUM_SHIFT)) & ANADIG_PLL_SYS_PLL1_NUMERATOR_NUM_MASK)
/*! @} */

/*! @name SYS_PLL1_DIV_SELECT - SYS_PLL1_DIV_SELECT_REGISTER */
/*! @{ */

#define ANADIG_PLL_SYS_PLL1_DIV_SELECT_DIV_SELECT_MASK (0x7FU)
#define ANADIG_PLL_SYS_PLL1_DIV_SELECT_DIV_SELECT_SHIFT (0U)
/*! DIV_SELECT - DIV_SELECT */
#define ANADIG_PLL_SYS_PLL1_DIV_SELECT_DIV_SELECT(x) (((uint32_t)(((uint32_t)(x)) << ANADIG_PLL_SYS_PLL1_DIV_SELECT_DIV_SELECT_SHIFT)) & ANADIG_PLL_SYS_PLL1_DIV_SELECT_DIV_SELECT_MASK)
/*! @} */

/*! @name PLL_AUDIO_CTRL - PLL_AUDIO_CTRL_REGISTER */
/*! @{ */

#define ANADIG_PLL_PLL_AUDIO_CTRL_ENABLE_CLK_MASK (0x2000U)
#define ANADIG_PLL_PLL_AUDIO_CTRL_ENABLE_CLK_SHIFT (13U)
/*! ENABLE_CLK - ENABLE_CLK */
#define ANADIG_PLL_PLL_AUDIO_CTRL_ENABLE_CLK(x)  (((uint32_t)(((uint32_t)(x)) << ANADIG_PLL_PLL_AUDIO_CTRL_ENABLE_CLK_SHIFT)) & ANADIG_PLL_PLL_AUDIO_CTRL_ENABLE_CLK_MASK)

#define ANADIG_PLL_PLL_AUDIO_CTRL_PLL_AUDIO_GATE_MASK (0x4000U)
#define ANADIG_PLL_PLL_AUDIO_CTRL_PLL_AUDIO_GATE_SHIFT (14U)
/*! PLL_AUDIO_GATE - PLL_AUDIO_GATE
 *  0b0..No gate
 *  0b1..Gate the output
 */
#define ANADIG_PLL_PLL_AUDIO_CTRL_PLL_AUDIO_GATE(x) (((uint32_t)(((uint32_t)(x)) << ANADIG_PLL_PLL_AUDIO_CTRL_PLL_AUDIO_GATE_SHIFT)) & ANADIG_PLL_PLL_AUDIO_CTRL_PLL_AUDIO_GATE_MASK)

#define ANADIG_PLL_PLL_AUDIO_CTRL_PLL_AUDIO_STABLE_MASK (0x20000000U)
#define ANADIG_PLL_PLL_AUDIO_CTRL_PLL_AUDIO_STABLE_SHIFT (29U)
/*! PLL_AUDIO_STABLE - PLL_AUDIO_STABLE */
#define ANADIG_PLL_PLL_AUDIO_CTRL_PLL_AUDIO_STABLE(x) (((uint32_t)(((uint32_t)(x)) << ANADIG_PLL_PLL_AUDIO_CTRL_PLL_AUDIO_STABLE_SHIFT)) & ANADIG_PLL_PLL_AUDIO_CTRL_PLL_AUDIO_STABLE_MASK)

#define ANADIG_PLL_PLL_AUDIO_CTRL_PLL_AUDIO_AI_BUSY_MASK (0x40000000U)
#define ANADIG_PLL_PLL_AUDIO_CTRL_PLL_AUDIO_AI_BUSY_SHIFT (30U)
/*! PLL_AUDIO_AI_BUSY - pll_audio_ai_busy */
#define ANADIG_PLL_PLL_AUDIO_CTRL_PLL_AUDIO_AI_BUSY(x) (((uint32_t)(((uint32_t)(x)) << ANADIG_PLL_PLL_AUDIO_CTRL_PLL_AUDIO_AI_BUSY_SHIFT)) & ANADIG_PLL_PLL_AUDIO_CTRL_PLL_AUDIO_AI_BUSY_MASK)

#define ANADIG_PLL_PLL_AUDIO_CTRL_PLL_AUDIO_CONTROL_MODE_MASK (0x80000000U)
#define ANADIG_PLL_PLL_AUDIO_CTRL_PLL_AUDIO_CONTROL_MODE_SHIFT (31U)
/*! PLL_AUDIO_CONTROL_MODE - pll_audio_control_mode
 *  0b0..Software Mode (Default)
 *  0b1..GPC Mode
 */
#define ANADIG_PLL_PLL_AUDIO_CTRL_PLL_AUDIO_CONTROL_MODE(x) (((uint32_t)(((uint32_t)(x)) << ANADIG_PLL_PLL_AUDIO_CTRL_PLL_AUDIO_CONTROL_MODE_SHIFT)) & ANADIG_PLL_PLL_AUDIO_CTRL_PLL_AUDIO_CONTROL_MODE_MASK)
/*! @} */

/*! @name PLL_AUDIO_SS - PLL_AUDIO_SS_REGISTER */
/*! @{ */

#define ANADIG_PLL_PLL_AUDIO_SS_STEP_MASK        (0x7FFFU)
#define ANADIG_PLL_PLL_AUDIO_SS_STEP_SHIFT       (0U)
/*! STEP - STEP */
#define ANADIG_PLL_PLL_AUDIO_SS_STEP(x)          (((uint32_t)(((uint32_t)(x)) << ANADIG_PLL_PLL_AUDIO_SS_STEP_SHIFT)) & ANADIG_PLL_PLL_AUDIO_SS_STEP_MASK)

#define ANADIG_PLL_PLL_AUDIO_SS_ENABLE_MASK      (0x8000U)
#define ANADIG_PLL_PLL_AUDIO_SS_ENABLE_SHIFT     (15U)
/*! ENABLE - ENABLE
 *  0b0..Disable Spread Spectrum
 *  0b1..Enable Spread Spectrum
 */
#define ANADIG_PLL_PLL_AUDIO_SS_ENABLE(x)        (((uint32_t)(((uint32_t)(x)) << ANADIG_PLL_PLL_AUDIO_SS_ENABLE_SHIFT)) & ANADIG_PLL_PLL_AUDIO_SS_ENABLE_MASK)

#define ANADIG_PLL_PLL_AUDIO_SS_STOP_MASK        (0xFFFF0000U)
#define ANADIG_PLL_PLL_AUDIO_SS_STOP_SHIFT       (16U)
/*! STOP - STOP */
#define ANADIG_PLL_PLL_AUDIO_SS_STOP(x)          (((uint32_t)(((uint32_t)(x)) << ANADIG_PLL_PLL_AUDIO_SS_STOP_SHIFT)) & ANADIG_PLL_PLL_AUDIO_SS_STOP_MASK)
/*! @} */

/*! @name PLL_AUDIO_DENOMINATOR - PLL_AUDIO_DENOMINATOR_REGISTER */
/*! @{ */

#define ANADIG_PLL_PLL_AUDIO_DENOMINATOR_DENOM_MASK (0x3FFFFFFFU)
#define ANADIG_PLL_PLL_AUDIO_DENOMINATOR_DENOM_SHIFT (0U)
/*! DENOM - DENOM */
#define ANADIG_PLL_PLL_AUDIO_DENOMINATOR_DENOM(x) (((uint32_t)(((uint32_t)(x)) << ANADIG_PLL_PLL_AUDIO_DENOMINATOR_DENOM_SHIFT)) & ANADIG_PLL_PLL_AUDIO_DENOMINATOR_DENOM_MASK)
/*! @} */

/*! @name PLL_AUDIO_NUMERATOR - PLL_AUDIO_NUMERATOR_REGISTER */
/*! @{ */

#define ANADIG_PLL_PLL_AUDIO_NUMERATOR_NUM_MASK  (0x3FFFFFFFU)
#define ANADIG_PLL_PLL_AUDIO_NUMERATOR_NUM_SHIFT (0U)
/*! NUM - NUM */
#define ANADIG_PLL_PLL_AUDIO_NUMERATOR_NUM(x)    (((uint32_t)(((uint32_t)(x)) << ANADIG_PLL_PLL_AUDIO_NUMERATOR_NUM_SHIFT)) & ANADIG_PLL_PLL_AUDIO_NUMERATOR_NUM_MASK)
/*! @} */

/*! @name PLL_AUDIO_DIV_SELECT - PLL_AUDIO_DIV_SELECT_REGISTER */
/*! @{ */

#define ANADIG_PLL_PLL_AUDIO_DIV_SELECT_PLL_AUDIO_DIV_SELECT_MASK (0x7FU)
#define ANADIG_PLL_PLL_AUDIO_DIV_SELECT_PLL_AUDIO_DIV_SELECT_SHIFT (0U)
/*! PLL_AUDIO_DIV_SELECT - PLL_AUDIO_DIV_SELECT */
#define ANADIG_PLL_PLL_AUDIO_DIV_SELECT_PLL_AUDIO_DIV_SELECT(x) (((uint32_t)(((uint32_t)(x)) << ANADIG_PLL_PLL_AUDIO_DIV_SELECT_PLL_AUDIO_DIV_SELECT_SHIFT)) & ANADIG_PLL_PLL_AUDIO_DIV_SELECT_PLL_AUDIO_DIV_SELECT_MASK)
/*! @} */

/*! @name PLL_VIDEO_CTRL - PLL_VIDEO_CTRL_REGISTER */
/*! @{ */

#define ANADIG_PLL_PLL_VIDEO_CTRL_ENABLE_CLK_MASK (0x2000U)
#define ANADIG_PLL_PLL_VIDEO_CTRL_ENABLE_CLK_SHIFT (13U)
/*! ENABLE_CLK - ENABLE_CLK */
#define ANADIG_PLL_PLL_VIDEO_CTRL_ENABLE_CLK(x)  (((uint32_t)(((uint32_t)(x)) << ANADIG_PLL_PLL_VIDEO_CTRL_ENABLE_CLK_SHIFT)) & ANADIG_PLL_PLL_VIDEO_CTRL_ENABLE_CLK_MASK)

#define ANADIG_PLL_PLL_VIDEO_CTRL_PLL_VIDEO_GATE_MASK (0x4000U)
#define ANADIG_PLL_PLL_VIDEO_CTRL_PLL_VIDEO_GATE_SHIFT (14U)
/*! PLL_VIDEO_GATE - PLL_VIDEO_GATE
 *  0b0..No gate
 *  0b1..Gate the output
 */
#define ANADIG_PLL_PLL_VIDEO_CTRL_PLL_VIDEO_GATE(x) (((uint32_t)(((uint32_t)(x)) << ANADIG_PLL_PLL_VIDEO_CTRL_PLL_VIDEO_GATE_SHIFT)) & ANADIG_PLL_PLL_VIDEO_CTRL_PLL_VIDEO_GATE_MASK)

#define ANADIG_PLL_PLL_VIDEO_CTRL_PLL_VIDEO_COUNTER_CLR_MASK (0x1000000U)
#define ANADIG_PLL_PLL_VIDEO_CTRL_PLL_VIDEO_COUNTER_CLR_SHIFT (24U)
/*! PLL_VIDEO_COUNTER_CLR - pll_video_counter_clr */
#define ANADIG_PLL_PLL_VIDEO_CTRL_PLL_VIDEO_COUNTER_CLR(x) (((uint32_t)(((uint32_t)(x)) << ANADIG_PLL_PLL_VIDEO_CTRL_PLL_VIDEO_COUNTER_CLR_SHIFT)) & ANADIG_PLL_PLL_VIDEO_CTRL_PLL_VIDEO_COUNTER_CLR_MASK)

#define ANADIG_PLL_PLL_VIDEO_CTRL_PLL_VIDEO_STABLE_MASK (0x20000000U)
#define ANADIG_PLL_PLL_VIDEO_CTRL_PLL_VIDEO_STABLE_SHIFT (29U)
/*! PLL_VIDEO_STABLE - PLL_VIDEO_STABLE */
#define ANADIG_PLL_PLL_VIDEO_CTRL_PLL_VIDEO_STABLE(x) (((uint32_t)(((uint32_t)(x)) << ANADIG_PLL_PLL_VIDEO_CTRL_PLL_VIDEO_STABLE_SHIFT)) & ANADIG_PLL_PLL_VIDEO_CTRL_PLL_VIDEO_STABLE_MASK)

#define ANADIG_PLL_PLL_VIDEO_CTRL_PLL_VIDEO_AI_BUSY_MASK (0x40000000U)
#define ANADIG_PLL_PLL_VIDEO_CTRL_PLL_VIDEO_AI_BUSY_SHIFT (30U)
/*! PLL_VIDEO_AI_BUSY - pll_video_ai_busy */
#define ANADIG_PLL_PLL_VIDEO_CTRL_PLL_VIDEO_AI_BUSY(x) (((uint32_t)(((uint32_t)(x)) << ANADIG_PLL_PLL_VIDEO_CTRL_PLL_VIDEO_AI_BUSY_SHIFT)) & ANADIG_PLL_PLL_VIDEO_CTRL_PLL_VIDEO_AI_BUSY_MASK)

#define ANADIG_PLL_PLL_VIDEO_CTRL_PLL_VIDEO_CONTROL_MODE_MASK (0x80000000U)
#define ANADIG_PLL_PLL_VIDEO_CTRL_PLL_VIDEO_CONTROL_MODE_SHIFT (31U)
/*! PLL_VIDEO_CONTROL_MODE - pll_video_control_mode
 *  0b0..Software Mode (Default)
 *  0b1..GPC Mode
 */
#define ANADIG_PLL_PLL_VIDEO_CTRL_PLL_VIDEO_CONTROL_MODE(x) (((uint32_t)(((uint32_t)(x)) << ANADIG_PLL_PLL_VIDEO_CTRL_PLL_VIDEO_CONTROL_MODE_SHIFT)) & ANADIG_PLL_PLL_VIDEO_CTRL_PLL_VIDEO_CONTROL_MODE_MASK)
/*! @} */

/*! @name PLL_VIDEO_SS - PLL_VIDEO_SS_REGISTER */
/*! @{ */

#define ANADIG_PLL_PLL_VIDEO_SS_STEP_MASK        (0x7FFFU)
#define ANADIG_PLL_PLL_VIDEO_SS_STEP_SHIFT       (0U)
/*! STEP - STEP */
#define ANADIG_PLL_PLL_VIDEO_SS_STEP(x)          (((uint32_t)(((uint32_t)(x)) << ANADIG_PLL_PLL_VIDEO_SS_STEP_SHIFT)) & ANADIG_PLL_PLL_VIDEO_SS_STEP_MASK)

#define ANADIG_PLL_PLL_VIDEO_SS_ENABLE_MASK      (0x8000U)
#define ANADIG_PLL_PLL_VIDEO_SS_ENABLE_SHIFT     (15U)
/*! ENABLE - ENABLE
 *  0b0..Disable Spread Spectrum
 *  0b1..Enable Spread Spectrum
 */
#define ANADIG_PLL_PLL_VIDEO_SS_ENABLE(x)        (((uint32_t)(((uint32_t)(x)) << ANADIG_PLL_PLL_VIDEO_SS_ENABLE_SHIFT)) & ANADIG_PLL_PLL_VIDEO_SS_ENABLE_MASK)

#define ANADIG_PLL_PLL_VIDEO_SS_STOP_MASK        (0xFFFF0000U)
#define ANADIG_PLL_PLL_VIDEO_SS_STOP_SHIFT       (16U)
/*! STOP - STOP */
#define ANADIG_PLL_PLL_VIDEO_SS_STOP(x)          (((uint32_t)(((uint32_t)(x)) << ANADIG_PLL_PLL_VIDEO_SS_STOP_SHIFT)) & ANADIG_PLL_PLL_VIDEO_SS_STOP_MASK)
/*! @} */

/*! @name PLL_VIDEO_DENOMINATOR - PLL_VIDEO_DENOMINATOR_REGISTER */
/*! @{ */

#define ANADIG_PLL_PLL_VIDEO_DENOMINATOR_DENOM_MASK (0x3FFFFFFFU)
#define ANADIG_PLL_PLL_VIDEO_DENOMINATOR_DENOM_SHIFT (0U)
/*! DENOM - DENOM */
#define ANADIG_PLL_PLL_VIDEO_DENOMINATOR_DENOM(x) (((uint32_t)(((uint32_t)(x)) << ANADIG_PLL_PLL_VIDEO_DENOMINATOR_DENOM_SHIFT)) & ANADIG_PLL_PLL_VIDEO_DENOMINATOR_DENOM_MASK)
/*! @} */

/*! @name PLL_VIDEO_NUMERATOR - PLL_VIDEO_NUMERATOR_REGISTER */
/*! @{ */

#define ANADIG_PLL_PLL_VIDEO_NUMERATOR_NUM_MASK  (0x3FFFFFFFU)
#define ANADIG_PLL_PLL_VIDEO_NUMERATOR_NUM_SHIFT (0U)
/*! NUM - NUM */
#define ANADIG_PLL_PLL_VIDEO_NUMERATOR_NUM(x)    (((uint32_t)(((uint32_t)(x)) << ANADIG_PLL_PLL_VIDEO_NUMERATOR_NUM_SHIFT)) & ANADIG_PLL_PLL_VIDEO_NUMERATOR_NUM_MASK)
/*! @} */

/*! @name PLL_VIDEO_DIV_SELECT - PLL_VIDEO_DIV_SELECT_REGISTER */
/*! @{ */

#define ANADIG_PLL_PLL_VIDEO_DIV_SELECT_DIV_SELECT_MASK (0x7FU)
#define ANADIG_PLL_PLL_VIDEO_DIV_SELECT_DIV_SELECT_SHIFT (0U)
/*! DIV_SELECT - DIV_SELECT */
#define ANADIG_PLL_PLL_VIDEO_DIV_SELECT_DIV_SELECT(x) (((uint32_t)(((uint32_t)(x)) << ANADIG_PLL_PLL_VIDEO_DIV_SELECT_DIV_SELECT_SHIFT)) & ANADIG_PLL_PLL_VIDEO_DIV_SELECT_DIV_SELECT_MASK)
/*! @} */


/*!
 * @}
 */ /* end of group ANADIG_PLL_Register_Masks */


/*!
 * @}
 */ /* end of group ANADIG_PLL_Peripheral_Access_Layer */


/*
** End of section using anonymous unions
*/

#if defined(__ARMCC_VERSION)
  #if (__ARMCC_VERSION >= 6010050)
    #pragma clang diagnostic pop
  #else
    #pragma pop
  #endif
#elif defined(__CWCC__)
  #pragma pop
#elif defined(__GNUC__)
  /* leave anonymous unions enabled */
#elif defined(__IAR_SYSTEMS_ICC__)
  #pragma language=default
#else
  #error Not supported compiler type
#endif

/*!
 * @}
 */ /* end of group Peripheral_access_layer */


#endif  /* PERI_ANADIG_PLL_H_ */

