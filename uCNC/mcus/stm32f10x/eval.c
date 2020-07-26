# 1 "mcu_stm32f10x.c"
# 1 "<built-in>"
# 1 "<command-line>"
# 1 "mcu_stm32f10x.c"
# 20 "mcu_stm32f10x.c"
# 1 "../../config.h" 1
# 23 "../../config.h"
# 1 "../../boards.h" 1
# 24 "../../config.h" 2
# 1 "../../machines.h" 1
# 25 "../../config.h" 2
# 54 "../../config.h"
# 1 "../../boarddefs.h" 1
# 22 "../../boarddefs.h"
# 1 "../../mcus.h" 1
# 23 "../../boarddefs.h" 2
# 50 "../../boarddefs.h"
# 1 "../../mcus\\stm32f10x\\boardmap_bluepill.h" 1
# 51 "../../boarddefs.h" 2
# 64 "../../boarddefs.h"
# 1 "../../mcudefs.h" 1
# 37 "../../mcudefs.h"
# 1 "../../mcus\\stm32f10x\\mcumap_stm32f10x.h" 1
# 29 "../../mcus\\stm32f10x\\mcumap_stm32f10x.h"
# 1 "Drivers/STM32F1xx_HAL_Driver/Inc/stm32f1xx_hal.h" 1
# 30 "Drivers/STM32F1xx_HAL_Driver/Inc/stm32f1xx_hal.h"
# 1 "Inc/stm32f1xx_hal_conf.h" 1
# 237 "Inc/stm32f1xx_hal_conf.h"
# 1 "Drivers/STM32F1xx_HAL_Driver/Inc/stm32f1xx_hal_rcc.h" 1
# 29 "Drivers/STM32F1xx_HAL_Driver/Inc/stm32f1xx_hal_rcc.h"
# 1 "Drivers/STM32F1xx_HAL_Driver/Inc/stm32f1xx_hal_def.h" 1
# 30 "Drivers/STM32F1xx_HAL_Driver/Inc/stm32f1xx_hal_def.h"
# 1 "Drivers/CMSIS/Device/ST/STM32F1xx/Include/stm32f1xx.h" 1
# 131 "Drivers/CMSIS/Device/ST/STM32F1xx/Include/stm32f1xx.h"
# 1 "Drivers/CMSIS/Device/ST/STM32F1xx/Include/stm32f103xb.h" 1
# 69 "Drivers/CMSIS/Device/ST/STM32F1xx/Include/stm32f103xb.h"
typedef enum
{

  NonMaskableInt_IRQn = -14,
  HardFault_IRQn = -13,
  MemoryManagement_IRQn = -12,
  BusFault_IRQn = -11,
  UsageFault_IRQn = -10,
  SVCall_IRQn = -5,
  DebugMonitor_IRQn = -4,
  PendSV_IRQn = -2,
  SysTick_IRQn = -1,


  WWDG_IRQn = 0,
  PVD_IRQn = 1,
  TAMPER_IRQn = 2,
  RTC_IRQn = 3,
  FLASH_IRQn = 4,
  RCC_IRQn = 5,
  EXTI0_IRQn = 6,
  EXTI1_IRQn = 7,
  EXTI2_IRQn = 8,
  EXTI3_IRQn = 9,
  EXTI4_IRQn = 10,
  DMA1_Channel1_IRQn = 11,
  DMA1_Channel2_IRQn = 12,
  DMA1_Channel3_IRQn = 13,
  DMA1_Channel4_IRQn = 14,
  DMA1_Channel5_IRQn = 15,
  DMA1_Channel6_IRQn = 16,
  DMA1_Channel7_IRQn = 17,
  ADC1_2_IRQn = 18,
  USB_HP_CAN1_TX_IRQn = 19,
  USB_LP_CAN1_RX0_IRQn = 20,
  CAN1_RX1_IRQn = 21,
  CAN1_SCE_IRQn = 22,
  EXTI9_5_IRQn = 23,
  TIM1_BRK_IRQn = 24,
  TIM1_UP_IRQn = 25,
  TIM1_TRG_COM_IRQn = 26,
  TIM1_CC_IRQn = 27,
  TIM2_IRQn = 28,
  TIM3_IRQn = 29,
  TIM4_IRQn = 30,
  I2C1_EV_IRQn = 31,
  I2C1_ER_IRQn = 32,
  I2C2_EV_IRQn = 33,
  I2C2_ER_IRQn = 34,
  SPI1_IRQn = 35,
  SPI2_IRQn = 36,
  USART1_IRQn = 37,
  USART2_IRQn = 38,
  USART3_IRQn = 39,
  EXTI15_10_IRQn = 40,
  RTC_Alarm_IRQn = 41,
  USBWakeUp_IRQn = 42,
} IRQn_Type;





# 1 "Drivers/CMSIS/Include/core_cm3.h" 1
# 34 "Drivers/CMSIS/Include/core_cm3.h"
# 1 "c:\\program files (x86)\\gnu arm embedded toolchain\\9 2020-q2-update\\lib\\gcc\\arm-none-eabi\\9.3.1\\include\\stdint.h" 1 3 4
# 9 "c:\\program files (x86)\\gnu arm embedded toolchain\\9 2020-q2-update\\lib\\gcc\\arm-none-eabi\\9.3.1\\include\\stdint.h" 3 4
# 1 "c:\\program files (x86)\\gnu arm embedded toolchain\\9 2020-q2-update\\arm-none-eabi\\include\\stdint.h" 1 3 4
# 12 "c:\\program files (x86)\\gnu arm embedded toolchain\\9 2020-q2-update\\arm-none-eabi\\include\\stdint.h" 3 4
# 1 "c:\\program files (x86)\\gnu arm embedded toolchain\\9 2020-q2-update\\arm-none-eabi\\include\\machine\\_default_types.h" 1 3 4







# 1 "c:\\program files (x86)\\gnu arm embedded toolchain\\9 2020-q2-update\\arm-none-eabi\\include\\sys\\features.h" 1 3 4
# 28 "c:\\program files (x86)\\gnu arm embedded toolchain\\9 2020-q2-update\\arm-none-eabi\\include\\sys\\features.h" 3 4
# 1 "c:\\program files (x86)\\gnu arm embedded toolchain\\9 2020-q2-update\\arm-none-eabi\\include\\_newlib_version.h" 1 3 4
# 29 "c:\\program files (x86)\\gnu arm embedded toolchain\\9 2020-q2-update\\arm-none-eabi\\include\\sys\\features.h" 2 3 4
# 9 "c:\\program files (x86)\\gnu arm embedded toolchain\\9 2020-q2-update\\arm-none-eabi\\include\\machine\\_default_types.h" 2 3 4
# 41 "c:\\program files (x86)\\gnu arm embedded toolchain\\9 2020-q2-update\\arm-none-eabi\\include\\machine\\_default_types.h" 3 4

# 41 "c:\\program files (x86)\\gnu arm embedded toolchain\\9 2020-q2-update\\arm-none-eabi\\include\\machine\\_default_types.h" 3 4
typedef signed char __int8_t;

typedef unsigned char __uint8_t;
# 55 "c:\\program files (x86)\\gnu arm embedded toolchain\\9 2020-q2-update\\arm-none-eabi\\include\\machine\\_default_types.h" 3 4
typedef short int __int16_t;

typedef short unsigned int __uint16_t;
# 77 "c:\\program files (x86)\\gnu arm embedded toolchain\\9 2020-q2-update\\arm-none-eabi\\include\\machine\\_default_types.h" 3 4
typedef long int __int32_t;

typedef long unsigned int __uint32_t;
# 103 "c:\\program files (x86)\\gnu arm embedded toolchain\\9 2020-q2-update\\arm-none-eabi\\include\\machine\\_default_types.h" 3 4
typedef long long int __int64_t;

typedef long long unsigned int __uint64_t;
# 134 "c:\\program files (x86)\\gnu arm embedded toolchain\\9 2020-q2-update\\arm-none-eabi\\include\\machine\\_default_types.h" 3 4
typedef signed char __int_least8_t;

typedef unsigned char __uint_least8_t;
# 160 "c:\\program files (x86)\\gnu arm embedded toolchain\\9 2020-q2-update\\arm-none-eabi\\include\\machine\\_default_types.h" 3 4
typedef short int __int_least16_t;

typedef short unsigned int __uint_least16_t;
# 182 "c:\\program files (x86)\\gnu arm embedded toolchain\\9 2020-q2-update\\arm-none-eabi\\include\\machine\\_default_types.h" 3 4
typedef long int __int_least32_t;

typedef long unsigned int __uint_least32_t;
# 200 "c:\\program files (x86)\\gnu arm embedded toolchain\\9 2020-q2-update\\arm-none-eabi\\include\\machine\\_default_types.h" 3 4
typedef long long int __int_least64_t;

typedef long long unsigned int __uint_least64_t;
# 214 "c:\\program files (x86)\\gnu arm embedded toolchain\\9 2020-q2-update\\arm-none-eabi\\include\\machine\\_default_types.h" 3 4
typedef long long int __intmax_t;







typedef long long unsigned int __uintmax_t;







typedef int __intptr_t;

typedef unsigned int __uintptr_t;
# 13 "c:\\program files (x86)\\gnu arm embedded toolchain\\9 2020-q2-update\\arm-none-eabi\\include\\stdint.h" 2 3 4
# 1 "c:\\program files (x86)\\gnu arm embedded toolchain\\9 2020-q2-update\\arm-none-eabi\\include\\sys\\_intsup.h" 1 3 4
# 35 "c:\\program files (x86)\\gnu arm embedded toolchain\\9 2020-q2-update\\arm-none-eabi\\include\\sys\\_intsup.h" 3 4
       
       
       
       
       
       
       
       
# 190 "c:\\program files (x86)\\gnu arm embedded toolchain\\9 2020-q2-update\\arm-none-eabi\\include\\sys\\_intsup.h" 3 4
       
       
       
       
       
       
       
       
# 14 "c:\\program files (x86)\\gnu arm embedded toolchain\\9 2020-q2-update\\arm-none-eabi\\include\\stdint.h" 2 3 4
# 1 "c:\\program files (x86)\\gnu arm embedded toolchain\\9 2020-q2-update\\arm-none-eabi\\include\\sys\\_stdint.h" 1 3 4
# 20 "c:\\program files (x86)\\gnu arm embedded toolchain\\9 2020-q2-update\\arm-none-eabi\\include\\sys\\_stdint.h" 3 4
typedef __int8_t int8_t ;



typedef __uint8_t uint8_t ;







typedef __int16_t int16_t ;



typedef __uint16_t uint16_t ;







typedef __int32_t int32_t ;



typedef __uint32_t uint32_t ;







typedef __int64_t int64_t ;



typedef __uint64_t uint64_t ;






typedef __intmax_t intmax_t;




typedef __uintmax_t uintmax_t;




typedef __intptr_t intptr_t;




typedef __uintptr_t uintptr_t;
# 15 "c:\\program files (x86)\\gnu arm embedded toolchain\\9 2020-q2-update\\arm-none-eabi\\include\\stdint.h" 2 3 4






typedef __int_least8_t int_least8_t;
typedef __uint_least8_t uint_least8_t;




typedef __int_least16_t int_least16_t;
typedef __uint_least16_t uint_least16_t;




typedef __int_least32_t int_least32_t;
typedef __uint_least32_t uint_least32_t;




typedef __int_least64_t int_least64_t;
typedef __uint_least64_t uint_least64_t;
# 51 "c:\\program files (x86)\\gnu arm embedded toolchain\\9 2020-q2-update\\arm-none-eabi\\include\\stdint.h" 3 4
  typedef int int_fast8_t;
  typedef unsigned int uint_fast8_t;
# 61 "c:\\program files (x86)\\gnu arm embedded toolchain\\9 2020-q2-update\\arm-none-eabi\\include\\stdint.h" 3 4
  typedef int int_fast16_t;
  typedef unsigned int uint_fast16_t;
# 71 "c:\\program files (x86)\\gnu arm embedded toolchain\\9 2020-q2-update\\arm-none-eabi\\include\\stdint.h" 3 4
  typedef int int_fast32_t;
  typedef unsigned int uint_fast32_t;
# 81 "c:\\program files (x86)\\gnu arm embedded toolchain\\9 2020-q2-update\\arm-none-eabi\\include\\stdint.h" 3 4
  typedef long long int int_fast64_t;
  typedef long long unsigned int uint_fast64_t;
# 10 "c:\\program files (x86)\\gnu arm embedded toolchain\\9 2020-q2-update\\lib\\gcc\\arm-none-eabi\\9.3.1\\include\\stdint.h" 2 3 4
# 35 "Drivers/CMSIS/Include/core_cm3.h" 2
# 63 "Drivers/CMSIS/Include/core_cm3.h"
# 1 "Drivers/CMSIS/Include/cmsis_version.h" 1
# 64 "Drivers/CMSIS/Include/core_cm3.h" 2
# 115 "Drivers/CMSIS/Include/core_cm3.h"
# 1 "Drivers/CMSIS/Include/cmsis_compiler.h" 1
# 48 "Drivers/CMSIS/Include/cmsis_compiler.h"
# 1 "Drivers/CMSIS/Include/cmsis_gcc.h" 1
# 29 "Drivers/CMSIS/Include/cmsis_gcc.h"
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wsign-conversion"
#pragma GCC diagnostic ignored "-Wconversion"
#pragma GCC diagnostic ignored "-Wunused-parameter"
# 71 "Drivers/CMSIS/Include/cmsis_gcc.h"
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wpacked"
#pragma GCC diagnostic ignored "-Wattributes"
  
# 74 "Drivers/CMSIS/Include/cmsis_gcc.h"
 struct __attribute__((packed)) T_UINT32 { uint32_t v; };
#pragma GCC diagnostic pop



#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wpacked"
#pragma GCC diagnostic ignored "-Wattributes"
  struct __attribute__((packed, aligned(1))) T_UINT16_WRITE { uint16_t v; };
#pragma GCC diagnostic pop



#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wpacked"
#pragma GCC diagnostic ignored "-Wattributes"
  struct __attribute__((packed, aligned(1))) T_UINT16_READ { uint16_t v; };
#pragma GCC diagnostic pop



#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wpacked"
#pragma GCC diagnostic ignored "-Wattributes"
  struct __attribute__((packed, aligned(1))) T_UINT32_WRITE { uint32_t v; };
#pragma GCC diagnostic pop



#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wpacked"
#pragma GCC diagnostic ignored "-Wattributes"
  struct __attribute__((packed, aligned(1))) T_UINT32_READ { uint32_t v; };
#pragma GCC diagnostic pop
# 129 "Drivers/CMSIS/Include/cmsis_gcc.h"
__attribute__((always_inline)) static inline void __enable_irq(void)
{
  __asm volatile ("cpsie i" : : : "memory");
}







__attribute__((always_inline)) static inline void __disable_irq(void)
{
  __asm volatile ("cpsid i" : : : "memory");
}







__attribute__((always_inline)) static inline uint32_t __get_CONTROL(void)
{
  uint32_t result;

  __asm volatile ("MRS %0, control" : "=r" (result) );
  return(result);
}
# 181 "Drivers/CMSIS/Include/cmsis_gcc.h"
__attribute__((always_inline)) static inline void __set_CONTROL(uint32_t control)
{
  __asm volatile ("MSR control, %0" : : "r" (control) : "memory");
}
# 205 "Drivers/CMSIS/Include/cmsis_gcc.h"
__attribute__((always_inline)) static inline uint32_t __get_IPSR(void)
{
  uint32_t result;

  __asm volatile ("MRS %0, ipsr" : "=r" (result) );
  return(result);
}







