/**
 * \brief Header file for ATSAMD20E16BU
 *
 * Copyright (c) 2021 Microchip Technology Inc. and its subsidiaries.
 *
 * Subject to your compliance with these terms, you may use Microchip software and any derivatives
 * exclusively with Microchip products. It is your responsibility to comply with third party license
 * terms applicable to your use of third party software (including open source software) that may
 * accompany Microchip software.
 *
 * THIS SOFTWARE IS SUPPLIED BY MICROCHIP "AS IS". NO WARRANTIES, WHETHER EXPRESS, IMPLIED OR STATUTORY,
 * APPLY TO THIS SOFTWARE, INCLUDING ANY IMPLIED WARRANTIES OF NON-INFRINGEMENT, MERCHANTABILITY, AND
 * FITNESS FOR A PARTICULAR PURPOSE.
 *
 * IN NO EVENT WILL MICROCHIP BE LIABLE FOR ANY INDIRECT, SPECIAL, PUNITIVE, INCIDENTAL OR CONSEQUENTIAL
 * LOSS, DAMAGE, COST OR EXPENSE OF ANY KIND WHATSOEVER RELATED TO THE SOFTWARE, HOWEVER CAUSED, EVEN IF
 * MICROCHIP HAS BEEN ADVISED OF THE POSSIBILITY OR THE DAMAGES ARE FORESEEABLE. TO THE FULLEST EXTENT
 * ALLOWED BY LAW, MICROCHIP'S TOTAL LIABILITY ON ALL CLAIMS IN ANY WAY RELATED TO THIS SOFTWARE WILL NOT
 * EXCEED THE AMOUNT OF FEES, IF ANY, THAT YOU HAVE PAID DIRECTLY TO MICROCHIP FOR THIS SOFTWARE.
 *
 */

/* file generated from device description version 2019-11-25T23:26:19Z */
#ifndef _SAMD20E16BU_H_
#define _SAMD20E16BU_H_

// Header version uses Semantic Versioning 2.0.0 (https://semver.org/)
#define HEADER_FORMAT_VERSION "2.0.0"

#define HEADER_FORMAT_VERSION_MAJOR (2)
#define HEADER_FORMAT_VERSION_MINOR (0)

/** \addtogroup SAMD20E16BU_definitions SAMD20E16BU definitions
  This file defines all structures and symbols for SAMD20E16BU:
    - registers and bitfields
    - peripheral base address
    - peripheral ID
    - PIO definitions
 *  @{
 */