__attribute__((always_inline)) static inline uint32_t __get_APSR(void)
{
  uint32_t result;

  __asm volatile ("MRS %0, apsr" : "=r" (result) );
  return(result);
}







__attribute__((always_inline)) static inline uint32_t __get_xPSR(void)
{
  uint32_t result;

  __asm volatile ("MRS %0, xpsr" : "=r" (result) );
  return(result);
}







__attribute__((always_inline)) static inline uint32_t __get_PSP(void)
{
  uint32_t result;

  __asm volatile ("MRS %0, psp" : "=r" (result) );
  return(result);
}
# 277 "Drivers/CMSIS/Include/cmsis_gcc.h"
__attribute__((always_inline)) static inline void __set_PSP(uint32_t topOfProcStack)
{
  __asm volatile ("MSR psp, %0" : : "r" (topOfProcStack) : );
}
# 301 "Drivers/CMSIS/Include/cmsis_gcc.h"
__attribute__((always_inline)) static inline uint32_t __get_MSP(void)
{
  uint32_t result;

  __asm volatile ("MRS %0, msp" : "=r" (result) );
  return(result);
}
# 331 "Drivers/CMSIS/Include/cmsis_gcc.h"
__attribute__((always_inline)) static inline void __set_MSP(uint32_t topOfMainStack)
{
  __asm volatile ("MSR msp, %0" : : "r" (topOfMainStack) : );
}
# 382 "Drivers/CMSIS/Include/cmsis_gcc.h"
__attribute__((always_inline)) static inline uint32_t __get_PRIMASK(void)
{
  uint32_t result;

  __asm volatile ("MRS %0, primask" : "=r" (result) :: "memory");
  return(result);
}
# 412 "Drivers/CMSIS/Include/cmsis_gcc.h"
__attribute__((always_inline)) static inline void __set_PRIMASK(uint32_t priMask)
{
  __asm volatile ("MSR primask, %0" : : "r" (priMask) : "memory");
}
# 766 "Drivers/CMSIS/Include/cmsis_gcc.h"
__attribute__((always_inline)) static inline uint32_t __get_FPSCR(void)
{
# 782 "Drivers/CMSIS/Include/cmsis_gcc.h"
  return(0U);

}







__attribute__((always_inline)) static inline void __set_FPSCR(uint32_t fpscr)
{
# 805 "Drivers/CMSIS/Include/cmsis_gcc.h"
  (void)fpscr;

}
# 866 "Drivers/CMSIS/Include/cmsis_gcc.h"
__attribute__((always_inline)) static inline void __ISB(void)
{
  __asm volatile ("isb 0xF":::"memory");
}







__attribute__((always_inline)) static inline void __DSB(void)
{
  __asm volatile ("dsb 0xF":::"memory");
}







__attribute__((always_inline)) static inline void __DMB(void)
{
  __asm volatile ("dmb 0xF":::"memory");
}
# 900 "Drivers/CMSIS/Include/cmsis_gcc.h"
__attribute__((always_inline)) static inline uint32_t __REV(uint32_t value)
{

  return __builtin_bswap32(value);






}
# 919 "Drivers/CMSIS/Include/cmsis_gcc.h"
__attribute__((always_inline)) static inline uint32_t __REV16(uint32_t value)
{
  uint32_t result;

  __asm volatile ("rev16 %0, %1" : "=r" (result) : "r" (value) );
  return result;
}
# 934 "Drivers/CMSIS/Include/cmsis_gcc.h"
__attribute__((always_inline)) static inline int16_t __REVSH(int16_t value)
{

  return (int16_t)__builtin_bswap16(value);






}
# 954 "Drivers/CMSIS/Include/cmsis_gcc.h"
__attribute__((always_inline)) static inline uint32_t __ROR(uint32_t op1, uint32_t op2)
{
  op2 %= 32U;
  if (op2 == 0U)
  {
    return op1;
  }
  return (op1 >> op2) | (op1 << (32U - op2));
}
# 981 "Drivers/CMSIS/Include/cmsis_gcc.h"
__attribute__((always_inline)) static inline uint32_t __RBIT(uint32_t value)
{
  uint32_t result;






  uint32_t s = (4U * 8U) - 1U;

  result = value;
  for (value >>= 1U; value != 0U; value >>= 1U)
  {
    result <<= 1U;
    result |= value & 1U;
    s--;
  }
  result <<= s;

  return result;
}
# 1299 "Drivers/CMSIS/Include/cmsis_gcc.h"
__attribute__((always_inline)) static inline int32_t __SSAT(int32_t val, uint32_t sat)
{
  if ((sat >= 1U) && (sat <= 32U))
  {
    const int32_t max = (int32_t)((1U << (sat - 1U)) - 1U);
    const int32_t min = -1 - max ;
    if (val > max)
    {
      return max;
    }
    else if (val < min)
    {
      return min;
    }
  }
  return val;
}
# 1324 "Drivers/CMSIS/Include/cmsis_gcc.h"
__attribute__((always_inline)) static inline uint32_t __USAT(int32_t val, uint32_t sat)
{
  if (sat <= 31U)
  {
    const uint32_t max = ((1U << sat) - 1U);
    if (val > (int32_t)max)
    {
      return max;
    }
    else if (val < 0)
    {
      return 0U;
    }
  }
  return (uint32_t)val;
}
# 2083 "Drivers/CMSIS/Include/cmsis_gcc.h"
#pragma GCC diagnostic pop
# 49 "Drivers/CMSIS/Include/cmsis_compiler.h" 2
# 116 "Drivers/CMSIS/Include/core_cm3.h" 2
# 206 "Drivers/CMSIS/Include/core_cm3.h"
typedef union
{
  struct
  {
    uint32_t _reserved0:27;
    uint32_t Q:1;
    uint32_t V:1;
    uint32_t C:1;
    uint32_t Z:1;
    uint32_t N:1;
  } b;
  uint32_t w;
} APSR_Type;
# 240 "Drivers/CMSIS/Include/core_cm3.h"
typedef union
{
  struct
  {
    uint32_t ISR:9;
    uint32_t _reserved0:23;
  } b;
  uint32_t w;
} IPSR_Type;
# 258 "Drivers/CMSIS/Include/core_cm3.h"
typedef union
{
  struct
  {
    uint32_t ISR:9;
    uint32_t _reserved0:1;
    uint32_t ICI_IT_1:6;
    uint32_t _reserved1:8;
    uint32_t T:1;
    uint32_t ICI_IT_2:2;
    uint32_t Q:1;
    uint32_t V:1;
    uint32_t C:1;
    uint32_t Z:1;
    uint32_t N:1;
  } b;
  uint32_t w;
} xPSR_Type;
# 309 "Drivers/CMSIS/Include/core_cm3.h"
typedef union
{
  struct
  {
    uint32_t nPRIV:1;
    uint32_t SPSEL:1;
    uint32_t _reserved1:30;
  } b;
  uint32_t w;
} CONTROL_Type;
# 340 "Drivers/CMSIS/Include/core_cm3.h"
typedef struct
{
  volatile uint32_t ISER[8U];
        uint32_t RESERVED0[24U];
  volatile uint32_t ICER[8U];
        uint32_t RSERVED1[24U];
  volatile uint32_t ISPR[8U];
        uint32_t RESERVED2[24U];
  volatile uint32_t ICPR[8U];
        uint32_t RESERVED3[24U];
  volatile uint32_t IABR[8U];
        uint32_t RESERVED4[56U];
  volatile uint8_t IP[240U];
        uint32_t RESERVED5[644U];
  volatile uint32_t STIR;
} NVIC_Type;
# 374 "Drivers/CMSIS/Include/core_cm3.h"
typedef struct
{
  volatile const uint32_t CPUID;
  volatile uint32_t ICSR;
  volatile uint32_t VTOR;
  volatile uint32_t AIRCR;
  volatile uint32_t SCR;
  volatile uint32_t CCR;
  volatile uint8_t SHP[12U];
  volatile uint32_t SHCSR;
  volatile uint32_t CFSR;
  volatile uint32_t HFSR;
  volatile uint32_t DFSR;
  volatile uint32_t MMFAR;
  volatile uint32_t BFAR;
  volatile uint32_t AFSR;
  volatile const uint32_t PFR[2U];
  volatile const uint32_t DFR;
  volatile const uint32_t ADR;
  volatile const uint32_t MMFR[4U];
  volatile const uint32_t ISAR[5U];
        uint32_t RESERVED0[5U];
  volatile uint32_t CPACR;
} SCB_Type;
# 655 "Drivers/CMSIS/Include/core_cm3.h"
typedef struct
{
        uint32_t RESERVED0[1U];
  volatile const uint32_t ICTR;

  volatile uint32_t ACTLR;



} SCnSCB_Type;
# 694 "Drivers/CMSIS/Include/core_cm3.h"
typedef struct
{
  volatile uint32_t CTRL;
  volatile uint32_t LOAD;
  volatile uint32_t VAL;
  volatile const uint32_t CALIB;
} SysTick_Type;
# 746 "Drivers/CMSIS/Include/core_cm3.h"
typedef struct
{
  volatile union
  {
    volatile uint8_t u8;
    volatile uint16_t u16;
    volatile uint32_t u32;
  } PORT [32U];
        uint32_t RESERVED0[864U];
  volatile uint32_t TER;
        uint32_t RESERVED1[15U];
  volatile uint32_t TPR;
        uint32_t RESERVED2[15U];
  volatile uint32_t TCR;
        uint32_t RESERVED3[29U];
  volatile uint32_t IWR;
  volatile const uint32_t IRR;
  volatile uint32_t IMCR;
        uint32_t RESERVED4[43U];
  volatile uint32_t LAR;
  volatile const uint32_t LSR;
        uint32_t RESERVED5[6U];
  volatile const uint32_t PID4;
  volatile const uint32_t PID5;
  volatile const uint32_t PID6;
  volatile const uint32_t PID7;
  volatile const uint32_t PID0;
  volatile const uint32_t PID1;
  volatile const uint32_t PID2;
  volatile const uint32_t PID3;
  volatile const uint32_t CID0;
  volatile const uint32_t CID1;
  volatile const uint32_t CID2;
  volatile const uint32_t CID3;
} ITM_Type;
# 849 "Drivers/CMSIS/Include/core_cm3.h"
typedef struct
{
  volatile uint32_t CTRL;
  volatile uint32_t CYCCNT;
  volatile uint32_t CPICNT;
  volatile uint32_t EXCCNT;
  volatile uint32_t SLEEPCNT;
  volatile uint32_t LSUCNT;
  volatile uint32_t FOLDCNT;
  volatile const uint32_t PCSR;
  volatile uint32_t COMP0;
  volatile uint32_t MASK0;
  volatile uint32_t FUNCTION0;
        uint32_t RESERVED0[1U];
  volatile uint32_t COMP1;
  volatile uint32_t MASK1;
  volatile uint32_t FUNCTION1;
        uint32_t RESERVED1[1U];
  volatile uint32_t COMP2;
  volatile uint32_t MASK2;
  volatile uint32_t FUNCTION2;
        uint32_t RESERVED2[1U];
  volatile uint32_t COMP3;
  volatile uint32_t MASK3;
  volatile uint32_t FUNCTION3;
} DWT_Type;
# 996 "Drivers/CMSIS/Include/core_cm3.h"
typedef struct
{
  volatile const uint32_t SSPSR;
  volatile uint32_t CSPSR;
        uint32_t RESERVED0[2U];
  volatile uint32_t ACPR;
        uint32_t RESERVED1[55U];
  volatile uint32_t SPPR;
        uint32_t RESERVED2[131U];
  volatile const uint32_t FFSR;
  volatile uint32_t FFCR;
  volatile const uint32_t FSCR;
        uint32_t RESERVED3[759U];
  volatile const uint32_t TRIGGER;
  volatile const uint32_t FIFO0;
  volatile const uint32_t ITATBCTR2;
        uint32_t RESERVED4[1U];
  volatile const uint32_t ITATBCTR0;
  volatile const uint32_t FIFO1;
  volatile uint32_t ITCTRL;
        uint32_t RESERVED5[39U];
  volatile uint32_t CLAIMSET;
  volatile uint32_t CLAIMCLR;
        uint32_t RESERVED7[8U];
  volatile const uint32_t DEVID;
  volatile const uint32_t DEVTYPE;
} TPI_Type;
# 1254 "Drivers/CMSIS/Include/core_cm3.h"
typedef struct
{
  volatile uint32_t DHCSR;
  volatile uint32_t DCRSR;
  volatile uint32_t DCRDR;
  volatile uint32_t DEMCR;
} CoreDebug_Type;
# 1480 "Drivers/CMSIS/Include/core_cm3.h"
static inline void __NVIC_SetPriorityGrouping(uint32_t PriorityGroup)
{
  uint32_t reg_value;
  uint32_t PriorityGroupTmp = (PriorityGroup & (uint32_t)0x07UL);

  reg_value = ((SCB_Type *) ((0xE000E000UL) + 0x0D00UL) )->AIRCR;
  reg_value &= ~((uint32_t)((0xFFFFUL << 16U) | (7UL << 8U)));
  reg_value = (reg_value |
                ((uint32_t)0x5FAUL << 16U) |
                (PriorityGroupTmp << 8U) );
  ((SCB_Type *) ((0xE000E000UL) + 0x0D00UL) )->AIRCR = reg_value;
}







static inline uint32_t __NVIC_GetPriorityGrouping(void)
{
  return ((uint32_t)((((SCB_Type *) ((0xE000E000UL) + 0x0D00UL) )->AIRCR & (7UL << 8U)) >> 8U));
}
# 1511 "Drivers/CMSIS/Include/core_cm3.h"
static inline void __NVIC_EnableIRQ(IRQn_Type IRQn)
{
  if ((int32_t)(IRQn) >= 0)
  {
    ((NVIC_Type *) ((0xE000E000UL) + 0x0100UL) )->ISER[(((uint32_t)IRQn) >> 5UL)] = (uint32_t)(1UL << (((uint32_t)IRQn) & 0x1FUL));
  }
}
# 1528 "Drivers/CMSIS/Include/core_cm3.h"
static inline uint32_t __NVIC_GetEnableIRQ(IRQn_Type IRQn)
{
  if ((int32_t)(IRQn) >= 0)
  {
    return((uint32_t)(((((NVIC_Type *) ((0xE000E000UL) + 0x0100UL) )->ISER[(((uint32_t)IRQn) >> 5UL)] & (1UL << (((uint32_t)IRQn) & 0x1FUL))) != 0UL) ? 1UL : 0UL));
  }
  else
  {
    return(0U);
  }
}
# 1547 "Drivers/CMSIS/Include/core_cm3.h"
static inline void __NVIC_DisableIRQ(IRQn_Type IRQn)
{
  if ((int32_t)(IRQn) >= 0)
  {
    ((NVIC_Type *) ((0xE000E000UL) + 0x0100UL) )->ICER[(((uint32_t)IRQn) >> 5UL)] = (uint32_t)(1UL << (((uint32_t)IRQn) & 0x1FUL));
    __DSB();
    __ISB();
  }
}
# 1566 "Drivers/CMSIS/Include/core_cm3.h"
static inline uint32_t __NVIC_GetPendingIRQ(IRQn_Type IRQn)
{
  if ((int32_t)(IRQn) >= 0)
  {
    return((uint32_t)(((((NVIC_Type *) ((0xE000E000UL) + 0x0100UL) )->ISPR[(((uint32_t)IRQn) >> 5UL)] & (1UL << (((uint32_t)IRQn) & 0x1FUL))) != 0UL) ? 1UL : 0UL));
  }
  else
  {
    return(0U);
  }
}
# 1585 "Drivers/CMSIS/Include/core_cm3.h"
static inline void __NVIC_SetPendingIRQ(IRQn_Type IRQn)
{
  if ((int32_t)(IRQn) >= 0)
  {
    ((NVIC_Type *) ((0xE000E000UL) + 0x0100UL) )->ISPR[(((uint32_t)IRQn) >> 5UL)] = (uint32_t)(1UL << (((uint32_t)IRQn) & 0x1FUL));
  }
}
# 1600 "Drivers/CMSIS/Include/core_cm3.h"
static inline void __NVIC_ClearPendingIRQ(IRQn_Type IRQn)
{
  if ((int32_t)(IRQn) >= 0)
  {
    ((NVIC_Type *) ((0xE000E000UL) + 0x0100UL) )->ICPR[(((uint32_t)IRQn) >> 5UL)] = (uint32_t)(1UL << (((uint32_t)IRQn) & 0x1FUL));
  }
}
# 1617 "Drivers/CMSIS/Include/core_cm3.h"
static inline uint32_t __NVIC_GetActive(IRQn_Type IRQn)
{
  if ((int32_t)(IRQn) >= 0)
  {
    return((uint32_t)(((((NVIC_Type *) ((0xE000E000UL) + 0x0100UL) )->IABR[(((uint32_t)IRQn) >> 5UL)] & (1UL << (((uint32_t)IRQn) & 0x1FUL))) != 0UL) ? 1UL : 0UL));
  }
  else
  {
    return(0U);
  }
}
# 1639 "Drivers/CMSIS/Include/core_cm3.h"
static inline void __NVIC_SetPriority(IRQn_Type IRQn, uint32_t priority)
{
  if ((int32_t)(IRQn) >= 0)
  {
    ((NVIC_Type *) ((0xE000E000UL) + 0x0100UL) )->IP[((uint32_t)IRQn)] = (uint8_t)((priority << (8U - 4U)) & (uint32_t)0xFFUL);
  }
  else
  {
    ((SCB_Type *) ((0xE000E000UL) + 0x0D00UL) )->SHP[(((uint32_t)IRQn) & 0xFUL)-4UL] = (uint8_t)((priority << (8U - 4U)) & (uint32_t)0xFFUL);
  }
}
# 1661 "Drivers/CMSIS/Include/core_cm3.h"
static inline uint32_t __NVIC_GetPriority(IRQn_Type IRQn)
{

  if ((int32_t)(IRQn) >= 0)
  {
    return(((uint32_t)((NVIC_Type *) ((0xE000E000UL) + 0x0100UL) )->IP[((uint32_t)IRQn)] >> (8U - 4U)));
  }
  else
  {
    return(((uint32_t)((SCB_Type *) ((0xE000E000UL) + 0x0D00UL) )->SHP[(((uint32_t)IRQn) & 0xFUL)-4UL] >> (8U - 4U)));
  }
}
# 1686 "Drivers/CMSIS/Include/core_cm3.h"
static inline uint32_t NVIC_EncodePriority (uint32_t PriorityGroup, uint32_t PreemptPriority, uint32_t SubPriority)
{
  uint32_t PriorityGroupTmp = (PriorityGroup & (uint32_t)0x07UL);
  uint32_t PreemptPriorityBits;
  uint32_t SubPriorityBits;

  PreemptPriorityBits = ((7UL - PriorityGroupTmp) > (uint32_t)(4U)) ? (uint32_t)(4U) : (uint32_t)(7UL - PriorityGroupTmp);
  SubPriorityBits = ((PriorityGroupTmp + (uint32_t)(4U)) < (uint32_t)7UL) ? (uint32_t)0UL : (uint32_t)((PriorityGroupTmp - 7UL) + (uint32_t)(4U));

  return (
           ((PreemptPriority & (uint32_t)((1UL << (PreemptPriorityBits)) - 1UL)) << SubPriorityBits) |
           ((SubPriority & (uint32_t)((1UL << (SubPriorityBits )) - 1UL)))
         );
}
# 1713 "Drivers/CMSIS/Include/core_cm3.h"
static inline void NVIC_DecodePriority (uint32_t Priority, uint32_t PriorityGroup, uint32_t* const pPreemptPriority, uint32_t* const pSubPriority)
{
  uint32_t PriorityGroupTmp = (PriorityGroup & (uint32_t)0x07UL);
  uint32_t PreemptPriorityBits;
  uint32_t SubPriorityBits;

  PreemptPriorityBits = ((7UL - PriorityGroupTmp) > (uint32_t)(4U)) ? (uint32_t)(4U) : (uint32_t)(7UL - PriorityGroupTmp);
  SubPriorityBits = ((PriorityGroupTmp + (uint32_t)(4U)) < (uint32_t)7UL) ? (uint32_t)0UL : (uint32_t)((PriorityGroupTmp - 7UL) + (uint32_t)(4U));

  *pPreemptPriority = (Priority >> SubPriorityBits) & (uint32_t)((1UL << (PreemptPriorityBits)) - 1UL);
  *pSubPriority = (Priority ) & (uint32_t)((1UL << (SubPriorityBits )) - 1UL);
}
# 1736 "Drivers/CMSIS/Include/core_cm3.h"
static inline void __NVIC_SetVector(IRQn_Type IRQn, uint32_t vector)
{
  uint32_t *vectors = (uint32_t *)((SCB_Type *) ((0xE000E000UL) + 0x0D00UL) )->VTOR;
  vectors[(int32_t)IRQn + 16] = vector;
}
# 1751 "Drivers/CMSIS/Include/core_cm3.h"
static inline uint32_t __NVIC_GetVector(IRQn_Type IRQn)
{
  uint32_t *vectors = (uint32_t *)((SCB_Type *) ((0xE000E000UL) + 0x0D00UL) )->VTOR;
  return vectors[(int32_t)IRQn + 16];
}






__attribute__((__noreturn__)) static inline void __NVIC_SystemReset(void)
{
  __DSB();

  ((SCB_Type *) ((0xE000E000UL) + 0x0D00UL) )->AIRCR = (uint32_t)((0x5FAUL << 16U) |
                           (((SCB_Type *) ((0xE000E000UL) + 0x0D00UL) )->AIRCR & (7UL << 8U)) |
                            (1UL << 2U) );
  __DSB();

  for(;;)
  {
    __asm volatile ("nop");
  }
}
# 1803 "Drivers/CMSIS/Include/core_cm3.h"
static inline uint32_t SCB_GetFPUType(void)
{
    return 0U;
}
# 1834 "Drivers/CMSIS/Include/core_cm3.h"
static inline uint32_t SysTick_Config(uint32_t ticks)
{
  if ((ticks - 1UL) > (0xFFFFFFUL ))
  {
    return (1UL);
  }

  ((SysTick_Type *) ((0xE000E000UL) + 0x0010UL) )->LOAD = (uint32_t)(ticks - 1UL);
  __NVIC_SetPriority (SysTick_IRQn, (1UL << 4U) - 1UL);
  ((SysTick_Type *) ((0xE000E000UL) + 0x0010UL) )->VAL = 0UL;
  ((SysTick_Type *) ((0xE000E000UL) + 0x0010UL) )->CTRL = (1UL << 2U) |
                   (1UL << 1U) |
                   (1UL );
  return (0UL);
}
# 1864 "Drivers/CMSIS/Include/core_cm3.h"
extern volatile int32_t ITM_RxBuffer;
# 1876 "Drivers/CMSIS/Include/core_cm3.h"
static inline uint32_t ITM_SendChar (uint32_t ch)
{
  if (((((ITM_Type *) (0xE0000000UL) )->TCR & (1UL )) != 0UL) &&
      ((((ITM_Type *) (0xE0000000UL) )->TER & 1UL ) != 0UL) )
  {
    while (((ITM_Type *) (0xE0000000UL) )->PORT[0U].u32 == 0UL)
    {
      __asm volatile ("nop");
    }
    ((ITM_Type *) (0xE0000000UL) )->PORT[0U].u8 = (uint8_t)ch;
  }
  return (ch);
}
# 1897 "Drivers/CMSIS/Include/core_cm3.h"
static inline int32_t ITM_ReceiveChar (void)
{
  int32_t ch = -1;

  if (ITM_RxBuffer != ((int32_t)0x5AA55AA5U))
  {
    ch = ITM_RxBuffer;
    ITM_RxBuffer = ((int32_t)0x5AA55AA5U);
  }

  return (ch);
}
# 1917 "Drivers/CMSIS/Include/core_cm3.h"
static inline int32_t ITM_CheckChar (void)
{

  if (ITM_RxBuffer == ((int32_t)0x5AA55AA5U))
  {
    return (0);
  }
  else
  {
    return (1);
  }
}
# 133 "Drivers/CMSIS/Device/ST/STM32F1xx/Include/stm32f103xb.h" 2
# 1 "Drivers/CMSIS/Device/ST/STM32F1xx/Include/system_stm32f1xx.h" 1
# 51 "Drivers/CMSIS/Device/ST/STM32F1xx/Include/system_stm32f1xx.h"
extern uint32_t SystemCoreClock;
extern const uint8_t AHBPrescTable[16U];
extern const uint8_t APBPrescTable[8U];
# 79 "Drivers/CMSIS/Device/ST/STM32F1xx/Include/system_stm32f1xx.h"
extern void SystemInit(void);
extern void SystemCoreClockUpdate(void);
# 134 "Drivers/CMSIS/Device/ST/STM32F1xx/Include/stm32f103xb.h" 2
# 144 "Drivers/CMSIS/Device/ST/STM32F1xx/Include/stm32f103xb.h"
typedef struct
{
  volatile uint32_t SR;
  volatile uint32_t CR1;
  volatile uint32_t CR2;
  volatile uint32_t SMPR1;
  volatile uint32_t SMPR2;
  volatile uint32_t JOFR1;
  volatile uint32_t JOFR2;
  volatile uint32_t JOFR3;
  volatile uint32_t JOFR4;
  volatile uint32_t HTR;
  volatile uint32_t LTR;
  volatile uint32_t SQR1;
  volatile uint32_t SQR2;
  volatile uint32_t SQR3;
  volatile uint32_t JSQR;
  volatile uint32_t JDR1;
  volatile uint32_t JDR2;
  volatile uint32_t JDR3;
  volatile uint32_t JDR4;
  volatile uint32_t DR;
} ADC_TypeDef;

typedef struct
{
  volatile uint32_t SR;
  volatile uint32_t CR1;
  volatile uint32_t CR2;
  uint32_t RESERVED[16];
  volatile uint32_t DR;
} ADC_Common_TypeDef;





typedef struct
{
  uint32_t RESERVED0;
  volatile uint32_t DR1;
  volatile uint32_t DR2;
  volatile uint32_t DR3;
  volatile uint32_t DR4;
  volatile uint32_t DR5;
  volatile uint32_t DR6;
  volatile uint32_t DR7;
  volatile uint32_t DR8;
  volatile uint32_t DR9;
  volatile uint32_t DR10;
  volatile uint32_t RTCCR;
  volatile uint32_t CR;
  volatile uint32_t CSR;
} BKP_TypeDef;





typedef struct
{
  volatile uint32_t TIR;
  volatile uint32_t TDTR;
  volatile uint32_t TDLR;
  volatile uint32_t TDHR;
} CAN_TxMailBox_TypeDef;





typedef struct
{
  volatile uint32_t RIR;
  volatile uint32_t RDTR;
  volatile uint32_t RDLR;
  volatile uint32_t RDHR;
} CAN_FIFOMailBox_TypeDef;





typedef struct
{
  volatile uint32_t FR1;
  volatile uint32_t FR2;
} CAN_FilterRegister_TypeDef;





typedef struct
{
  volatile uint32_t MCR;
  volatile uint32_t MSR;
  volatile uint32_t TSR;
  volatile uint32_t RF0R;
  volatile uint32_t RF1R;
  volatile uint32_t IER;
  volatile uint32_t ESR;
  volatile uint32_t BTR;
  uint32_t RESERVED0[88];
  CAN_TxMailBox_TypeDef sTxMailBox[3];
  CAN_FIFOMailBox_TypeDef sFIFOMailBox[2];
  uint32_t RESERVED1[12];
  volatile uint32_t FMR;
  volatile uint32_t FM1R;
  uint32_t RESERVED2;
  volatile uint32_t FS1R;
  uint32_t RESERVED3;
  volatile uint32_t FFA1R;
  uint32_t RESERVED4;
  volatile uint32_t FA1R;
  uint32_t RESERVED5[8];
  CAN_FilterRegister_TypeDef sFilterRegister[14];
} CAN_TypeDef;





typedef struct
{
  volatile uint32_t DR;
  volatile uint8_t IDR;
  uint8_t RESERVED0;
  uint16_t RESERVED1;
  volatile uint32_t CR;
} CRC_TypeDef;






typedef struct
{
  volatile uint32_t IDCODE;
  volatile uint32_t CR;
}DBGMCU_TypeDef;





typedef struct
{
  volatile uint32_t CCR;
  volatile uint32_t CNDTR;
  volatile uint32_t CPAR;
  volatile uint32_t CMAR;
} DMA_Channel_TypeDef;

typedef struct
{
  volatile uint32_t ISR;
  volatile uint32_t IFCR;
} DMA_TypeDef;







typedef struct
{
  volatile uint32_t IMR;
  volatile uint32_t EMR;
  volatile uint32_t RTSR;
  volatile uint32_t FTSR;
  volatile uint32_t SWIER;
  volatile uint32_t PR;
} EXTI_TypeDef;





typedef struct
{
  volatile uint32_t ACR;
  volatile uint32_t KEYR;
  volatile uint32_t OPTKEYR;
  volatile uint32_t SR;
  volatile uint32_t CR;
  volatile uint32_t AR;
  volatile uint32_t RESERVED;
  volatile uint32_t OBR;
  volatile uint32_t WRPR;
} FLASH_TypeDef;





typedef struct
{
  volatile uint16_t RDP;
  volatile uint16_t USER;
  volatile uint16_t Data0;
  volatile uint16_t Data1;
  volatile uint16_t WRP0;
  volatile uint16_t WRP1;
  volatile uint16_t WRP2;
  volatile uint16_t WRP3;
} OB_TypeDef;





typedef struct
{
  volatile uint32_t CRL;
  volatile uint32_t CRH;
  volatile uint32_t IDR;
  volatile uint32_t ODR;
  volatile uint32_t BSRR;
  volatile uint32_t BRR;
  volatile uint32_t LCKR;
} GPIO_TypeDef;





typedef struct
{
  volatile uint32_t EVCR;
  volatile uint32_t MAPR;
  volatile uint32_t EXTICR[4];
  uint32_t RESERVED0;
  volatile uint32_t MAPR2;
} AFIO_TypeDef;




typedef struct
{
  volatile uint32_t CR1;
  volatile uint32_t CR2;
  volatile uint32_t OAR1;
  volatile uint32_t OAR2;
  volatile uint32_t DR;
  volatile uint32_t SR1;
  volatile uint32_t SR2;
  volatile uint32_t CCR;
  volatile uint32_t TRISE;
} I2C_TypeDef;





typedef struct
{
  volatile uint32_t KR;
  volatile uint32_t PR;
  volatile uint32_t RLR;
  volatile uint32_t SR;
} IWDG_TypeDef;





typedef struct
{
  volatile uint32_t CR;
  volatile uint32_t CSR;
} PWR_TypeDef;





typedef struct
{
  volatile uint32_t CR;
  volatile uint32_t CFGR;
  volatile uint32_t CIR;
  volatile uint32_t APB2RSTR;
  volatile uint32_t APB1RSTR;
  volatile uint32_t AHBENR;
  volatile uint32_t APB2ENR;
  volatile uint32_t APB1ENR;
  volatile uint32_t BDCR;
  volatile uint32_t CSR;


} RCC_TypeDef;