#ifdef __cplusplus
 extern "C" {
#endif

#if !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__))
#  include <stdint.h>
#endif /* !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__)) */

#if !defined(SKIP_INTEGER_LITERALS)
#  if defined(_U_) || defined(_L_) || defined(_UL_)
#    error "Integer Literals macros already defined elsewhere"
#  endif

#if !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__))
/* Macros that deal with adding suffixes to integer literal constants for C/C++ */
#  define _U_(x) (x ## U)    /**< C code: Unsigned integer literal constant value */
#  define _L_(x) (x ## L)    /**< C code: Long integer literal constant value */
#  define _UL_(x) (x ## UL)  /**< C code: Unsigned Long integer literal constant value */

#else /* Assembler */

#  define _U_(x) x    /**< Assembler: Unsigned integer literal constant value */
#  define _L_(x) x    /**< Assembler: Long integer literal constant value */
#  define _UL_(x) x   /**< Assembler: Unsigned Long integer literal constant value */
#endif /* !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__)) */
#endif /* SKIP_INTEGER_LITERALS */
/** @}  end of Atmel Global Defines */

/* ************************************************************************** */
/*   CMSIS DEFINITIONS FOR SAMD20E16BU                                        */
/* ************************************************************************** */
#if !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__))
/** Interrupt Number Definition */
typedef enum IRQn
{
/******  CORTEX-M0PLUS Processor Exceptions Numbers ******************************/
  Reset_IRQn                = -15, /**< -15 Reset Vector, invoked on Power up and warm reset */
  NonMaskableInt_IRQn       = -14, /**< -14 Non maskable Interrupt, cannot be stopped or preempted */
  HardFault_IRQn            = -13, /**< -13 Hard Fault, all classes of Fault    */
  SVCall_IRQn               =  -5, /**< -5  System Service Call via SVC instruction */
  PendSV_IRQn               =  -2, /**< -2  Pendable request for system service */
  SysTick_IRQn              =  -1, /**< -1  System Tick Timer                   */
/******  SAMD20E16BU specific Interrupt Numbers ***********************************/
  PM_IRQn                   =   0, /**< 0   Power Manager (PM)                  */
  SYSCTRL_IRQn              =   1, /**< 1   System Control (SYSCTRL)            */
  WDT_IRQn                  =   2, /**< 2   Watchdog Timer (WDT)                */
  RTC_IRQn                  =   3, /**< 3   Real-Time Counter (RTC)             */
  EIC_IRQn                  =   4, /**< 4   External Interrupt Controller (EIC) */
  NVMCTRL_IRQn              =   5, /**< 5   Non-Volatile Memory Controller (NVMCTRL) */
  EVSYS_IRQn                =   6, /**< 6   Event System Interface (EVSYS)      */
  SERCOM0_IRQn              =   7, /**< 7   Serial Communication Interface (SERCOM0) */
  SERCOM1_IRQn              =   8, /**< 8   Serial Communication Interface (SERCOM1) */
  SERCOM2_IRQn              =   9, /**< 9   Serial Communication Interface (SERCOM2) */
  SERCOM3_IRQn              =  10, /**< 10  Serial Communication Interface (SERCOM3) */
  TC0_IRQn                  =  13, /**< 13  Basic Timer Counter (TC0)           */
  TC1_IRQn                  =  14, /**< 14  Basic Timer Counter (TC1)           */
  TC2_IRQn                  =  15, /**< 15  Basic Timer Counter (TC2)           */
  TC3_IRQn                  =  16, /**< 16  Basic Timer Counter (TC3)           */
  TC4_IRQn                  =  17, /**< 17  Basic Timer Counter (TC4)           */
  TC5_IRQn                  =  18, /**< 18  Basic Timer Counter (TC5)           */
  ADC_IRQn                  =  21, /**< 21  Analog Digital Converter (ADC)      */
  AC_IRQn                   =  22, /**< 22  Analog Comparators (AC)             */
  DAC_IRQn                  =  23, /**< 23  Digital Analog Converter (DAC)      */
  PTC_IRQn                  =  24, /**< 24  Peripheral Touch Controller (PTC)   */

  PERIPH_MAX_IRQn           =  24  /**< Max peripheral ID */
} IRQn_Type;
#endif /* !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__)) */

#if !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__))
typedef struct _DeviceVectors
{
  /* Stack pointer */
  void* pvStack;
  /* CORTEX-M0PLUS handlers */
  void* pfnReset_Handler;                        /* -15 Reset Vector, invoked on Power up and warm reset */
  void* pfnNonMaskableInt_Handler;               /* -14 Non maskable Interrupt, cannot be stopped or preempted */
  void* pfnHardFault_Handler;                    /* -13 Hard Fault, all classes of Fault */
  void* pvReservedC12;
  void* pvReservedC11;
  void* pvReservedC10;
  void* pvReservedC9;
  void* pvReservedC8;
  void* pvReservedC7;
  void* pvReservedC6;
  void* pfnSVCall_Handler;                       /*  -5 System Service Call via SVC instruction */
  void* pvReservedC4;
  void* pvReservedC3;
  void* pfnPendSV_Handler;                       /*  -2 Pendable request for system service */
  void* pfnSysTick_Handler;                      /*  -1 System Tick Timer */

  /* Peripheral handlers */
  void* pfnPM_Handler;                           /*   0 Power Manager (PM) */
  void* pfnSYSCTRL_Handler;                      /*   1 System Control (SYSCTRL) */
  void* pfnWDT_Handler;                          /*   2 Watchdog Timer (WDT) */
  void* pfnRTC_Handler;                          /*   3 Real-Time Counter (RTC) */
  void* pfnEIC_Handler;                          /*   4 External Interrupt Controller (EIC) */
  void* pfnNVMCTRL_Handler;                      /*   5 Non-Volatile Memory Controller (NVMCTRL) */
  void* pfnEVSYS_Handler;                        /*   6 Event System Interface (EVSYS) */
  void* pfnSERCOM0_Handler;                      /*   7 Serial Communication Interface (SERCOM0) */
  void* pfnSERCOM1_Handler;                      /*   8 Serial Communication Interface (SERCOM1) */
  void* pfnSERCOM2_Handler;                      /*   9 Serial Communication Interface (SERCOM2) */
  void* pfnSERCOM3_Handler;                      /*  10 Serial Communication Interface (SERCOM3) */
  void* pvReserved11;
  void* pvReserved12;
  void* pfnTC0_Handler;                          /*  13 Basic Timer Counter (TC0) */
  void* pfnTC1_Handler;                          /*  14 Basic Timer Counter (TC1) */
  void* pfnTC2_Handler;                          /*  15 Basic Timer Counter (TC2) */
  void* pfnTC3_Handler;                          /*  16 Basic Timer Counter (TC3) */
  void* pfnTC4_Handler;                          /*  17 Basic Timer Counter (TC4) */
  void* pfnTC5_Handler;                          /*  18 Basic Timer Counter (TC5) */
  void* pvReserved19;
  void* pvReserved20;
  void* pfnADC_Handler;                          /*  21 Analog Digital Converter (ADC) */
  void* pfnAC_Handler;                           /*  22 Analog Comparators (AC) */
  void* pfnDAC_Handler;                          /*  23 Digital Analog Converter (DAC) */
  void* pfnPTC_Handler;                          /*  24 Peripheral Touch Controller (PTC) */
} DeviceVectors;

#endif /* !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__)) */

#if !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__))
#if !defined DONT_USE_PREDEFINED_CORE_HANDLERS
/* CORTEX-M0PLUS exception handlers */
void Reset_Handler                 ( void );
void NonMaskableInt_Handler        ( void );
void HardFault_Handler             ( void );
void SVCall_Handler                ( void );
void PendSV_Handler                ( void );
void SysTick_Handler               ( void );
#endif /* DONT_USE_PREDEFINED_CORE_HANDLERS */

#if !defined DONT_USE_PREDEFINED_PERIPHERALS_HANDLERS
/* Peripherals interrupt handlers */
void PM_Handler                    ( void );
void SYSCTRL_Handler               ( void );
void WDT_Handler                   ( void );
void RTC_Handler                   ( void );
void EIC_Handler                   ( void );
void NVMCTRL_Handler               ( void );
void EVSYS_Handler                 ( void );
void SERCOM0_Handler               ( void );
void SERCOM1_Handler               ( void );
void SERCOM2_Handler               ( void );
void SERCOM3_Handler               ( void );
void TC0_Handler                   ( void );
void TC1_Handler                   ( void );
void TC2_Handler                   ( void );
void TC3_Handler                   ( void );
void TC4_Handler                   ( void );
void TC5_Handler                   ( void );
void ADC_Handler                   ( void );
void AC_Handler                    ( void );
void DAC_Handler                   ( void );
void PTC_Handler                   ( void );
#endif /* DONT_USE_PREDEFINED_PERIPHERALS_HANDLERS */
#endif /* !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__)) */

/** \brief Configuration of the CORTEX-M0PLUS Processor and Core Peripherals */
#define __CM0PLUS_REV             0x0001 /**< Cortex-M0+ Core Revision                                                  */
#define __MPU_PRESENT                  0 /**< MPU present or not                                                        */
#define __NVIC_PRIO_BITS               2 /**< Number of Bits used for Priority Levels                                   */
#define __VTOR_PRESENT                 1 /**< Vector Table Offset Register present or not                               */
#define __Vendor_SysTickConfig         0 /**< Set to 1 if different SysTick Config is used                              */
#define __ARCH_ARM                     1
#define __ARCH_ARM_CORTEX_M            1

/*
 * \brief CMSIS includes
 */
#include "core_cm0plus.h"
#if defined USE_CMSIS_INIT
#include "system_samd20.h"
#endif /* USE_CMSIS_INIT */

/** \defgroup SAMD20E16BU_api Peripheral Software API
 *  @{
 */

/* ************************************************************************** */
/**  SOFTWARE PERIPHERAL API DEFINITION FOR SAMD20E16BU                       */
/* ************************************************************************** */
#include "component/ac.h"
#include "component/adc.h"
#include "component/dac.h"
#include "component/dsu.h"
#include "component/eic.h"
#include "component/evsys.h"
#include "component/gclk.h"
#include "component/nvmctrl.h"
#include "component/pac.h"
#include "component/pm.h"
#include "component/port.h"
#include "component/ptc.h"
#include "component/rtc.h"
#include "component/sercom.h"
#include "component/sysctrl.h"
#include "component/tc.h"
#include "component/wdt.h"
/** @}  end of Peripheral Software API */

/* ************************************************************************** */
/*   INSTANCE DEFINITIONS FOR SAMD20E16BU */
/* ************************************************************************** */
#include "instance/ac.h"
#include "instance/adc.h"
#include "instance/dac.h"
#include "instance/dsu.h"
#include "instance/eic.h"
#include "instance/evsys.h"
#include "instance/gclk.h"
#include "instance/nvmctrl.h"
#include "instance/pac0.h"
#include "instance/pac1.h"
#include "instance/pac2.h"
#include "instance/pm.h"
#include "instance/port.h"
#include "instance/ptc.h"
#include "instance/rtc.h"
#include "instance/sercom0.h"
#include "instance/sercom1.h"
#include "instance/sercom2.h"
#include "instance/sercom3.h"
#include "instance/sysctrl.h"
#include "instance/tc0.h"
#include "instance/tc1.h"
#include "instance/tc2.h"
#include "instance/tc3.h"
#include "instance/tc4.h"
#include "instance/tc5.h"
#include "instance/wdt.h"

/** \addtogroup SAMD20E16BU_id Peripheral Ids Definitions
 *  @{
 */

/* ************************************************************************** */
/*  PERIPHERAL ID DEFINITIONS FOR SAMD20E16BU                                 */
/* ************************************************************************** */
#define ID_PAC0          (  0) /**< \brief Peripheral Access Controller (PAC0) */
#define ID_PM            (  1) /**< \brief Power Manager (PM) */
#define ID_SYSCTRL       (  2) /**< \brief System Control (SYSCTRL) */
#define ID_GCLK          (  3) /**< \brief Generic Clock Generator (GCLK) */
#define ID_WDT           (  4) /**< \brief Watchdog Timer (WDT) */
#define ID_RTC           (  5) /**< \brief Real-Time Counter (RTC) */
#define ID_EIC           (  6) /**< \brief External Interrupt Controller (EIC) */
#define ID_PAC1          ( 32) /**< \brief Peripheral Access Controller (PAC1) */
#define ID_DSU           ( 33) /**< \brief Device Service Unit (DSU) */
#define ID_NVMCTRL       ( 34) /**< \brief Non-Volatile Memory Controller (NVMCTRL) */
#define ID_PORT          ( 35) /**< \brief Port Module (PORT) */
#define ID_PAC2          ( 64) /**< \brief Peripheral Access Controller (PAC2) */
#define ID_EVSYS         ( 65) /**< \brief Event System Interface (EVSYS) */
#define ID_SERCOM0       ( 66) /**< \brief Serial Communication Interface (SERCOM0) */
#define ID_SERCOM1       ( 67) /**< \brief Serial Communication Interface (SERCOM1) */
#define ID_SERCOM2       ( 68) /**< \brief Serial Communication Interface (SERCOM2) */
#define ID_SERCOM3       ( 69) /**< \brief Serial Communication Interface (SERCOM3) */
#define ID_TC0           ( 72) /**< \brief Basic Timer Counter (TC0) */
#define ID_TC1           ( 73) /**< \brief Basic Timer Counter (TC1) */
#define ID_TC2           ( 74) /**< \brief Basic Timer Counter (TC2) */
#define ID_TC3           ( 75) /**< \brief Basic Timer Counter (TC3) */
#define ID_TC4           ( 76) /**< \brief Basic Timer Counter (TC4) */
#define ID_TC5           ( 77) /**< \brief Basic Timer Counter (TC5) */
#define ID_ADC           ( 80) /**< \brief Analog Digital Converter (ADC) */
#define ID_AC            ( 81) /**< \brief Analog Comparators (AC) */
#define ID_DAC           ( 82) /**< \brief Digital Analog Converter (DAC) */
#define ID_PTC           ( 83) /**< \brief Peripheral Touch Controller (PTC) */

#define ID_PERIPH_MAX    ( 83) /**< \brief Number of peripheral IDs */
/** @}  end of Peripheral Ids Definitions */

/** \addtogroup SAMD20E16BU_base Peripheral Base Address Definitions
 *  @{
 */

/* ************************************************************************** */
/*   REGISTER STRUCTURE ADDRESS DEFINITIONS FOR SAMD20E16BU                   */
/* ************************************************************************** */
#if !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__))
#define AC_REGS                          ((ac_registers_t*)0x42004400)                 /**< \brief AC Registers Address         */
#define ADC_REGS                         ((adc_registers_t*)0x42004000)                /**< \brief ADC Registers Address        */
#define DAC_REGS                         ((dac_registers_t*)0x42004800)                /**< \brief DAC Registers Address        */
#define DSU_REGS                         ((dsu_registers_t*)0x41002000)                /**< \brief DSU Registers Address        */
#define EIC_REGS                         ((eic_registers_t*)0x40001800)                /**< \brief EIC Registers Address        */
#define EVSYS_REGS                       ((evsys_registers_t*)0x42000400)              /**< \brief EVSYS Registers Address      */
#define GCLK_REGS                        ((gclk_registers_t*)0x40000c00)               /**< \brief GCLK Registers Address       */
#define NVMCTRL_REGS                     ((nvmctrl_registers_t*)0x41004000)            /**< \brief NVMCTRL Registers Address    */
#define PAC0_REGS                        ((pac_registers_t*)0x40000000)                /**< \brief PAC0 Registers Address       */
#define PAC1_REGS                        ((pac_registers_t*)0x41000000)                /**< \brief PAC1 Registers Address       */
#define PAC2_REGS                        ((pac_registers_t*)0x42000000)                /**< \brief PAC2 Registers Address       */
#define PM_REGS                          ((pm_registers_t*)0x40000400)                 /**< \brief PM Registers Address         */
#define PORT_REGS                        ((port_registers_t*)0x41004400)               /**< \brief PORT Registers Address       */
#define PORT_IOBUS_REGS                  ((port_registers_t*)0x60000000)               /**< \brief PORT Registers Address       */
#define PTC_REGS                         ((ptc_registers_t*)0x42004c00)                /**< \brief PTC Registers Address        */
#define RTC_REGS                         ((rtc_registers_t*)0x40001400)                /**< \brief RTC Registers Address        */
#define SERCOM0_REGS                     ((sercom_registers_t*)0x42000800)             /**< \brief SERCOM0 Registers Address    */
#define SERCOM1_REGS                     ((sercom_registers_t*)0x42000c00)             /**< \brief SERCOM1 Registers Address    */
#define SERCOM2_REGS                     ((sercom_registers_t*)0x42001000)             /**< \brief SERCOM2 Registers Address    */
#define SERCOM3_REGS                     ((sercom_registers_t*)0x42001400)             /**< \brief SERCOM3 Registers Address    */
#define SYSCTRL_REGS                     ((sysctrl_registers_t*)0x40000800)            /**< \brief SYSCTRL Registers Address    */
#define TC0_REGS                         ((tc_registers_t*)0x42002000)                 /**< \brief TC0 Registers Address        */
#define TC1_REGS                         ((tc_registers_t*)0x42002400)                 /**< \brief TC1 Registers Address        */
#define TC2_REGS                         ((tc_registers_t*)0x42002800)                 /**< \brief TC2 Registers Address        */
#define TC3_REGS                         ((tc_registers_t*)0x42002c00)                 /**< \brief TC3 Registers Address        */
#define TC4_REGS                         ((tc_registers_t*)0x42003000)                 /**< \brief TC4 Registers Address        */
#define TC5_REGS                         ((tc_registers_t*)0x42003400)                 /**< \brief TC5 Registers Address        */
#define WDT_REGS                         ((wdt_registers_t*)0x40001000)                /**< \brief WDT Registers Address        */
#endif /* (defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__)) */
/** @}  end of Peripheral Base Address Definitions */

/** \addtogroup SAMD20E16BU_base Peripheral Base Address Definitions
 *  @{
 */

/* ************************************************************************** */
/*   BASE ADDRESS DEFINITIONS FOR SAMD20E16BU                                 */
/* ************************************************************************** */
#define AC_BASE_ADDRESS                  _UL_(0x42004400)                              /* AC Base Address */
#define ADC_BASE_ADDRESS                 _UL_(0x42004000)                              /* ADC Base Address */
#define DAC_BASE_ADDRESS                 _UL_(0x42004800)                              /* DAC Base Address */
#define DSU_BASE_ADDRESS                 _UL_(0x41002000)                              /* DSU Base Address */
#define EIC_BASE_ADDRESS                 _UL_(0x40001800)                              /* EIC Base Address */
#define EVSYS_BASE_ADDRESS               _UL_(0x42000400)                              /* EVSYS Base Address */
#define GCLK_BASE_ADDRESS                _UL_(0x40000c00)                              /* GCLK Base Address */
#define NVMCTRL_BASE_ADDRESS             _UL_(0x41004000)                              /* NVMCTRL Base Address */
#define PAC0_BASE_ADDRESS                _UL_(0x40000000)                              /* PAC0 Base Address */
#define PAC1_BASE_ADDRESS                _UL_(0x41000000)                              /* PAC1 Base Address */
#define PAC2_BASE_ADDRESS                _UL_(0x42000000)                              /* PAC2 Base Address */
#define PM_BASE_ADDRESS                  _UL_(0x40000400)                              /* PM Base Address */
#define PORT_BASE_ADDRESS                _UL_(0x41004400)                              /* PORT Base Address */
#define PORT_IOBUS_BASE_ADDRESS          _UL_(0x60000000)                              /* PORT Base Address */
#define PTC_BASE_ADDRESS                 _UL_(0x42004c00)                              /* PTC Base Address */
#define RTC_BASE_ADDRESS                 _UL_(0x40001400)                              /* RTC Base Address */
#define SERCOM0_BASE_ADDRESS             _UL_(0x42000800)                              /* SERCOM0 Base Address */
#define SERCOM1_BASE_ADDRESS             _UL_(0x42000c00)                              /* SERCOM1 Base Address */
#define SERCOM2_BASE_ADDRESS             _UL_(0x42001000)                              /* SERCOM2 Base Address */
#define SERCOM3_BASE_ADDRESS             _UL_(0x42001400)                              /* SERCOM3 Base Address */
#define SYSCTRL_BASE_ADDRESS             _UL_(0x40000800)                              /* SYSCTRL Base Address */
#define TC0_BASE_ADDRESS                 _UL_(0x42002000)                              /* TC0 Base Address */
#define TC1_BASE_ADDRESS                 _UL_(0x42002400)                              /* TC1 Base Address */
#define TC2_BASE_ADDRESS                 _UL_(0x42002800)                              /* TC2 Base Address */
#define TC3_BASE_ADDRESS                 _UL_(0x42002c00)                              /* TC3 Base Address */
#define TC4_BASE_ADDRESS                 _UL_(0x42003000)                              /* TC4 Base Address */
#define TC5_BASE_ADDRESS                 _UL_(0x42003400)                              /* TC5 Base Address */
#define WDT_BASE_ADDRESS                 _UL_(0x40001000)                              /* WDT Base Address */
/** @}  end of Peripheral Base Address Definitions */

/** \addtogroup SAMD20E16BU_pio Peripheral Pio Definitions
 *  @{
 */

/* ************************************************************************** */
/*   PIO DEFINITIONS FOR SAMD20E16BU                                          */
/* ************************************************************************** */
#include "pio/samd20e16bu.h"
/** @}  end of Peripheral Pio Definitions */

/* ************************************************************************** */
/*   MEMORY MAPPING DEFINITIONS FOR SAMD20E16BU                               */
/* ************************************************************************** */

#define FLASH_SIZE                     _UL_(0x00010000)    /*   64kB Memory segment type: flash */
#define FLASH_PAGE_SIZE                _UL_(        64)
#define FLASH_NB_OF_PAGES              _UL_(      1024)

#define CAL_SIZE                       _UL_(0x00000008)    /*    0kB Memory segment type: fuses */
#define LOCKBIT_SIZE                   _UL_(0x00000004)    /*    0kB Memory segment type: fuses */
#define OTP1_SIZE                      _UL_(0x00000008)    /*    0kB Memory segment type: fuses */
#define OTP2_SIZE                      _UL_(0x00000008)    /*    0kB Memory segment type: fuses */
#define OTP4_SIZE                      _UL_(0x000000e0)    /*    0kB Memory segment type: fuses */
#define OTP4_PAGE_SIZE                 _UL_(        64)
#define OTP4_NB_OF_PAGES               _UL_(         3)

#define TEMP_LOG_SIZE                  _UL_(0x00000008)    /*    0kB Memory segment type: fuses */
#define USER_PAGE_SIZE                 _UL_(0x00000100)    /*    0kB Memory segment type: user_page */
#define USER_PAGE_PAGE_SIZE            _UL_(        64)
#define USER_PAGE_NB_OF_PAGES          _UL_(         4)

#define HRAMC0_SIZE                    _UL_(0x00002000)    /*    8kB Memory segment type: ram */
#define HPB0_SIZE                      _UL_(0x00010000)    /*   64kB Memory segment type: io */
#define HPB1_SIZE                      _UL_(0x00010000)    /*   64kB Memory segment type: io */
#define HPB2_SIZE                      _UL_(0x00010000)    /*   64kB Memory segment type: io */
#define PPB_SIZE                       _UL_(0x00100000)    /* 1024kB Memory segment type: io */
#define SCS_SIZE                       _UL_(0x00001000)    /*    4kB Memory segment type: io */
#define PERIPHERALS_SIZE               _UL_(0x20000000)    /* 524288kB Memory segment type: io */

#define FLASH_ADDR                     _UL_(0x00000000)    /**< FLASH base address (type: flash)*/
#define CAL_ADDR                       _UL_(0x00800000)    /**< CAL base address (type: fuses)*/
#define LOCKBIT_ADDR                   _UL_(0x00802000)    /**< LOCKBIT base address (type: fuses)*/
#define OTP1_ADDR                      _UL_(0x00806000)    /**< OTP1 base address (type: fuses)*/
#define OTP2_ADDR                      _UL_(0x00806008)    /**< OTP2 base address (type: fuses)*/
#define OTP4_ADDR                      _UL_(0x00806020)    /**< OTP4 base address (type: fuses)*/
#define TEMP_LOG_ADDR                  _UL_(0x00806030)    /**< TEMP_LOG base address (type: fuses)*/
#define USER_PAGE_ADDR                 _UL_(0x00804000)    /**< USER_PAGE base address (type: user_page)*/
#define HRAMC0_ADDR                    _UL_(0x20000000)    /**< HRAMC0 base address (type: ram)*/
#define HPB0_ADDR                      _UL_(0x40000000)    /**< HPB0 base address (type: io)*/
#define HPB1_ADDR                      _UL_(0x41000000)    /**< HPB1 base address (type: io)*/
#define HPB2_ADDR                      _UL_(0x42000000)    /**< HPB2 base address (type: io)*/
#define PPB_ADDR                       _UL_(0xe0000000)    /**< PPB base address (type: io)*/
#define SCS_ADDR                       _UL_(0xe000e000)    /**< SCS base address (type: io)*/
#define PERIPHERALS_ADDR               _UL_(0x40000000)    /**< PERIPHERALS base address (type: io)*/

/* ************************************************************************** */
/**  DEVICE SIGNATURES FOR SAMD20E16BU                                        */
/* ************************************************************************** */
#define CHIP_DSU_DID                   _UL_(0X1000160F)

/* ************************************************************************** */
/**  ELECTRICAL DEFINITIONS FOR SAMD20E16BU                                   */
/* ************************************************************************** */

/* ************************************************************************** */
/** Event Generator IDs for SAMD20E16BU */
/* ************************************************************************** */
#define EVENT_ID_GEN_RTC_CMP_0                            1 /**< ID for RTC event generator CMP_0 */
#define EVENT_ID_GEN_RTC_CMP_1                            2 /**< ID for RTC event generator CMP_1 */
#define EVENT_ID_GEN_RTC_OVF                              3 /**< ID for RTC event generator OVF */
#define EVENT_ID_GEN_RTC_PER_0                            4 /**< ID for RTC event generator PER_0 */
#define EVENT_ID_GEN_RTC_PER_1                            5 /**< ID for RTC event generator PER_1 */
#define EVENT_ID_GEN_RTC_PER_2                            6 /**< ID for RTC event generator PER_2 */
#define EVENT_ID_GEN_RTC_PER_3                            7 /**< ID for RTC event generator PER_3 */
#define EVENT_ID_GEN_RTC_PER_4                            8 /**< ID for RTC event generator PER_4 */
#define EVENT_ID_GEN_RTC_PER_5                            9 /**< ID for RTC event generator PER_5 */
#define EVENT_ID_GEN_RTC_PER_6                           10 /**< ID for RTC event generator PER_6 */
#define EVENT_ID_GEN_RTC_PER_7                           11 /**< ID for RTC event generator PER_7 */
#define EVENT_ID_GEN_EIC_EXTINT_0                        12 /**< ID for EIC event generator EXTINT_0 */
#define EVENT_ID_GEN_EIC_EXTINT_1                        13 /**< ID for EIC event generator EXTINT_1 */
#define EVENT_ID_GEN_EIC_EXTINT_2                        14 /**< ID for EIC event generator EXTINT_2 */
#define EVENT_ID_GEN_EIC_EXTINT_3                        15 /**< ID for EIC event generator EXTINT_3 */
#define EVENT_ID_GEN_EIC_EXTINT_4                        16 /**< ID for EIC event generator EXTINT_4 */
#define EVENT_ID_GEN_EIC_EXTINT_5                        17 /**< ID for EIC event generator EXTINT_5 */
#define EVENT_ID_GEN_EIC_EXTINT_6                        18 /**< ID for EIC event generator EXTINT_6 */
#define EVENT_ID_GEN_EIC_EXTINT_7                        19 /**< ID for EIC event generator EXTINT_7 */
#define EVENT_ID_GEN_EIC_EXTINT_8                        20 /**< ID for EIC event generator EXTINT_8 */
#define EVENT_ID_GEN_EIC_EXTINT_9                        21 /**< ID for EIC event generator EXTINT_9 */
#define EVENT_ID_GEN_EIC_EXTINT_10                       22 /**< ID for EIC event generator EXTINT_10 */
#define EVENT_ID_GEN_EIC_EXTINT_11                       23 /**< ID for EIC event generator EXTINT_11 */
#define EVENT_ID_GEN_EIC_EXTINT_12                       24 /**< ID for EIC event generator EXTINT_12 */
#define EVENT_ID_GEN_EIC_EXTINT_13                       25 /**< ID for EIC event generator EXTINT_13 */
#define EVENT_ID_GEN_EIC_EXTINT_14                       26 /**< ID for EIC event generator EXTINT_14 */
#define EVENT_ID_GEN_EIC_EXTINT_15                       27 /**< ID for EIC event generator EXTINT_15 */
#define EVENT_ID_GEN_TC0_OVF                             28 /**< ID for TC0 event generator OVF */
#define EVENT_ID_GEN_TC0_MC_0                            29 /**< ID for TC0 event generator MC_0 */
#define EVENT_ID_GEN_TC0_MC_1                            30 /**< ID for TC0 event generator MC_1 */
#define EVENT_ID_GEN_TC1_OVF                             31 /**< ID for TC1 event generator OVF */
#define EVENT_ID_GEN_TC1_MC_0                            32 /**< ID for TC1 event generator MC_0 */
#define EVENT_ID_GEN_TC1_MC_1                            33 /**< ID for TC1 event generator MC_1 */
#define EVENT_ID_GEN_TC2_OVF                             34 /**< ID for TC2 event generator OVF */
#define EVENT_ID_GEN_TC2_MC_0                            35 /**< ID for TC2 event generator MC_0 */
#define EVENT_ID_GEN_TC2_MC_1                            36 /**< ID for TC2 event generator MC_1 */
#define EVENT_ID_GEN_TC3_OVF                             37 /**< ID for TC3 event generator OVF */
#define EVENT_ID_GEN_TC3_MC_0                            38 /**< ID for TC3 event generator MC_0 */
#define EVENT_ID_GEN_TC3_MC_1                            39 /**< ID for TC3 event generator MC_1 */
#define EVENT_ID_GEN_TC4_OVF                             40 /**< ID for TC4 event generator OVF */
#define EVENT_ID_GEN_TC4_MC_0                            41 /**< ID for TC4 event generator MC_0 */
#define EVENT_ID_GEN_TC4_MC_1                            42 /**< ID for TC4 event generator MC_1 */
#define EVENT_ID_GEN_TC5_OVF                             43 /**< ID for TC5 event generator OVF */
#define EVENT_ID_GEN_TC5_MC_0                            44 /**< ID for TC5 event generator MC_0 */
#define EVENT_ID_GEN_TC5_MC_1                            45 /**< ID for TC5 event generator MC_1 */
#define EVENT_ID_GEN_ADC_RESRDY                          52 /**< ID for ADC event generator RESRDY */
#define EVENT_ID_GEN_ADC_WINMON                          53 /**< ID for ADC event generator WINMON */
#define EVENT_ID_GEN_AC_COMP_0                           54 /**< ID for AC event generator COMP_0 */
#define EVENT_ID_GEN_AC_COMP_1                           55 /**< ID for AC event generator COMP_1 */
#define EVENT_ID_GEN_AC_WIN_0                            56 /**< ID for AC event generator WIN_0 */
#define EVENT_ID_GEN_DAC_EMPTY                           57 /**< ID for DAC event generator EMPTY */

/* ************************************************************************** */
/** Event User IDs for SAMD20E16BU */
/* ************************************************************************** */
#define EVENT_ID_USER_TC0_EVU                             0 /**< ID for TC0 event user EVU */
#define EVENT_ID_USER_TC1_EVU                             1 /**< ID for TC1 event user EVU */
#define EVENT_ID_USER_TC2_EVU                             2 /**< ID for TC2 event user EVU */
#define EVENT_ID_USER_TC3_EVU                             3 /**< ID for TC3 event user EVU */
#define EVENT_ID_USER_TC4_EVU                             4 /**< ID for TC4 event user EVU */
#define EVENT_ID_USER_TC5_EVU                             5 /**< ID for TC5 event user EVU */
#define EVENT_ID_USER_ADC_START                           8 /**< ID for ADC event user START */
#define EVENT_ID_USER_ADC_SYNC                            9 /**< ID for ADC event user SYNC */
#define EVENT_ID_USER_AC_SOC_0                           10 /**< ID for AC event user SOC_0 */
#define EVENT_ID_USER_AC_SOC_1                           11 /**< ID for AC event user SOC_1 */
#define EVENT_ID_USER_DAC_START                          12 /**< ID for DAC event user START */

#ifdef __cplusplus
}
#endif

/** @}  end of SAMD20E16BU definitions */


#endif /* _SAMD20E16BU_H_ */