typedef struct
{
  volatile uint32_t CRH;
  volatile uint32_t CRL;
  volatile uint32_t PRLH;
  volatile uint32_t PRLL;
  volatile uint32_t DIVH;
  volatile uint32_t DIVL;
  volatile uint32_t CNTH;
  volatile uint32_t CNTL;
  volatile uint32_t ALRH;
  volatile uint32_t ALRL;
} RTC_TypeDef;





typedef struct
{
  volatile uint32_t CR1;
  volatile uint32_t CR2;
  volatile uint32_t SR;
  volatile uint32_t DR;
  volatile uint32_t CRCPR;
  volatile uint32_t RXCRCR;
  volatile uint32_t TXCRCR;
  volatile uint32_t I2SCFGR;
} SPI_TypeDef;




typedef struct
{
  volatile uint32_t CR1;
  volatile uint32_t CR2;
  volatile uint32_t SMCR;
  volatile uint32_t DIER;
  volatile uint32_t SR;
  volatile uint32_t EGR;
  volatile uint32_t CCMR1;
  volatile uint32_t CCMR2;
  volatile uint32_t CCER;
  volatile uint32_t CNT;
  volatile uint32_t PSC;
  volatile uint32_t ARR;
  volatile uint32_t RCR;
  volatile uint32_t CCR1;
  volatile uint32_t CCR2;
  volatile uint32_t CCR3;
  volatile uint32_t CCR4;
  volatile uint32_t BDTR;
  volatile uint32_t DCR;
  volatile uint32_t DMAR;
  volatile uint32_t OR;
}TIM_TypeDef;






typedef struct
{
  volatile uint32_t SR;
  volatile uint32_t DR;
  volatile uint32_t BRR;
  volatile uint32_t CR1;
  volatile uint32_t CR2;
  volatile uint32_t CR3;
  volatile uint32_t GTPR;
} USART_TypeDef;





typedef struct
{
  volatile uint16_t EP0R;
  volatile uint16_t RESERVED0;
  volatile uint16_t EP1R;
  volatile uint16_t RESERVED1;
  volatile uint16_t EP2R;
  volatile uint16_t RESERVED2;
  volatile uint16_t EP3R;
  volatile uint16_t RESERVED3;
  volatile uint16_t EP4R;
  volatile uint16_t RESERVED4;
  volatile uint16_t EP5R;
  volatile uint16_t RESERVED5;
  volatile uint16_t EP6R;
  volatile uint16_t RESERVED6;
  volatile uint16_t EP7R;
  volatile uint16_t RESERVED7[17];
  volatile uint16_t CNTR;
  volatile uint16_t RESERVED8;
  volatile uint16_t ISTR;
  volatile uint16_t RESERVED9;
  volatile uint16_t FNR;
  volatile uint16_t RESERVEDA;
  volatile uint16_t DADDR;
  volatile uint16_t RESERVEDB;
  volatile uint16_t BTABLE;
  volatile uint16_t RESERVEDC;
} USB_TypeDef;






typedef struct
{
  volatile uint32_t CR;
  volatile uint32_t CFR;
  volatile uint32_t SR;
} WWDG_TypeDef;
# 132 "Drivers/CMSIS/Device/ST/STM32F1xx/Include/stm32f1xx.h" 2
# 151 "Drivers/CMSIS/Device/ST/STM32F1xx/Include/stm32f1xx.h"
typedef enum
{
  RESET = 0,
  SET = !RESET
} FlagStatus, ITStatus;

typedef enum
{
  DISABLE = 0,
  ENABLE = !DISABLE
} FunctionalState;


typedef enum
{
  SUCCESS = 0U,
  ERROR = !SUCCESS
} ErrorStatus;
# 31 "Drivers/STM32F1xx_HAL_Driver/Inc/stm32f1xx_hal_def.h" 2



# 1 "c:\\program files (x86)\\gnu arm embedded toolchain\\9 2020-q2-update\\lib\\gcc\\arm-none-eabi\\9.3.1\\include\\stddef.h" 1 3 4
# 143 "c:\\program files (x86)\\gnu arm embedded toolchain\\9 2020-q2-update\\lib\\gcc\\arm-none-eabi\\9.3.1\\include\\stddef.h" 3 4

# 143 "c:\\program files (x86)\\gnu arm embedded toolchain\\9 2020-q2-update\\lib\\gcc\\arm-none-eabi\\9.3.1\\include\\stddef.h" 3 4
typedef int ptrdiff_t;
# 209 "c:\\program files (x86)\\gnu arm embedded toolchain\\9 2020-q2-update\\lib\\gcc\\arm-none-eabi\\9.3.1\\include\\stddef.h" 3 4
typedef unsigned int size_t;
# 321 "c:\\program files (x86)\\gnu arm embedded toolchain\\9 2020-q2-update\\lib\\gcc\\arm-none-eabi\\9.3.1\\include\\stddef.h" 3 4
typedef unsigned int wchar_t;
# 415 "c:\\program files (x86)\\gnu arm embedded toolchain\\9 2020-q2-update\\lib\\gcc\\arm-none-eabi\\9.3.1\\include\\stddef.h" 3 4
typedef struct {
  long long __max_align_ll __attribute__((__aligned__(__alignof__(long long))));
  long double __max_align_ld __attribute__((__aligned__(__alignof__(long double))));
# 426 "c:\\program files (x86)\\gnu arm embedded toolchain\\9 2020-q2-update\\lib\\gcc\\arm-none-eabi\\9.3.1\\include\\stddef.h" 3 4
} max_align_t;
# 35 "Drivers/STM32F1xx_HAL_Driver/Inc/stm32f1xx_hal_def.h" 2







# 41 "Drivers/STM32F1xx_HAL_Driver/Inc/stm32f1xx_hal_def.h"
typedef enum
{
  HAL_OK = 0x00U,
  HAL_ERROR = 0x01U,
  HAL_BUSY = 0x02U,
  HAL_TIMEOUT = 0x03U
} HAL_StatusTypeDef;




typedef enum
{
  HAL_UNLOCKED = 0x00U,
  HAL_LOCKED = 0x01U
} HAL_LockTypeDef;
# 30 "Drivers/STM32F1xx_HAL_Driver/Inc/stm32f1xx_hal_rcc.h" 2
# 49 "Drivers/STM32F1xx_HAL_Driver/Inc/stm32f1xx_hal_rcc.h"
typedef struct
{
  uint32_t PLLState;


  uint32_t PLLSource;


  uint32_t PLLMUL;

} RCC_PLLInitTypeDef;




typedef struct
{
  uint32_t ClockType;


  uint32_t SYSCLKSource;


  uint32_t AHBCLKDivider;


  uint32_t APB1CLKDivider;


  uint32_t APB2CLKDivider;

} RCC_ClkInitTypeDef;
# 1144 "Drivers/STM32F1xx_HAL_Driver/Inc/stm32f1xx_hal_rcc.h"
# 1 "Drivers/STM32F1xx_HAL_Driver/Inc/stm32f1xx_hal_rcc_ex.h" 1
# 228 "Drivers/STM32F1xx_HAL_Driver/Inc/stm32f1xx_hal_rcc_ex.h"
typedef struct
{
  uint32_t OscillatorType;







  uint32_t HSEState;


  uint32_t HSEPredivValue;


  uint32_t LSEState;


  uint32_t HSIState;


  uint32_t HSICalibrationValue;


  uint32_t LSIState;


  RCC_PLLInitTypeDef PLL;




} RCC_OscInitTypeDef;
# 283 "Drivers/STM32F1xx_HAL_Driver/Inc/stm32f1xx_hal_rcc_ex.h"
typedef struct
{
  uint32_t PeriphClockSelection;


  uint32_t RTCClockSelection;


  uint32_t AdcClockSelection;
# 312 "Drivers/STM32F1xx_HAL_Driver/Inc/stm32f1xx_hal_rcc_ex.h"
  uint32_t UsbClockSelection;



} RCC_PeriphCLKInitTypeDef;
# 1859 "Drivers/STM32F1xx_HAL_Driver/Inc/stm32f1xx_hal_rcc_ex.h"
HAL_StatusTypeDef HAL_RCCEx_PeriphCLKConfig(RCC_PeriphCLKInitTypeDef *PeriphClkInit);
void HAL_RCCEx_GetPeriphCLKConfig(RCC_PeriphCLKInitTypeDef *PeriphClkInit);
uint32_t HAL_RCCEx_GetPeriphCLKFreq(uint32_t PeriphClk);
# 1145 "Drivers/STM32F1xx_HAL_Driver/Inc/stm32f1xx_hal_rcc.h" 2
# 1156 "Drivers/STM32F1xx_HAL_Driver/Inc/stm32f1xx_hal_rcc.h"
HAL_StatusTypeDef HAL_RCC_DeInit(void);
HAL_StatusTypeDef HAL_RCC_OscConfig(RCC_OscInitTypeDef *RCC_OscInitStruct);
HAL_StatusTypeDef HAL_RCC_ClockConfig(RCC_ClkInitTypeDef *RCC_ClkInitStruct, uint32_t FLatency);
# 1169 "Drivers/STM32F1xx_HAL_Driver/Inc/stm32f1xx_hal_rcc.h"
void HAL_RCC_MCOConfig(uint32_t RCC_MCOx, uint32_t RCC_MCOSource, uint32_t RCC_MCODiv);
void HAL_RCC_EnableCSS(void);
void HAL_RCC_DisableCSS(void);
uint32_t HAL_RCC_GetSysClockFreq(void);
uint32_t HAL_RCC_GetHCLKFreq(void);
uint32_t HAL_RCC_GetPCLK1Freq(void);
uint32_t HAL_RCC_GetPCLK2Freq(void);
void HAL_RCC_GetOscConfig(RCC_OscInitTypeDef *RCC_OscInitStruct);
void HAL_RCC_GetClockConfig(RCC_ClkInitTypeDef *RCC_ClkInitStruct, uint32_t *pFLatency);


void HAL_RCC_NMI_IRQHandler(void);


void HAL_RCC_CSSCallback(void);
# 238 "Inc/stm32f1xx_hal_conf.h" 2



# 1 "Drivers/STM32F1xx_HAL_Driver/Inc/stm32f1xx_hal_gpio.h" 1
# 47 "Drivers/STM32F1xx_HAL_Driver/Inc/stm32f1xx_hal_gpio.h"
typedef struct
{
  uint32_t Pin;


  uint32_t Mode;


  uint32_t Pull;


  uint32_t Speed;

} GPIO_InitTypeDef;




typedef enum
{
  GPIO_PIN_RESET = 0u,
  GPIO_PIN_SET
} GPIO_PinState;
# 213 "Drivers/STM32F1xx_HAL_Driver/Inc/stm32f1xx_hal_gpio.h"
# 1 "Drivers/STM32F1xx_HAL_Driver/Inc/stm32f1xx_hal_gpio_ex.h" 1
# 868 "Drivers/STM32F1xx_HAL_Driver/Inc/stm32f1xx_hal_gpio_ex.h"
void HAL_GPIOEx_ConfigEventout(uint32_t GPIO_PortSource, uint32_t GPIO_PinSource);
void HAL_GPIOEx_EnableEventout(void);
void HAL_GPIOEx_DisableEventout(void);
# 214 "Drivers/STM32F1xx_HAL_Driver/Inc/stm32f1xx_hal_gpio.h" 2
# 224 "Drivers/STM32F1xx_HAL_Driver/Inc/stm32f1xx_hal_gpio.h"
void HAL_GPIO_Init(GPIO_TypeDef *GPIOx, GPIO_InitTypeDef *GPIO_Init);
void HAL_GPIO_DeInit(GPIO_TypeDef *GPIOx, uint32_t GPIO_Pin);
# 234 "Drivers/STM32F1xx_HAL_Driver/Inc/stm32f1xx_hal_gpio.h"
GPIO_PinState HAL_GPIO_ReadPin(GPIO_TypeDef *GPIOx, uint16_t GPIO_Pin);
void HAL_GPIO_WritePin(GPIO_TypeDef *GPIOx, uint16_t GPIO_Pin, GPIO_PinState PinState);
void HAL_GPIO_TogglePin(GPIO_TypeDef *GPIOx, uint16_t GPIO_Pin);
HAL_StatusTypeDef HAL_GPIO_LockPin(GPIO_TypeDef *GPIOx, uint16_t GPIO_Pin);
void HAL_GPIO_EXTI_IRQHandler(uint16_t GPIO_Pin);
void HAL_GPIO_EXTI_Callback(uint16_t GPIO_Pin);
# 242 "Inc/stm32f1xx_hal_conf.h" 2



# 1 "Drivers/STM32F1xx_HAL_Driver/Inc/stm32f1xx_hal_exti.h" 1
# 49 "Drivers/STM32F1xx_HAL_Driver/Inc/stm32f1xx_hal_exti.h"
typedef enum
{
  HAL_EXTI_COMMON_CB_ID = 0x00U
} EXTI_CallbackIDTypeDef;




typedef struct
{
  uint32_t Line;
  void (* PendingCallback)(void);
} EXTI_HandleTypeDef;




typedef struct
{
  uint32_t Line;

  uint32_t Mode;

  uint32_t Trigger;

  uint32_t GPIOSel;


} EXTI_ConfigTypeDef;
# 279 "Drivers/STM32F1xx_HAL_Driver/Inc/stm32f1xx_hal_exti.h"
HAL_StatusTypeDef HAL_EXTI_SetConfigLine(EXTI_HandleTypeDef *hexti, EXTI_ConfigTypeDef *pExtiConfig);
HAL_StatusTypeDef HAL_EXTI_GetConfigLine(EXTI_HandleTypeDef *hexti, EXTI_ConfigTypeDef *pExtiConfig);
HAL_StatusTypeDef HAL_EXTI_ClearConfigLine(EXTI_HandleTypeDef *hexti);
HAL_StatusTypeDef HAL_EXTI_RegisterCallback(EXTI_HandleTypeDef *hexti, EXTI_CallbackIDTypeDef CallbackID, void (*pPendingCbfn)(void));
HAL_StatusTypeDef HAL_EXTI_GetHandle(EXTI_HandleTypeDef *hexti, uint32_t ExtiLine);
# 293 "Drivers/STM32F1xx_HAL_Driver/Inc/stm32f1xx_hal_exti.h"
void HAL_EXTI_IRQHandler(EXTI_HandleTypeDef *hexti);
uint32_t HAL_EXTI_GetPending(EXTI_HandleTypeDef *hexti, uint32_t Edge);
void HAL_EXTI_ClearPending(EXTI_HandleTypeDef *hexti, uint32_t Edge);
void HAL_EXTI_GenerateSWI(EXTI_HandleTypeDef *hexti);
# 246 "Inc/stm32f1xx_hal_conf.h" 2



# 1 "Drivers/STM32F1xx_HAL_Driver/Inc/stm32f1xx_hal_dma.h" 1
# 48 "Drivers/STM32F1xx_HAL_Driver/Inc/stm32f1xx_hal_dma.h"
typedef struct
{
  uint32_t Direction;



  uint32_t PeriphInc;


  uint32_t MemInc;


  uint32_t PeriphDataAlignment;


  uint32_t MemDataAlignment;


  uint32_t Mode;




  uint32_t Priority;

} DMA_InitTypeDef;




typedef enum
{
  HAL_DMA_STATE_RESET = 0x00U,
  HAL_DMA_STATE_READY = 0x01U,
  HAL_DMA_STATE_BUSY = 0x02U,
  HAL_DMA_STATE_TIMEOUT = 0x03U
}HAL_DMA_StateTypeDef;




typedef enum
{
  HAL_DMA_FULL_TRANSFER = 0x00U,
  HAL_DMA_HALF_TRANSFER = 0x01U
}HAL_DMA_LevelCompleteTypeDef;




typedef enum
{
  HAL_DMA_XFER_CPLT_CB_ID = 0x00U,
  HAL_DMA_XFER_HALFCPLT_CB_ID = 0x01U,
  HAL_DMA_XFER_ERROR_CB_ID = 0x02U,
  HAL_DMA_XFER_ABORT_CB_ID = 0x03U,
  HAL_DMA_XFER_ALL_CB_ID = 0x04U

}HAL_DMA_CallbackIDTypeDef;




typedef struct __DMA_HandleTypeDef
{
  DMA_Channel_TypeDef *Instance;

  DMA_InitTypeDef Init;

  HAL_LockTypeDef Lock;

  HAL_DMA_StateTypeDef State;

  void *Parent;

  void (* XferCpltCallback)( struct __DMA_HandleTypeDef * hdma);

  void (* XferHalfCpltCallback)( struct __DMA_HandleTypeDef * hdma);

  void (* XferErrorCallback)( struct __DMA_HandleTypeDef * hdma);

  void (* XferAbortCallback)( struct __DMA_HandleTypeDef * hdma);

  volatile uint32_t ErrorCode;

  DMA_TypeDef *DmaBaseAddress;

  uint32_t ChannelIndex;

} DMA_HandleTypeDef;
# 356 "Drivers/STM32F1xx_HAL_Driver/Inc/stm32f1xx_hal_dma.h"
# 1 "Drivers/STM32F1xx_HAL_Driver/Inc/stm32f1xx_hal_dma_ex.h" 1
# 357 "Drivers/STM32F1xx_HAL_Driver/Inc/stm32f1xx_hal_dma.h" 2
# 367 "Drivers/STM32F1xx_HAL_Driver/Inc/stm32f1xx_hal_dma.h"
HAL_StatusTypeDef HAL_DMA_Init(DMA_HandleTypeDef *hdma);
HAL_StatusTypeDef HAL_DMA_DeInit (DMA_HandleTypeDef *hdma);
# 377 "Drivers/STM32F1xx_HAL_Driver/Inc/stm32f1xx_hal_dma.h"
HAL_StatusTypeDef HAL_DMA_Start (DMA_HandleTypeDef *hdma, uint32_t SrcAddress, uint32_t DstAddress, uint32_t DataLength);
HAL_StatusTypeDef HAL_DMA_Start_IT(DMA_HandleTypeDef *hdma, uint32_t SrcAddress, uint32_t DstAddress, uint32_t DataLength);
HAL_StatusTypeDef HAL_DMA_Abort(DMA_HandleTypeDef *hdma);
HAL_StatusTypeDef HAL_DMA_Abort_IT(DMA_HandleTypeDef *hdma);
HAL_StatusTypeDef HAL_DMA_PollForTransfer(DMA_HandleTypeDef *hdma, uint32_t CompleteLevel, uint32_t Timeout);
void HAL_DMA_IRQHandler(DMA_HandleTypeDef *hdma);
HAL_StatusTypeDef HAL_DMA_RegisterCallback(DMA_HandleTypeDef *hdma, HAL_DMA_CallbackIDTypeDef CallbackID, void (* pCallback)( DMA_HandleTypeDef * _hdma));
HAL_StatusTypeDef HAL_DMA_UnRegisterCallback(DMA_HandleTypeDef *hdma, HAL_DMA_CallbackIDTypeDef CallbackID);
# 394 "Drivers/STM32F1xx_HAL_Driver/Inc/stm32f1xx_hal_dma.h"
HAL_DMA_StateTypeDef HAL_DMA_GetState(DMA_HandleTypeDef *hdma);
uint32_t HAL_DMA_GetError(DMA_HandleTypeDef *hdma);
# 250 "Inc/stm32f1xx_hal_conf.h" 2
# 269 "Inc/stm32f1xx_hal_conf.h"
# 1 "Drivers/STM32F1xx_HAL_Driver/Inc/stm32f1xx_hal_cortex.h" 1
# 262 "Drivers/STM32F1xx_HAL_Driver/Inc/stm32f1xx_hal_cortex.h"
void HAL_NVIC_SetPriorityGrouping(uint32_t PriorityGroup);
void HAL_NVIC_SetPriority(IRQn_Type IRQn, uint32_t PreemptPriority, uint32_t SubPriority);
void HAL_NVIC_EnableIRQ(IRQn_Type IRQn);
void HAL_NVIC_DisableIRQ(IRQn_Type IRQn);
void HAL_NVIC_SystemReset(void);
uint32_t HAL_SYSTICK_Config(uint32_t TicksNumb);
# 276 "Drivers/STM32F1xx_HAL_Driver/Inc/stm32f1xx_hal_cortex.h"
uint32_t HAL_NVIC_GetPriorityGrouping(void);
void HAL_NVIC_GetPriority(IRQn_Type IRQn, uint32_t PriorityGroup, uint32_t* pPreemptPriority, uint32_t* pSubPriority);
uint32_t HAL_NVIC_GetPendingIRQ(IRQn_Type IRQn);
void HAL_NVIC_SetPendingIRQ(IRQn_Type IRQn);
void HAL_NVIC_ClearPendingIRQ(IRQn_Type IRQn);
uint32_t HAL_NVIC_GetActive(IRQn_Type IRQn);
void HAL_SYSTICK_CLKSourceConfig(uint32_t CLKSource);
void HAL_SYSTICK_IRQHandler(void);
void HAL_SYSTICK_Callback(void);
# 270 "Inc/stm32f1xx_hal_conf.h" 2
# 285 "Inc/stm32f1xx_hal_conf.h"
# 1 "Drivers/STM32F1xx_HAL_Driver/Inc/stm32f1xx_hal_flash.h" 1
# 75 "Drivers/STM32F1xx_HAL_Driver/Inc/stm32f1xx_hal_flash.h"
typedef enum
{
  FLASH_PROC_NONE = 0U,
  FLASH_PROC_PAGEERASE = 1U,
  FLASH_PROC_MASSERASE = 2U,
  FLASH_PROC_PROGRAMHALFWORD = 3U,
  FLASH_PROC_PROGRAMWORD = 4U,
  FLASH_PROC_PROGRAMDOUBLEWORD = 5U
} FLASH_ProcedureTypeDef;




typedef struct
{
  volatile FLASH_ProcedureTypeDef ProcedureOnGoing;

  volatile uint32_t DataRemaining;

  volatile uint32_t Address;

  volatile uint64_t Data;

  HAL_LockTypeDef Lock;

  volatile uint32_t ErrorCode;

} FLASH_ProcessTypeDef;
# 248 "Drivers/STM32F1xx_HAL_Driver/Inc/stm32f1xx_hal_flash.h"
# 1 "Drivers/STM32F1xx_HAL_Driver/Inc/stm32f1xx_hal_flash_ex.h" 1
# 170 "Drivers/STM32F1xx_HAL_Driver/Inc/stm32f1xx_hal_flash_ex.h"
typedef struct
{
  uint32_t TypeErase;


  uint32_t Banks;


  uint32_t PageAddress;



  uint32_t NbPages;


} FLASH_EraseInitTypeDef;




typedef struct
{
  uint32_t OptionType;


  uint32_t WRPState;


  uint32_t WRPPage;


  uint32_t Banks;


  uint8_t RDPLevel;
# 213 "Drivers/STM32F1xx_HAL_Driver/Inc/stm32f1xx_hal_flash_ex.h"
  uint8_t USERConfig;





  uint32_t DATAAddress;


  uint8_t DATAData;

} FLASH_OBProgramInitTypeDef;
# 750 "Drivers/STM32F1xx_HAL_Driver/Inc/stm32f1xx_hal_flash_ex.h"
HAL_StatusTypeDef HAL_FLASHEx_Erase(FLASH_EraseInitTypeDef *pEraseInit, uint32_t *PageError);
HAL_StatusTypeDef HAL_FLASHEx_Erase_IT(FLASH_EraseInitTypeDef *pEraseInit);
# 761 "Drivers/STM32F1xx_HAL_Driver/Inc/stm32f1xx_hal_flash_ex.h"
HAL_StatusTypeDef HAL_FLASHEx_OBErase(void);
HAL_StatusTypeDef HAL_FLASHEx_OBProgram(FLASH_OBProgramInitTypeDef *pOBInit);
void HAL_FLASHEx_OBGetConfig(FLASH_OBProgramInitTypeDef *pOBInit);
uint32_t HAL_FLASHEx_OBGetUserData(uint32_t DATAAdress);
# 249 "Drivers/STM32F1xx_HAL_Driver/Inc/stm32f1xx_hal_flash.h" 2
# 259 "Drivers/STM32F1xx_HAL_Driver/Inc/stm32f1xx_hal_flash.h"
HAL_StatusTypeDef HAL_FLASH_Program(uint32_t TypeProgram, uint32_t Address, uint64_t Data);
HAL_StatusTypeDef HAL_FLASH_Program_IT(uint32_t TypeProgram, uint32_t Address, uint64_t Data);


void HAL_FLASH_IRQHandler(void);

void HAL_FLASH_EndOfOperationCallback(uint32_t ReturnValue);
void HAL_FLASH_OperationErrorCallback(uint32_t ReturnValue);
# 276 "Drivers/STM32F1xx_HAL_Driver/Inc/stm32f1xx_hal_flash.h"
HAL_StatusTypeDef HAL_FLASH_Unlock(void);
HAL_StatusTypeDef HAL_FLASH_Lock(void);
HAL_StatusTypeDef HAL_FLASH_OB_Unlock(void);
HAL_StatusTypeDef HAL_FLASH_OB_Lock(void);
void HAL_FLASH_OB_Launch(void);
# 290 "Drivers/STM32F1xx_HAL_Driver/Inc/stm32f1xx_hal_flash.h"
uint32_t HAL_FLASH_GetError(void);
# 304 "Drivers/STM32F1xx_HAL_Driver/Inc/stm32f1xx_hal_flash.h"
HAL_StatusTypeDef FLASH_WaitForLastOperation(uint32_t Timeout);
# 286 "Inc/stm32f1xx_hal_conf.h" 2
# 309 "Inc/stm32f1xx_hal_conf.h"
# 1 "Drivers/STM32F1xx_HAL_Driver/Inc/stm32f1xx_hal_pwr.h" 1
# 48 "Drivers/STM32F1xx_HAL_Driver/Inc/stm32f1xx_hal_pwr.h"
typedef struct
{
  uint32_t PVDLevel;


  uint32_t Mode;

}PWR_PVDTypeDef;
# 329 "Drivers/STM32F1xx_HAL_Driver/Inc/stm32f1xx_hal_pwr.h"
void HAL_PWR_DeInit(void);
void HAL_PWR_EnableBkUpAccess(void);
void HAL_PWR_DisableBkUpAccess(void);
# 342 "Drivers/STM32F1xx_HAL_Driver/Inc/stm32f1xx_hal_pwr.h"
void HAL_PWR_ConfigPVD(PWR_PVDTypeDef *sConfigPVD);

void HAL_PWR_EnablePVD(void);
void HAL_PWR_DisablePVD(void);


void HAL_PWR_EnableWakeUpPin(uint32_t WakeUpPinx);
void HAL_PWR_DisableWakeUpPin(uint32_t WakeUpPinx);


void HAL_PWR_EnterSTOPMode(uint32_t Regulator, uint8_t STOPEntry);
void HAL_PWR_EnterSLEEPMode(uint32_t Regulator, uint8_t SLEEPEntry);
void HAL_PWR_EnterSTANDBYMode(void);

void HAL_PWR_EnableSleepOnExit(void);
void HAL_PWR_DisableSleepOnExit(void);
void HAL_PWR_EnableSEVOnPend(void);
void HAL_PWR_DisableSEVOnPend(void);



void HAL_PWR_PVD_IRQHandler(void);
void HAL_PWR_PVDCallback(void);
# 310 "Inc/stm32f1xx_hal_conf.h" 2
# 357 "Inc/stm32f1xx_hal_conf.h"
# 1 "Drivers/STM32F1xx_HAL_Driver/Inc/stm32f1xx_hal_pcd.h" 1
# 29 "Drivers/STM32F1xx_HAL_Driver/Inc/stm32f1xx_hal_pcd.h"
# 1 "Drivers/STM32F1xx_HAL_Driver/Inc/stm32f1xx_ll_usb.h" 1
# 212 "Drivers/STM32F1xx_HAL_Driver/Inc/stm32f1xx_ll_usb.h"
typedef enum
{
  USB_DEVICE_MODE = 0
} USB_ModeTypeDef;




typedef struct
{
  uint32_t dev_endpoints;



  uint32_t speed;


  uint32_t ep0_mps;

  uint32_t phy_itface;


  uint32_t Sof_enable;

  uint32_t low_power_enable;

  uint32_t lpm_enable;

  uint32_t battery_charging_enable;
} USB_CfgTypeDef;

typedef struct
{
  uint8_t num;


  uint8_t is_in;


  uint8_t is_stall;


  uint8_t type;


  uint8_t data_pid_start;


  uint16_t pmaadress;


  uint16_t pmaaddr0;


  uint16_t pmaaddr1;


  uint8_t doublebuffer;


  uint16_t tx_fifo_num;



  uint32_t maxpacket;


  uint8_t *xfer_buff;

  uint32_t xfer_len;

  uint32_t xfer_count;

} USB_EPTypeDef;
# 595 "Drivers/STM32F1xx_HAL_Driver/Inc/stm32f1xx_ll_usb.h"
HAL_StatusTypeDef USB_CoreInit(USB_TypeDef *USBx, USB_CfgTypeDef cfg);
HAL_StatusTypeDef USB_DevInit(USB_TypeDef *USBx, USB_CfgTypeDef cfg);
HAL_StatusTypeDef USB_EnableGlobalInt(USB_TypeDef *USBx);
HAL_StatusTypeDef USB_DisableGlobalInt(USB_TypeDef *USBx);
HAL_StatusTypeDef USB_SetCurrentMode(USB_TypeDef *USBx, USB_ModeTypeDef mode);
HAL_StatusTypeDef USB_SetDevSpeed(USB_TypeDef *USBx, uint8_t speed);
HAL_StatusTypeDef USB_FlushRxFifo(USB_TypeDef *USBx);
HAL_StatusTypeDef USB_FlushTxFifo(USB_TypeDef *USBx, uint32_t num);
HAL_StatusTypeDef USB_ActivateEndpoint(USB_TypeDef *USBx, USB_EPTypeDef *ep);
HAL_StatusTypeDef USB_DeactivateEndpoint(USB_TypeDef *USBx, USB_EPTypeDef *ep);
HAL_StatusTypeDef USB_EPStartXfer(USB_TypeDef *USBx, USB_EPTypeDef *ep);
HAL_StatusTypeDef USB_WritePacket(USB_TypeDef *USBx, uint8_t *src, uint8_t ch_ep_num, uint16_t len);
void *USB_ReadPacket(USB_TypeDef *USBx, uint8_t *dest, uint16_t len);
HAL_StatusTypeDef USB_EPSetStall(USB_TypeDef *USBx, USB_EPTypeDef *ep);
HAL_StatusTypeDef USB_EPClearStall(USB_TypeDef *USBx, USB_EPTypeDef *ep);
HAL_StatusTypeDef USB_SetDevAddress(USB_TypeDef *USBx, uint8_t address);
HAL_StatusTypeDef USB_DevConnect(USB_TypeDef *USBx);
HAL_StatusTypeDef USB_DevDisconnect(USB_TypeDef *USBx);
HAL_StatusTypeDef USB_StopDevice(USB_TypeDef *USBx);
HAL_StatusTypeDef USB_EP0_OutStart(USB_TypeDef *USBx, uint8_t *psetup);
uint32_t USB_ReadInterrupts(USB_TypeDef *USBx);
uint32_t USB_ReadDevAllOutEpInterrupt(USB_TypeDef *USBx);
uint32_t USB_ReadDevOutEPInterrupt(USB_TypeDef *USBx, uint8_t epnum);
uint32_t USB_ReadDevAllInEpInterrupt(USB_TypeDef *USBx);
uint32_t USB_ReadDevInEPInterrupt(USB_TypeDef *USBx, uint8_t epnum);
void USB_ClearInterrupts(USB_TypeDef *USBx, uint32_t interrupt);

HAL_StatusTypeDef USB_ActivateRemoteWakeup(USB_TypeDef *USBx);
HAL_StatusTypeDef USB_DeActivateRemoteWakeup(USB_TypeDef *USBx);
void USB_WritePMA(USB_TypeDef *USBx, uint8_t *pbUsrBuf, uint16_t wPMABufAddr, uint16_t wNBytes);
void USB_ReadPMA(USB_TypeDef *USBx, uint8_t *pbUsrBuf, uint16_t wPMABufAddr, uint16_t wNBytes);
# 30 "Drivers/STM32F1xx_HAL_Driver/Inc/stm32f1xx_hal_pcd.h" 2
# 49 "Drivers/STM32F1xx_HAL_Driver/Inc/stm32f1xx_hal_pcd.h"
typedef enum
{
  HAL_PCD_STATE_RESET = 0x00,
  HAL_PCD_STATE_READY = 0x01,
  HAL_PCD_STATE_ERROR = 0x02,
  HAL_PCD_STATE_BUSY = 0x03,
  HAL_PCD_STATE_TIMEOUT = 0x04
} PCD_StateTypeDef;


typedef enum
{
  LPM_L0 = 0x00,
  LPM_L1 = 0x01,
  LPM_L2 = 0x02,
  LPM_L3 = 0x03,
} PCD_LPM_StateTypeDef;

typedef enum
{
  PCD_LPM_L0_ACTIVE = 0x00,
  PCD_LPM_L1_ACTIVE = 0x01,
} PCD_LPM_MsgTypeDef;

typedef enum
{
  PCD_BCD_ERROR = 0xFF,
  PCD_BCD_CONTACT_DETECTION = 0xFE,
  PCD_BCD_STD_DOWNSTREAM_PORT = 0xFD,
  PCD_BCD_CHARGING_DOWNSTREAM_PORT = 0xFC,
  PCD_BCD_DEDICATED_CHARGING_PORT = 0xFB,
  PCD_BCD_DISCOVERY_COMPLETED = 0x00,

} PCD_BCD_MsgTypeDef;
# 93 "Drivers/STM32F1xx_HAL_Driver/Inc/stm32f1xx_hal_pcd.h"
typedef USB_TypeDef PCD_TypeDef;
typedef USB_CfgTypeDef PCD_InitTypeDef;
typedef USB_EPTypeDef PCD_EPTypeDef;
# 104 "Drivers/STM32F1xx_HAL_Driver/Inc/stm32f1xx_hal_pcd.h"
typedef struct

{
  PCD_TypeDef *Instance;
  PCD_InitTypeDef Init;
  volatile uint8_t USB_Address;





  PCD_EPTypeDef IN_ep[8];
  PCD_EPTypeDef OUT_ep[8];

  HAL_LockTypeDef Lock;
  volatile PCD_StateTypeDef State;
  volatile uint32_t ErrorCode;
  uint32_t Setup[12];
  PCD_LPM_StateTypeDef LPM_State;
  uint32_t BESL;

  void *pData;
# 144 "Drivers/STM32F1xx_HAL_Driver/Inc/stm32f1xx_hal_pcd.h"
} PCD_HandleTypeDef;






# 1 "Drivers/STM32F1xx_HAL_Driver/Inc/stm32f1xx_hal_pcd_ex.h" 1
# 56 "Drivers/STM32F1xx_HAL_Driver/Inc/stm32f1xx_hal_pcd_ex.h"
HAL_StatusTypeDef HAL_PCDEx_PMAConfig(PCD_HandleTypeDef *hpcd,
                                       uint16_t ep_addr,
                                       uint16_t ep_kind,
                                       uint32_t pmaadress);

void HAL_PCDEx_SetConnectionState(PCD_HandleTypeDef *hpcd, uint8_t state);

void HAL_PCDEx_LPM_Callback(PCD_HandleTypeDef *hpcd, PCD_LPM_MsgTypeDef msg);
void HAL_PCDEx_BCD_Callback(PCD_HandleTypeDef *hpcd, PCD_BCD_MsgTypeDef msg);
# 152 "Drivers/STM32F1xx_HAL_Driver/Inc/stm32f1xx_hal_pcd.h" 2
# 257 "Drivers/STM32F1xx_HAL_Driver/Inc/stm32f1xx_hal_pcd.h"
HAL_StatusTypeDef HAL_PCD_Init(PCD_HandleTypeDef *hpcd);
HAL_StatusTypeDef HAL_PCD_DeInit(PCD_HandleTypeDef *hpcd);
void HAL_PCD_MspInit(PCD_HandleTypeDef *hpcd);
void HAL_PCD_MspDeInit(PCD_HandleTypeDef *hpcd);
# 325 "Drivers/STM32F1xx_HAL_Driver/Inc/stm32f1xx_hal_pcd.h"
HAL_StatusTypeDef HAL_PCD_Start(PCD_HandleTypeDef *hpcd);
HAL_StatusTypeDef HAL_PCD_Stop(PCD_HandleTypeDef *hpcd);
void HAL_PCD_IRQHandler(PCD_HandleTypeDef *hpcd);

void HAL_PCD_SOFCallback(PCD_HandleTypeDef *hpcd);
void HAL_PCD_SetupStageCallback(PCD_HandleTypeDef *hpcd);
void HAL_PCD_ResetCallback(PCD_HandleTypeDef *hpcd);
void HAL_PCD_SuspendCallback(PCD_HandleTypeDef *hpcd);
void HAL_PCD_ResumeCallback(PCD_HandleTypeDef *hpcd);
void HAL_PCD_ConnectCallback(PCD_HandleTypeDef *hpcd);
void HAL_PCD_DisconnectCallback(PCD_HandleTypeDef *hpcd);

void HAL_PCD_DataOutStageCallback(PCD_HandleTypeDef *hpcd, uint8_t epnum);
void HAL_PCD_DataInStageCallback(PCD_HandleTypeDef *hpcd, uint8_t epnum);
void HAL_PCD_ISOOUTIncompleteCallback(PCD_HandleTypeDef *hpcd, uint8_t epnum);
void HAL_PCD_ISOINIncompleteCallback(PCD_HandleTypeDef *hpcd, uint8_t epnum);
# 349 "Drivers/STM32F1xx_HAL_Driver/Inc/stm32f1xx_hal_pcd.h"
HAL_StatusTypeDef HAL_PCD_DevConnect(PCD_HandleTypeDef *hpcd);
HAL_StatusTypeDef HAL_PCD_DevDisconnect(PCD_HandleTypeDef *hpcd);
HAL_StatusTypeDef HAL_PCD_SetAddress(PCD_HandleTypeDef *hpcd, uint8_t address);
HAL_StatusTypeDef HAL_PCD_EP_Open(PCD_HandleTypeDef *hpcd, uint8_t ep_addr, uint16_t ep_mps, uint8_t ep_type);
HAL_StatusTypeDef HAL_PCD_EP_Close(PCD_HandleTypeDef *hpcd, uint8_t ep_addr);
HAL_StatusTypeDef HAL_PCD_EP_Receive(PCD_HandleTypeDef *hpcd, uint8_t ep_addr, uint8_t *pBuf, uint32_t len);
HAL_StatusTypeDef HAL_PCD_EP_Transmit(PCD_HandleTypeDef *hpcd, uint8_t ep_addr, uint8_t *pBuf, uint32_t len);
uint32_t HAL_PCD_EP_GetRxCount(PCD_HandleTypeDef *hpcd, uint8_t ep_addr);
HAL_StatusTypeDef HAL_PCD_EP_SetStall(PCD_HandleTypeDef *hpcd, uint8_t ep_addr);
HAL_StatusTypeDef HAL_PCD_EP_ClrStall(PCD_HandleTypeDef *hpcd, uint8_t ep_addr);
HAL_StatusTypeDef HAL_PCD_EP_Flush(PCD_HandleTypeDef *hpcd, uint8_t ep_addr);
HAL_StatusTypeDef HAL_PCD_ActivateRemoteWakeup(PCD_HandleTypeDef *hpcd);
HAL_StatusTypeDef HAL_PCD_DeActivateRemoteWakeup(PCD_HandleTypeDef *hpcd);
# 370 "Drivers/STM32F1xx_HAL_Driver/Inc/stm32f1xx_hal_pcd.h"
PCD_StateTypeDef HAL_PCD_GetState(PCD_HandleTypeDef *hpcd);
# 358 "Inc/stm32f1xx_hal_conf.h" 2
# 31 "Drivers/STM32F1xx_HAL_Driver/Inc/stm32f1xx_hal.h" 2
# 49 "Drivers/STM32F1xx_HAL_Driver/Inc/stm32f1xx_hal.h"
typedef enum
{
  HAL_TICK_FREQ_10HZ = 100U,
  HAL_TICK_FREQ_100HZ = 10U,
  HAL_TICK_FREQ_1KHZ = 1U,
  HAL_TICK_FREQ_DEFAULT = HAL_TICK_FREQ_1KHZ
} HAL_TickFreqTypeDef;




extern uint32_t uwTickPrio;
extern HAL_TickFreqTypeDef uwTickFreq;
# 282 "Drivers/STM32F1xx_HAL_Driver/Inc/stm32f1xx_hal.h"
HAL_StatusTypeDef HAL_Init(void);
HAL_StatusTypeDef HAL_DeInit(void);
void HAL_MspInit(void);
void HAL_MspDeInit(void);
HAL_StatusTypeDef HAL_InitTick(uint32_t TickPriority);
# 295 "Drivers/STM32F1xx_HAL_Driver/Inc/stm32f1xx_hal.h"
void HAL_IncTick(void);
void HAL_Delay(uint32_t Delay);
uint32_t HAL_GetTick(void);
uint32_t HAL_GetTickPrio(void);
HAL_StatusTypeDef HAL_SetTickFreq(HAL_TickFreqTypeDef Freq);
HAL_TickFreqTypeDef HAL_GetTickFreq(void);
void HAL_SuspendTick(void);
void HAL_ResumeTick(void);
uint32_t HAL_GetHalVersion(void);
uint32_t HAL_GetREVID(void);
uint32_t HAL_GetDEVID(void);
uint32_t HAL_GetUIDw0(void);
uint32_t HAL_GetUIDw1(void);
uint32_t HAL_GetUIDw2(void);
void HAL_DBGMCU_EnableDBGSleepMode(void);
void HAL_DBGMCU_DisableDBGSleepMode(void);
void HAL_DBGMCU_EnableDBGStopMode(void);
void HAL_DBGMCU_DisableDBGStopMode(void);
void HAL_DBGMCU_EnableDBGStandbyMode(void);
void HAL_DBGMCU_DisableDBGStandbyMode(void);
# 30 "../../mcus\\stm32f10x\\mcumap_stm32f10x.h" 2
# 38 "../../mcudefs.h" 2
# 65 "../../boarddefs.h" 2
# 55 "../../config.h" 2
# 1 "../../machinedefs.h" 1
# 22 "../../machinedefs.h"
# 1 "../../config.h" 1
# 23 "../../machinedefs.h" 2







# 1 "../../kinematics_cartesian.h" 1
# 31 "../../machinedefs.h" 2
# 56 "../../config.h" 2
# 1 "../../config_helper.h" 1
# 57 "../../config.h" 2
# 21 "mcu_stm32f10x.c" 2
# 1 "../../boarddefs.h" 1
# 22 "mcu_stm32f10x.c" 2
# 1 "mcumap_stm32f10x.h" 1
# 23 "mcu_stm32f10x.c" 2
# 1 "../../mcu.h" 1
# 23 "../../mcu.h"
# 1 "c:\\program files (x86)\\gnu arm embedded toolchain\\9 2020-q2-update\\arm-none-eabi\\include\\string.h" 1 3
# 10 "c:\\program files (x86)\\gnu arm embedded toolchain\\9 2020-q2-update\\arm-none-eabi\\include\\string.h" 3
# 1 "c:\\program files (x86)\\gnu arm embedded toolchain\\9 2020-q2-update\\arm-none-eabi\\include\\_ansi.h" 1 3
# 10 "c:\\program files (x86)\\gnu arm embedded toolchain\\9 2020-q2-update\\arm-none-eabi\\include\\_ansi.h" 3
# 1 "c:\\program files (x86)\\gnu arm embedded toolchain\\9 2020-q2-update\\arm-none-eabi\\include\\newlib.h" 1 3
# 11 "c:\\program files (x86)\\gnu arm embedded toolchain\\9 2020-q2-update\\arm-none-eabi\\include\\_ansi.h" 2 3
# 1 "c:\\program files (x86)\\gnu arm embedded toolchain\\9 2020-q2-update\\arm-none-eabi\\include\\sys\\config.h" 1 3



# 1 "c:\\program files (x86)\\gnu arm embedded toolchain\\9 2020-q2-update\\arm-none-eabi\\include\\machine\\ieeefp.h" 1 3
# 5 "c:\\program files (x86)\\gnu arm embedded toolchain\\9 2020-q2-update\\arm-none-eabi\\include\\sys\\config.h" 2 3
# 12 "c:\\program files (x86)\\gnu arm embedded toolchain\\9 2020-q2-update\\arm-none-eabi\\include\\_ansi.h" 2 3
# 11 "c:\\program files (x86)\\gnu arm embedded toolchain\\9 2020-q2-update\\arm-none-eabi\\include\\string.h" 2 3
# 1 "c:\\program files (x86)\\gnu arm embedded toolchain\\9 2020-q2-update\\arm-none-eabi\\include\\sys\\reent.h" 1 3
# 13 "c:\\program files (x86)\\gnu arm embedded toolchain\\9 2020-q2-update\\arm-none-eabi\\include\\sys\\reent.h" 3
# 1 "c:\\program files (x86)\\gnu arm embedded toolchain\\9 2020-q2-update\\arm-none-eabi\\include\\_ansi.h" 1 3
# 14 "c:\\program files (x86)\\gnu arm embedded toolchain\\9 2020-q2-update\\arm-none-eabi\\include\\sys\\reent.h" 2 3
# 1 "c:\\program files (x86)\\gnu arm embedded toolchain\\9 2020-q2-update\\lib\\gcc\\arm-none-eabi\\9.3.1\\include\\stddef.h" 1 3 4
# 15 "c:\\program files (x86)\\gnu arm embedded toolchain\\9 2020-q2-update\\arm-none-eabi\\include\\sys\\reent.h" 2 3
# 1 "c:\\program files (x86)\\gnu arm embedded toolchain\\9 2020-q2-update\\arm-none-eabi\\include\\sys\\_types.h" 1 3
# 24 "c:\\program files (x86)\\gnu arm embedded toolchain\\9 2020-q2-update\\arm-none-eabi\\include\\sys\\_types.h" 3
# 1 "c:\\program files (x86)\\gnu arm embedded toolchain\\9 2020-q2-update\\lib\\gcc\\arm-none-eabi\\9.3.1\\include\\stddef.h" 1 3 4
# 350 "c:\\program files (x86)\\gnu arm embedded toolchain\\9 2020-q2-update\\lib\\gcc\\arm-none-eabi\\9.3.1\\include\\stddef.h" 3 4

# 350 "c:\\program files (x86)\\gnu arm embedded toolchain\\9 2020-q2-update\\lib\\gcc\\arm-none-eabi\\9.3.1\\include\\stddef.h" 3 4
typedef unsigned int wint_t;
# 25 "c:\\program files (x86)\\gnu arm embedded toolchain\\9 2020-q2-update\\arm-none-eabi\\include\\sys\\_types.h" 2 3


# 1 "c:\\program files (x86)\\gnu arm embedded toolchain\\9 2020-q2-update\\arm-none-eabi\\include\\machine\\_types.h" 1 3
# 28 "c:\\program files (x86)\\gnu arm embedded toolchain\\9 2020-q2-update\\arm-none-eabi\\include\\sys\\_types.h" 2 3


typedef long __blkcnt_t;



typedef long __blksize_t;



typedef __uint64_t __fsblkcnt_t;



typedef __uint32_t __fsfilcnt_t;



typedef long _off_t;





typedef int __pid_t;



typedef short __dev_t;



typedef unsigned short __uid_t;


typedef unsigned short __gid_t;



typedef __uint32_t __id_t;







typedef unsigned short __ino_t;
# 90 "c:\\program files (x86)\\gnu arm embedded toolchain\\9 2020-q2-update\\arm-none-eabi\\include\\sys\\_types.h" 3
typedef __uint32_t __mode_t;





__extension__ typedef long long _off64_t;





typedef _off_t __off_t;


typedef _off64_t __loff_t;


typedef long __key_t;







typedef long _fpos_t;
# 131 "c:\\program files (x86)\\gnu arm embedded toolchain\\9 2020-q2-update\\arm-none-eabi\\include\\sys\\_types.h" 3
typedef unsigned int __size_t;
# 147 "c:\\program files (x86)\\gnu arm embedded toolchain\\9 2020-q2-update\\arm-none-eabi\\include\\sys\\_types.h" 3
typedef signed int _ssize_t;
# 158 "c:\\program files (x86)\\gnu arm embedded toolchain\\9 2020-q2-update\\arm-none-eabi\\include\\sys\\_types.h" 3
typedef _ssize_t __ssize_t;



typedef struct
{
  int __count;
  union
  {
    wint_t __wch;
    unsigned char __wchb[4];
  } __value;
} _mbstate_t;




typedef void *_iconv_t;






typedef unsigned long __clock_t;






typedef __int_least64_t __time_t;





typedef unsigned long __clockid_t;


typedef unsigned long __timer_t;


typedef __uint8_t __sa_family_t;



typedef __uint32_t __socklen_t;


typedef int __nl_item;
typedef unsigned short __nlink_t;
typedef long __suseconds_t;
typedef unsigned long __useconds_t;







typedef __builtin_va_list __va_list;
# 16 "c:\\program files (x86)\\gnu arm embedded toolchain\\9 2020-q2-update\\arm-none-eabi\\include\\sys\\reent.h" 2 3






typedef unsigned long __ULong;
# 34 "c:\\program files (x86)\\gnu arm embedded toolchain\\9 2020-q2-update\\arm-none-eabi\\include\\sys\\reent.h" 3
# 1 "c:\\program files (x86)\\gnu arm embedded toolchain\\9 2020-q2-update\\arm-none-eabi\\include\\sys\\lock.h" 1 3
# 33 "c:\\program files (x86)\\gnu arm embedded toolchain\\9 2020-q2-update\\arm-none-eabi\\include\\sys\\lock.h" 3
struct __lock;
typedef struct __lock * _LOCK_T;






extern void __retarget_lock_init(_LOCK_T *lock);

extern void __retarget_lock_init_recursive(_LOCK_T *lock);

extern void __retarget_lock_close(_LOCK_T lock);

extern void __retarget_lock_close_recursive(_LOCK_T lock);

extern void __retarget_lock_acquire(_LOCK_T lock);

extern void __retarget_lock_acquire_recursive(_LOCK_T lock);

extern int __retarget_lock_try_acquire(_LOCK_T lock);

extern int __retarget_lock_try_acquire_recursive(_LOCK_T lock);


extern void __retarget_lock_release(_LOCK_T lock);

extern void __retarget_lock_release_recursive(_LOCK_T lock);
# 35 "c:\\program files (x86)\\gnu arm embedded toolchain\\9 2020-q2-update\\arm-none-eabi\\include\\sys\\reent.h" 2 3
typedef _LOCK_T _flock_t;







struct _reent;

struct __locale_t;






struct _Bigint
{
  struct _Bigint *_next;
  int _k, _maxwds, _sign, _wds;
  __ULong _x[1];
};


struct __tm
{
  int __tm_sec;
  int __tm_min;
  int __tm_hour;
  int __tm_mday;
  int __tm_mon;
  int __tm_year;
  int __tm_wday;
  int __tm_yday;
  int __tm_isdst;
};







struct _on_exit_args {
 void * _fnargs[32];
 void * _dso_handle[32];

 __ULong _fntypes;


 __ULong _is_cxa;
};
# 98 "c:\\program files (x86)\\gnu arm embedded toolchain\\9 2020-q2-update\\arm-none-eabi\\include\\sys\\reent.h" 3
struct _atexit {
 struct _atexit *_next;
 int _ind;

 void (*_fns[32])(void);
        struct _on_exit_args _on_exit_args;
};
# 122 "c:\\program files (x86)\\gnu arm embedded toolchain\\9 2020-q2-update\\arm-none-eabi\\include\\sys\\reent.h" 3
struct __sbuf {
 unsigned char *_base;
 int _size;
};
# 186 "c:\\program files (x86)\\gnu arm embedded toolchain\\9 2020-q2-update\\arm-none-eabi\\include\\sys\\reent.h" 3
struct __sFILE {
  unsigned char *_p;
  int _r;
  int _w;
  short _flags;
  short _file;
  struct __sbuf _bf;
  int _lbfsize;






  void * _cookie;

  int (*_read) (struct _reent *, void *,
        char *, int);
  int (*_write) (struct _reent *, void *,
         const char *,
         int);
  _fpos_t (*_seek) (struct _reent *, void *, _fpos_t, int);
  int (*_close) (struct _reent *, void *);


  struct __sbuf _ub;
  unsigned char *_up;
  int _ur;


  unsigned char _ubuf[3];
  unsigned char _nbuf[1];


  struct __sbuf _lb;


  int _blksize;
  _off_t _offset;


  struct _reent *_data;



  _flock_t _lock;

  _mbstate_t _mbstate;
  int _flags2;
};
# 292 "c:\\program files (x86)\\gnu arm embedded toolchain\\9 2020-q2-update\\arm-none-eabi\\include\\sys\\reent.h" 3
typedef struct __sFILE __FILE;



struct _glue
{
  struct _glue *_next;
  int _niobs;
  __FILE *_iobs;
};
# 324 "c:\\program files (x86)\\gnu arm embedded toolchain\\9 2020-q2-update\\arm-none-eabi\\include\\sys\\reent.h" 3
struct _rand48 {
  unsigned short _seed[3];
  unsigned short _mult[3];
  unsigned short _add;




};
# 613 "c:\\program files (x86)\\gnu arm embedded toolchain\\9 2020-q2-update\\arm-none-eabi\\include\\sys\\reent.h" 3
struct _reent
{
  int _errno;




  __FILE *_stdin, *_stdout, *_stderr;

  int _inc;
  char _emergency[25];


  int _unspecified_locale_info;
  struct __locale_t *_locale;

  int __sdidinit;

  void (*__cleanup) (struct _reent *);


  struct _Bigint *_result;
  int _result_k;
  struct _Bigint *_p5s;
  struct _Bigint **_freelist;


  int _cvtlen;
  char *_cvtbuf;

  union
    {
      struct
        {
          unsigned int _unused_rand;
          char * _strtok_last;
          char _asctime_buf[26];
          struct __tm _localtime_buf;
          int _gamma_signgam;
          __extension__ unsigned long long _rand_next;
          struct _rand48 _r48;
          _mbstate_t _mblen_state;
          _mbstate_t _mbtowc_state;
          _mbstate_t _wctomb_state;
          char _l64a_buf[8];
          char _signal_buf[24];
          int _getdate_err;
          _mbstate_t _mbrlen_state;
          _mbstate_t _mbrtowc_state;
          _mbstate_t _mbsrtowcs_state;
          _mbstate_t _wcrtomb_state;
          _mbstate_t _wcsrtombs_state;
   int _h_errno;
        } _reent;



      struct
        {

          unsigned char * _nextf[30];
          unsigned int _nmalloc[30];
        } _unused;
    } _new;



  struct _atexit *_atexit;
  struct _atexit _atexit0;



  void (**(_sig_func))(int);




  struct _glue __sglue;

  __FILE __sf[3];

};
# 819 "c:\\program files (x86)\\gnu arm embedded toolchain\\9 2020-q2-update\\arm-none-eabi\\include\\sys\\reent.h" 3
extern struct _reent *_impure_ptr ;
extern struct _reent *const _global_impure_ptr ;

void _reclaim_reent (struct _reent *);
# 12 "c:\\program files (x86)\\gnu arm embedded toolchain\\9 2020-q2-update\\arm-none-eabi\\include\\string.h" 2 3
# 1 "c:\\program files (x86)\\gnu arm embedded toolchain\\9 2020-q2-update\\arm-none-eabi\\include\\sys\\cdefs.h" 1 3
# 47 "c:\\program files (x86)\\gnu arm embedded toolchain\\9 2020-q2-update\\arm-none-eabi\\include\\sys\\cdefs.h" 3
# 1 "c:\\program files (x86)\\gnu arm embedded toolchain\\9 2020-q2-update\\lib\\gcc\\arm-none-eabi\\9.3.1\\include\\stddef.h" 1 3 4
# 48 "c:\\program files (x86)\\gnu arm embedded toolchain\\9 2020-q2-update\\arm-none-eabi\\include\\sys\\cdefs.h" 2 3
# 13 "c:\\program files (x86)\\gnu arm embedded toolchain\\9 2020-q2-update\\arm-none-eabi\\include\\string.h" 2 3




# 1 "c:\\program files (x86)\\gnu arm embedded toolchain\\9 2020-q2-update\\lib\\gcc\\arm-none-eabi\\9.3.1\\include\\stddef.h" 1 3 4
# 18 "c:\\program files (x86)\\gnu arm embedded toolchain\\9 2020-q2-update\\arm-none-eabi\\include\\string.h" 2 3


# 1 "c:\\program files (x86)\\gnu arm embedded toolchain\\9 2020-q2-update\\arm-none-eabi\\include\\sys\\_locale.h" 1 3
# 9 "c:\\program files (x86)\\gnu arm embedded toolchain\\9 2020-q2-update\\arm-none-eabi\\include\\sys\\_locale.h" 3
struct __locale_t;
typedef struct __locale_t *locale_t;
# 21 "c:\\program files (x86)\\gnu arm embedded toolchain\\9 2020-q2-update\\arm-none-eabi\\include\\string.h" 2 3



# 1 "c:\\program files (x86)\\gnu arm embedded toolchain\\9 2020-q2-update\\arm-none-eabi\\include\\strings.h" 1 3
# 44 "c:\\program files (x86)\\gnu arm embedded toolchain\\9 2020-q2-update\\arm-none-eabi\\include\\strings.h" 3


int bcmp(const void *, const void *, size_t) __attribute__((__pure__));
void bcopy(const void *, void *, size_t);
void bzero(void *, size_t);


void explicit_bzero(void *, size_t);


int ffs(int) __attribute__((__const__));


int ffsl(long) __attribute__((__const__));
int ffsll(long long) __attribute__((__const__));
int fls(int) __attribute__((__const__));
int flsl(long) __attribute__((__const__));
int flsll(long long) __attribute__((__const__));


char *index(const char *, int) __attribute__((__pure__));
char *rindex(const char *, int) __attribute__((__pure__));

int strcasecmp(const char *, const char *) __attribute__((__pure__));
int strncasecmp(const char *, const char *, size_t) __attribute__((__pure__));


int strcasecmp_l (const char *, const char *, locale_t);
int strncasecmp_l (const char *, const char *, size_t, locale_t);


# 25 "c:\\program files (x86)\\gnu arm embedded toolchain\\9 2020-q2-update\\arm-none-eabi\\include\\string.h" 2 3




void * memchr (const void *, int, size_t);
int memcmp (const void *, const void *, size_t);
void * memcpy (void *restrict, const void *restrict, size_t);
void * memmove (void *, const void *, size_t);
void * memset (void *, int, size_t);
char *strcat (char *restrict, const char *restrict);
char *strchr (const char *, int);
int strcmp (const char *, const char *);
int strcoll (const char *, const char *);
char *strcpy (char *restrict, const char *restrict);
size_t strcspn (const char *, const char *);
char *strerror (int);
size_t strlen (const char *);
char *strncat (char *restrict, const char *restrict, size_t);
int strncmp (const char *, const char *, size_t);
char *strncpy (char *restrict, const char *restrict, size_t);
char *strpbrk (const char *, const char *);
char *strrchr (const char *, int);
size_t strspn (const char *, const char *);
char *strstr (const char *, const char *);

char *strtok (char *restrict, const char *restrict);

size_t strxfrm (char *restrict, const char *restrict, size_t);


int strcoll_l (const char *, const char *, locale_t);
char *strerror_l (int, locale_t);
size_t strxfrm_l (char *restrict, const char *restrict, size_t, locale_t);


char *strtok_r (char *restrict, const char *restrict, char **restrict);


int timingsafe_bcmp (const void *, const void *, size_t);
int timingsafe_memcmp (const void *, const void *, size_t);


void * memccpy (void *restrict, const void *restrict, int, size_t);
# 76 "c:\\program files (x86)\\gnu arm embedded toolchain\\9 2020-q2-update\\arm-none-eabi\\include\\string.h" 3
char *stpcpy (char *restrict, const char *restrict);
char *stpncpy (char *restrict, const char *restrict, size_t);






char *strdup (const char *) __attribute__((__malloc__)) __attribute__((__warn_unused_result__));

char *_strdup_r (struct _reent *, const char *);

char *strndup (const char *, size_t) __attribute__((__malloc__)) __attribute__((__warn_unused_result__));

char *_strndup_r (struct _reent *, const char *, size_t);
# 100 "c:\\program files (x86)\\gnu arm embedded toolchain\\9 2020-q2-update\\arm-none-eabi\\include\\string.h" 3
int strerror_r (int, char *, size_t)

             __asm__ ("" "__xpg_strerror_r")

  ;







char * _strerror_r (struct _reent *, int, int, int *);


size_t strlcat (char *, const char *, size_t);
size_t strlcpy (char *, const char *, size_t);


size_t strnlen (const char *, size_t);


char *strsep (char **, const char *);


char *strnstr(const char *, const char *, size_t) __attribute__((__pure__));



char *strlwr (char *);
char *strupr (char *);



char *strsignal (int __signo);
# 175 "c:\\program files (x86)\\gnu arm embedded toolchain\\9 2020-q2-update\\arm-none-eabi\\include\\string.h" 3
# 1 "c:\\program files (x86)\\gnu arm embedded toolchain\\9 2020-q2-update\\arm-none-eabi\\include\\sys\\string.h" 1 3
# 176 "c:\\program files (x86)\\gnu arm embedded toolchain\\9 2020-q2-update\\arm-none-eabi\\include\\string.h" 2 3


# 24 "../../mcu.h" 2
# 1 "c:\\program files (x86)\\gnu arm embedded toolchain\\9 2020-q2-update\\lib\\gcc\\arm-none-eabi\\9.3.1\\include\\stdbool.h" 1 3 4
# 25 "../../mcu.h" 2


# 1 "../../utils.h" 1
# 28 "../../mcu.h" 2
# 50 "../../mcu.h"

# 50 "../../mcu.h"
void mcu_init(void);
# 60 "../../mcu.h"
uint8_t mcu_get_analog(uint8_t channel);
# 73 "../../mcu.h"
void mcu_start_send(void);
void mcu_stop_send(void);
void mcu_putc(char c);
char mcu_getc(void);
# 90 "../../mcu.h"
void mcu_freq_to_clocks(float frequency, uint16_t* ticks, uint16_t* prescaller);

void mcu_start_step_ISR(uint16_t ticks, uint16_t prescaller);

void mcu_change_step_ISR(uint16_t ticks, uint16_t prescaller);

void mcu_step_stop_ISR(void);





uint8_t mcu_eeprom_getc(uint16_t address);
void mcu_eeprom_putc(uint16_t address, uint8_t value);
# 24 "mcu_stm32f10x.c" 2

extern void serial_rx_isr(unsigned char c);
extern void serial_tx_isr(void);
extern void itp_step_isr(void);
extern void itp_step_reset_isr(void);
# 120 "mcu_stm32f10x.c"
void USART1_IRQHandler(void)
{
 { if (((USART_TypeDef *)((0x40000000UL + 0x00010000UL) + 0x00003800UL))->SR && (1U << 5U)) { serial_rx_isr((((USART_TypeDef *)((0x40000000UL + 0x00010000UL) + 0x00003800UL)))->DR); ((USART_TypeDef *)((0x40000000UL + 0x00010000UL) + 0x00003800UL))->SR &= ~(1U << 5U); } if (((USART_TypeDef *)((0x40000000UL + 0x00010000UL) + 0x00003800UL))->SR && (1U << 7U)) { serial_tx_isr(); ((USART_TypeDef *)((0x40000000UL + 0x00010000UL) + 0x00003800UL))->SR &= ~(1U << 7U); } ((NVIC_Type *) ((0xE000E000UL) + 0x0100UL) )->ICPR[((uint32_t)(USART1_IRQn) >> 5)] = (1 << ((uint32_t)(USART1_IRQn)&0x1F)); };
}
# 152 "mcu_stm32f10x.c"
void TIM2_IRQHandler(void)
{
 { static 
# 154 "mcu_stm32f10x.c" 3 4
_Bool 
# 154 "mcu_stm32f10x.c"
resetstep = 
# 154 "mcu_stm32f10x.c" 3 4
0
# 154 "mcu_stm32f10x.c"
; if ((((TIM_TypeDef *)(0x40000000UL + 0x00000000UL))->SR & 1)) { if (!resetstep) itp_step_isr(); else itp_step_reset_isr(); resetstep != resetstep; } ((TIM_TypeDef *)(0x40000000UL + 0x00000000UL))->SR = 0; ((NVIC_Type *) ((0xE000E000UL) + 0x0100UL) )->ICPR[((uint32_t)(TIM2_IRQn) >> 5)] = (1 << ((uint32_t)(TIM2_IRQn)&0x1F)); };
}
# 203 "mcu_stm32f10x.c"
static void mcu_usart_init(void)
{

 ((RCC_TypeDef *)((0x40000000UL + 0x00020000UL) + 0x00001000UL))->APB2ENR |= ((0x1UL << (0U)));
 ((RCC_TypeDef *)((0x40000000UL + 0x00020000UL) + 0x00001000UL))->APB2ENR |= ((0x1UL << (14U)));
 ((RCC_TypeDef *)((0x40000000UL + 0x00020000UL) + 0x00001000UL))->APB2ENR |= (((0x1UL << (2U))));
 ((((GPIO_TypeDef *)((0x40000000UL + 0x00010000UL) + 0x00000800UL))))->CRH &= ~(0xfU << ((9 - 8) << 2));
 ((((GPIO_TypeDef *)((0x40000000UL + 0x00010000UL) + 0x00000800UL))))->CRH |= (0xBU << ((9 - 8) << 2));
 ((RCC_TypeDef *)((0x40000000UL + 0x00020000UL) + 0x00001000UL))->APB2ENR |= (((0x1UL << (2U))));
 ((((GPIO_TypeDef *)((0x40000000UL + 0x00010000UL) + 0x00000800UL))))->CRH &= ~(0xfU << ((10 - 8) << 2));
 ((((GPIO_TypeDef *)((0x40000000UL + 0x00010000UL) + 0x00000800UL))))->CRH |= (0x4U << ((10 - 8) << 2));
 ((USART_TypeDef *)((0x40000000UL + 0x00010000UL) + 0x00003800UL))->CR1 &= ~0x1400;
 ((USART_TypeDef *)((0x40000000UL + 0x00010000UL) + 0x00003800UL))->CR2 &= ~0x3000;

 float baudrate = ((float)72000000UL / (16.0f * (float)115200));
 uint16_t brr = (uint16_t)baudrate;
 baudrate -= brr;
 brr <<= 4;
 brr += (uint16_t)roundf(16.0f * baudrate);
 ((USART_TypeDef *)((0x40000000UL + 0x00010000UL) + 0x00003800UL))->BRR = brr;
 ((USART_TypeDef *)((0x40000000UL + 0x00010000UL) + 0x00003800UL))->CR1 |= 0x20AC;
 ((NVIC_Type *) ((0xE000E000UL) + 0x0100UL) )->ISER[((uint32_t)(USART1_IRQn) >> 5)] = (1 << ((uint32_t)(USART1_IRQn)&0x1F));
 ((NVIC_Type *) ((0xE000E000UL) + 0x0100UL) )->IP[(uint32_t)(USART1_IRQn)] = ((1 << (8 - 4U)) & 0xff);

}
# 260 "mcu_stm32f10x.c"
void mcu_init(void)
{

 { ((RCC_TypeDef *)((0x40000000UL + 0x00020000UL) + 0x00001000UL))->APB2ENR |= (((0x1UL << (2U)))); ((((GPIO_TypeDef *)((0x40000000UL + 0x00010000UL) + 0x00000800UL))))->CRL &= ~(0xfU << ((0) << 2U)); ((((GPIO_TypeDef *)((0x40000000UL + 0x00010000UL) + 0x00000800UL))))->CRL |= (0x7U << ((0) << 2U)); };


 { ((RCC_TypeDef *)((0x40000000UL + 0x00020000UL) + 0x00001000UL))->APB2ENR |= (((0x1UL << (2U)))); ((((GPIO_TypeDef *)((0x40000000UL + 0x00010000UL) + 0x00000800UL))))->CRL &= ~(0xfU << ((1) << 2U)); ((((GPIO_TypeDef *)((0x40000000UL + 0x00010000UL) + 0x00000800UL))))->CRL |= (0x7U << ((1) << 2U)); };


 { ((RCC_TypeDef *)((0x40000000UL + 0x00020000UL) + 0x00001000UL))->APB2ENR |= (((0x1UL << (2U)))); ((((GPIO_TypeDef *)((0x40000000UL + 0x00010000UL) + 0x00000800UL))))->CRL &= ~(0xfU << ((2) << 2U)); ((((GPIO_TypeDef *)((0x40000000UL + 0x00010000UL) + 0x00000800UL))))->CRL |= (0x7U << ((2) << 2U)); };
# 281 "mcu_stm32f10x.c"
 { ((RCC_TypeDef *)((0x40000000UL + 0x00020000UL) + 0x00001000UL))->APB2ENR |= (((0x1UL << (2U)))); ((((GPIO_TypeDef *)((0x40000000UL + 0x00010000UL) + 0x00000800UL))))->CRH &= ~(0xfU << ((15 - 8) << 2U)); ((((GPIO_TypeDef *)((0x40000000UL + 0x00010000UL) + 0x00000800UL))))->CRH |= (0x7U << ((15 - 8) << 2U)); };
# 299 "mcu_stm32f10x.c"
 { ((RCC_TypeDef *)((0x40000000UL + 0x00020000UL) + 0x00001000UL))->APB2ENR |= (((0x1UL << (2U)))); ((((GPIO_TypeDef *)((0x40000000UL + 0x00010000UL) + 0x00000800UL))))->CRL &= ~(0xfU << ((3) << 2U)); ((((GPIO_TypeDef *)((0x40000000UL + 0x00010000UL) + 0x00000800UL))))->CRL |= (0x7U << ((3) << 2U)); };


 { ((RCC_TypeDef *)((0x40000000UL + 0x00020000UL) + 0x00001000UL))->APB2ENR |= (((0x1UL << (2U)))); ((((GPIO_TypeDef *)((0x40000000UL + 0x00010000UL) + 0x00000800UL))))->CRL &= ~(0xfU << ((4) << 2U)); ((((GPIO_TypeDef *)((0x40000000UL + 0x00010000UL) + 0x00000800UL))))->CRL |= (0x7U << ((4) << 2U)); };


 { ((RCC_TypeDef *)((0x40000000UL + 0x00020000UL) + 0x00001000UL))->APB2ENR |= (((0x1UL << (2U)))); ((((GPIO_TypeDef *)((0x40000000UL + 0x00010000UL) + 0x00000800UL))))->CRL &= ~(0xfU << ((5) << 2U)); ((((GPIO_TypeDef *)((0x40000000UL + 0x00010000UL) + 0x00000800UL))))->CRL |= (0x7U << ((5) << 2U)); };
# 410 "mcu_stm32f10x.c"
 { ((RCC_TypeDef *)((0x40000000UL + 0x00020000UL) + 0x00001000UL))->APB2ENR |= (((0x1UL << (4U)))); ((((GPIO_TypeDef *)((0x40000000UL + 0x00010000UL) + 0x00001000UL))))->CRH &= ~(0xfU << ((13 - 8) << 2U)); ((((GPIO_TypeDef *)((0x40000000UL + 0x00010000UL) + 0x00001000UL))))->CRH |= (0x7U << ((13 - 8) << 2U)); };


 { ((RCC_TypeDef *)((0x40000000UL + 0x00020000UL) + 0x00001000UL))->APB2ENR |= (((0x1UL << (3U)))); ((((GPIO_TypeDef *)((0x40000000UL + 0x00010000UL) + 0x00000C00UL))))->CRH &= ~(0xfU << ((12 - 8) << 2U)); ((((GPIO_TypeDef *)((0x40000000UL + 0x00010000UL) + 0x00000C00UL))))->CRH |= (0x4U << ((12 - 8) << 2U)); };





 { ((RCC_TypeDef *)((0x40000000UL + 0x00020000UL) + 0x00001000UL))->APB2ENR |= (((0x1UL << (3U)))); ((((GPIO_TypeDef *)((0x40000000UL + 0x00010000UL) + 0x00000C00UL))))->CRH &= ~(0xfU << ((13 - 8) << 2U)); ((((GPIO_TypeDef *)((0x40000000UL + 0x00010000UL) + 0x00000C00UL))))->CRH |= (0x4U << ((13 - 8) << 2U)); };





 { ((RCC_TypeDef *)((0x40000000UL + 0x00020000UL) + 0x00001000UL))->APB2ENR |= (((0x1UL << (3U)))); ((((GPIO_TypeDef *)((0x40000000UL + 0x00010000UL) + 0x00000C00UL))))->CRH &= ~(0xfU << ((14 - 8) << 2U)); ((((GPIO_TypeDef *)((0x40000000UL + 0x00010000UL) + 0x00000C00UL))))->CRH |= (0x4U << ((14 - 8) << 2U)); };
# 467 "mcu_stm32f10x.c"
 { ((RCC_TypeDef *)((0x40000000UL + 0x00020000UL) + 0x00001000UL))->APB2ENR |= (((0x1UL << (3U)))); ((((GPIO_TypeDef *)((0x40000000UL + 0x00010000UL) + 0x00000C00UL))))->CRH &= ~(0xfU << ((9 - 8) << 2U)); ((((GPIO_TypeDef *)((0x40000000UL + 0x00010000UL) + 0x00000C00UL))))->CRH |= (0x4U << ((9 - 8) << 2U)); };
# 594 "mcu_stm32f10x.c"
 mcu_usart_init();


 __enable_irq();
}
# 613 "mcu_stm32f10x.c"
uint8_t mcu_get_analog(uint8_t channel)
{
}
# 632 "mcu_stm32f10x.c"
void mcu_start_send(void)
{

}
void mcu_stop_send(void)
{

}





static uint8_t mcu_tx_buffer[112];

extern uint8_t CDC_Transmit_FS(uint8_t *Buf, uint16_t Len);

void mcu_putc(char c)
{
 static uint16_t i = 0;
 mcu_tx_buffer[i] = (uint8_t)c;
 i++;
 if (c == '\n' || i == (112 - 1))
 {
  mcu_tx_buffer[i] = 0;
  CDC_Transmit_FS(mcu_tx_buffer, i);
  i = 0;
 }
}

char mcu_getc(void)
{
}
# 682 "mcu_stm32f10x.c"
void mcu_freq_to_clocks(float frequency, uint16_t *ticks, uint16_t *prescaller)
{

 uint32_t totalticks = (uint32_t)((float)(72000000UL >> 1) / frequency);
 *prescaller = 1;
 while (totalticks > 0xFFFF)
 {
  *prescaller <<= 1;
  totalticks >>= 1;
 }

 *prescaller--;
 *ticks = (uint16_t)totalticks;
}


void mcu_start_step_ISR(uint16_t ticks, uint16_t prescaller)
{
 ((RCC_TypeDef *)((0x40000000UL + 0x00020000UL) + 0x00001000UL))->APB1ENR |= (0x1UL << (0U));
 ((TIM_TypeDef *)(0x40000000UL + 0x00000000UL))->CR1 = 0;
 ((TIM_TypeDef *)(0x40000000UL + 0x00000000UL))->DIER = 1;
 ((TIM_TypeDef *)(0x40000000UL + 0x00000000UL))->PSC = prescaller;
 ((TIM_TypeDef *)(0x40000000UL + 0x00000000UL))->ARR = ticks;
 ((TIM_TypeDef *)(0x40000000UL + 0x00000000UL))->CR1 = 0x00E1;
 ((TIM_TypeDef *)(0x40000000UL + 0x00000000UL))->SR = 0;

 ((NVIC_Type *) ((0xE000E000UL) + 0x0100UL) )->ISER[((uint32_t)(TIM2_IRQn) >> 5)] = (1 << ((uint32_t)(TIM2_IRQn)&0x1F));
 ((NVIC_Type *) ((0xE000E000UL) + 0x0100UL) )->IP[(uint32_t)(TIM2_IRQn)] = ((2 << (8 - 4U)) & 0xff);
}


void mcu_change_step_ISR(uint16_t ticks, uint16_t prescaller)
{
 ((TIM_TypeDef *)(0x40000000UL + 0x00000000UL))->PSC = prescaller;
 ((TIM_TypeDef *)(0x40000000UL + 0x00000000UL))->ARR = ticks;
}


void mcu_step_stop_ISR(void)
{
 ((NVIC_Type *) ((0xE000E000UL) + 0x0100UL) )->ICER[((uint32_t)(TIM2_IRQn) >> 5)] = (1 << ((uint32_t)(TIM2_IRQn)&0x1F));
 ((TIM_TypeDef *)(0x40000000UL + 0x00000000UL))->CR1 &= ~0x1;
 ((TIM_TypeDef *)(0x40000000UL + 0x00000000UL))->DIER &= ~0x1;
}





uint8_t mcu_eeprom_getc(uint16_t address)
{
 return 0;
}

void mcu_eeprom_putc(uint16_t address, uint8_t value)
{
}
