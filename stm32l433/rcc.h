/**
 * @file rcc.h
 * 
 * @date 2019-09-12
 * @author twatorowski (tw@mightydevices.com)
 * 
 * @brief STM32 Headers: RCC
 */

#ifndef STM32L433_RCC_H_
#define STM32L433_RCC_H_

#include "stm32l433/stm32l433.h"

/* register base */
#define RCC_BASE                            (0x40021000)
/* rcc itself */
#define RCC                                 ((rcc_t *) RCC_BASE)

/* rcc registers */
typedef struct {
    reg32_t CR;
    reg32_t ICSCR;
    reg32_t CFGR;
    reg32_t PLLCFGR;
    reg32_t PLLSAI1CFGR;
    reg32_t RESERVED0;
    reg32_t CIER;
    reg32_t CIFR;
    reg32_t CICR;
    reg32_t RESERVED1;
    reg32_t AHB1RSTR;
    reg32_t AHB2RSTR;
    reg32_t AHB3RSTR;
    reg32_t RESERVED2;
    reg32_t APB1RSTR1;
    reg32_t APB1RSTR2;
    reg32_t APB2RSTR;
    reg32_t RESERVED3;
    reg32_t AHB1ENR;
    reg32_t AHB2ENR;
    reg32_t AHB3ENR;
    reg32_t RESERVED4;
    reg32_t APB1ENR1;
    reg32_t APB1ENR2;
    reg32_t APB2ENR;
    reg32_t RESERVED5;
    reg32_t AHB1SMENR;
    reg32_t AHB2SMENR;
    reg32_t AHB3SMENR;
    reg32_t RESERVED6;
    reg32_t APB1SMENR1;
    reg32_t APB1SMENR2;
    reg32_t APB2SMENR;
    reg32_t RESERVED7;
    reg32_t CCIPR;
    reg32_t RESERVED8;
    reg32_t BDCR;
    reg32_t CSR;
    reg32_t CRRCR;
    reg32_t CCIPR2;
} PACKED ALIGNED(4) rcc_t;

/*  Bit definition for RCC_CR register  */
#define RCC_CR_MSION                        (0x00000001)
#define RCC_CR_MSIRDY                       (0x00000002)
#define RCC_CR_MSIPLLEN                     (0x00000004)
#define RCC_CR_MSIRGSEL                     (0x00000008)
#define RCC_CR_MSIRANGE                     (0x000000F0)
#define RCC_CR_MSIRANGE_0                   (0x00000000)
#define RCC_CR_MSIRANGE_1                   (0x00000010)
#define RCC_CR_MSIRANGE_2                   (0x00000020)
#define RCC_CR_MSIRANGE_3                   (0x00000030)
#define RCC_CR_MSIRANGE_4                   (0x00000040)
#define RCC_CR_MSIRANGE_5                   (0x00000050)
#define RCC_CR_MSIRANGE_6                   (0x00000060)
#define RCC_CR_MSIRANGE_7                   (0x00000070)
#define RCC_CR_MSIRANGE_8                   (0x00000080)
#define RCC_CR_MSIRANGE_9                   (0x00000090)
#define RCC_CR_MSIRANGE_10                  (0x000000A0)
#define RCC_CR_MSIRANGE_11                  (0x000000B0)
#define RCC_CR_HSION                        (0x00000100)
#define RCC_CR_HSIKERON                     (0x00000200)
#define RCC_CR_HSIRDY                       (0x00000400)
#define RCC_CR_HSIASFS                      (0x00000800)
#define RCC_CR_HSEON                        (0x00010000)
#define RCC_CR_HSERDY                       (0x00020000)
#define RCC_CR_HSEBYP                       (0x00040000)
#define RCC_CR_CSSON                        (0x00080000)
#define RCC_CR_PLLON                        (0x01000000)
#define RCC_CR_PLLRDY                       (0x02000000)
#define RCC_CR_PLLSAI1ON                    (0x04000000)
#define RCC_CR_PLLSAI1RDY                   (0x08000000)

/*  Bit definition for RCC_ICSCR register  */
#define RCC_ICSCR_MSICAL                    (0x000000FF)
#define RCC_ICSCR_MSICAL_0                  (0x00000001)
#define RCC_ICSCR_MSICAL_1                  (0x00000002)
#define RCC_ICSCR_MSICAL_2                  (0x00000004)
#define RCC_ICSCR_MSICAL_3                  (0x00000008)
#define RCC_ICSCR_MSICAL_4                  (0x00000010)
#define RCC_ICSCR_MSICAL_5                  (0x00000020)
#define RCC_ICSCR_MSICAL_6                  (0x00000040)
#define RCC_ICSCR_MSICAL_7                  (0x00000080)
#define RCC_ICSCR_MSITRIM                   (0x0000FF00)
#define RCC_ICSCR_MSITRIM_0                 (0x00000100)
#define RCC_ICSCR_MSITRIM_1                 (0x00000200)
#define RCC_ICSCR_MSITRIM_2                 (0x00000400)
#define RCC_ICSCR_MSITRIM_3                 (0x00000800)
#define RCC_ICSCR_MSITRIM_4                 (0x00001000)
#define RCC_ICSCR_MSITRIM_5                 (0x00002000)
#define RCC_ICSCR_MSITRIM_6                 (0x00004000)
#define RCC_ICSCR_MSITRIM_7                 (0x00008000)
#define RCC_ICSCR_HSICAL                    (0x00FF0000)
#define RCC_ICSCR_HSICAL_0                  (0x00010000)
#define RCC_ICSCR_HSICAL_1                  (0x00020000)
#define RCC_ICSCR_HSICAL_2                  (0x00040000)
#define RCC_ICSCR_HSICAL_3                  (0x00080000)
#define RCC_ICSCR_HSICAL_4                  (0x00100000)
#define RCC_ICSCR_HSICAL_5                  (0x00200000)
#define RCC_ICSCR_HSICAL_6                  (0x00400000)
#define RCC_ICSCR_HSICAL_7                  (0x00800000)
#define RCC_ICSCR_HSITRIM                   (0x1F000000)
#define RCC_ICSCR_HSITRIM_0                 (0x01000000)
#define RCC_ICSCR_HSITRIM_1                 (0x02000000)
#define RCC_ICSCR_HSITRIM_2                 (0x04000000)
#define RCC_ICSCR_HSITRIM_3                 (0x08000000)
#define RCC_ICSCR_HSITRIM_4                 (0x10000000)

/*  Bit definition for RCC_CFGR register  */
#define RCC_CFGR_SW                         (0x00000003)
#define RCC_CFGR_SW_0                       (0x00000001)
#define RCC_CFGR_SW_1                       (0x00000002)
#define RCC_CFGR_SW_MSI                     (0x00000000)
#define RCC_CFGR_SW_HSI                     (0x00000001)
#define RCC_CFGR_SW_HSE                     (0x00000002)
#define RCC_CFGR_SW_PLL                     (0x00000003)
#define RCC_CFGR_SWS                        (0x0000000C)
#define RCC_CFGR_SWS_0                      (0x00000004)
#define RCC_CFGR_SWS_1                      (0x00000008)
#define RCC_CFGR_SWS_MSI                    (0x00000000)
#define RCC_CFGR_SWS_HSI                    (0x00000004)
#define RCC_CFGR_SWS_HSE                    (0x00000008)
#define RCC_CFGR_SWS_PLL                    (0x0000000C)
#define RCC_CFGR_HPRE                       (0x000000F0)
#define RCC_CFGR_HPRE_0                     (0x00000010)
#define RCC_CFGR_HPRE_1                     (0x00000020)
#define RCC_CFGR_HPRE_2                     (0x00000040)
#define RCC_CFGR_HPRE_3                     (0x00000080)
#define RCC_CFGR_HPRE_DIV1                  (0x00000000)
#define RCC_CFGR_HPRE_DIV2                  (0x00000080)
#define RCC_CFGR_HPRE_DIV4                  (0x00000090)
#define RCC_CFGR_HPRE_DIV8                  (0x000000A0)
#define RCC_CFGR_HPRE_DIV16                 (0x000000B0)
#define RCC_CFGR_HPRE_DIV64                 (0x000000C0)
#define RCC_CFGR_HPRE_DIV128                (0x000000D0)
#define RCC_CFGR_HPRE_DIV256                (0x000000E0)
#define RCC_CFGR_HPRE_DIV512                (0x000000F0)
#define RCC_CFGR_PPRE1                      (0x00000700)
#define RCC_CFGR_PPRE1_0                    (0x00000100)
#define RCC_CFGR_PPRE1_1                    (0x00000200)
#define RCC_CFGR_PPRE1_2                    (0x00000400)
#define RCC_CFGR_PPRE1_DIV1                 (0x00000000)
#define RCC_CFGR_PPRE1_DIV2                 (0x00000400)
#define RCC_CFGR_PPRE1_DIV4                 (0x00000500)
#define RCC_CFGR_PPRE1_DIV8                 (0x00000600)
#define RCC_CFGR_PPRE1_DIV16                (0x00000700)
#define RCC_CFGR_PPRE2                      (0x00003800)
#define RCC_CFGR_PPRE2_0                    (0x00000800)
#define RCC_CFGR_PPRE2_1                    (0x00001000)
#define RCC_CFGR_PPRE2_2                    (0x00002000)
#define RCC_CFGR_PPRE2_DIV1                 (0x00000000)
#define RCC_CFGR_PPRE2_DIV2                 (0x00002000)
#define RCC_CFGR_PPRE2_DIV4                 (0x00002800)
#define RCC_CFGR_PPRE2_DIV8                 (0x00003000)
#define RCC_CFGR_PPRE2_DIV16                (0x00003800)
#define RCC_CFGR_STOPWUCK                   (0x00008000)
#define RCC_CFGR_MCOSEL                     (0x07000000)
#define RCC_CFGR_MCOSEL_0                   (0x01000000)
#define RCC_CFGR_MCOSEL_1                   (0x02000000)
#define RCC_CFGR_MCOSEL_2                   (0x04000000)
#define RCC_CFGR_MCOPRE                     (0x70000000)
#define RCC_CFGR_MCOPRE_0                   (0x10000000)
#define RCC_CFGR_MCOPRE_1                   (0x20000000)
#define RCC_CFGR_MCOPRE_2                   (0x40000000)
#define RCC_CFGR_MCOPRE_DIV1                (0x00000000)
#define RCC_CFGR_MCOPRE_DIV2                (0x10000000)
#define RCC_CFGR_MCOPRE_DIV4                (0x20000000)
#define RCC_CFGR_MCOPRE_DIV8                (0x30000000)
#define RCC_CFGR_MCOPRE_DIV16               (0x40000000)

/*  Bit definition for RCC_PLLCFGR register  */
#define RCC_PLLCFGR_PLLSRC                  (0x00000003)
#define RCC_PLLCFGR_PLLSRC_MSI              (0x00000001)
#define RCC_PLLCFGR_PLLSRC_HSI              (0x00000002)
#define RCC_PLLCFGR_PLLSRC_HSE              (0x00000003)
#define RCC_PLLCFGR_PLLM                    (0x00000070)
#define RCC_PLLCFGR_PLLM_0                  (0x00000010)
#define RCC_PLLCFGR_PLLM_1                  (0x00000020)
#define RCC_PLLCFGR_PLLM_2                  (0x00000040)
#define RCC_PLLCFGR_PLLN                    (0x00007F00)
#define RCC_PLLCFGR_PLLN_0                  (0x00000100)
#define RCC_PLLCFGR_PLLN_1                  (0x00000200)
#define RCC_PLLCFGR_PLLN_2                  (0x00000400)
#define RCC_PLLCFGR_PLLN_3                  (0x00000800)
#define RCC_PLLCFGR_PLLN_4                  (0x00001000)
#define RCC_PLLCFGR_PLLN_5                  (0x00002000)
#define RCC_PLLCFGR_PLLN_6                  (0x00004000)
#define RCC_PLLCFGR_PLLPEN                  (0x00010000)
#define RCC_PLLCFGR_PLLP                    (0x00020000)
#define RCC_PLLCFGR_PLLQEN                  (0x00100000)
#define RCC_PLLCFGR_PLLQ                    (0x00600000)
#define RCC_PLLCFGR_PLLQ_0                  (0x00200000)
#define RCC_PLLCFGR_PLLQ_1                  (0x00400000)
#define RCC_PLLCFGR_PLLREN                  (0x01000000)
#define RCC_PLLCFGR_PLLR                    (0x06000000)
#define RCC_PLLCFGR_PLLR_0                  (0x02000000)
#define RCC_PLLCFGR_PLLR_1                  (0x04000000)
#define RCC_PLLCFGR_PLLPDIV                 (0xF8000000)
#define RCC_PLLCFGR_PLLPDIV_0               (0x08000000)
#define RCC_PLLCFGR_PLLPDIV_1               (0x10000000)
#define RCC_PLLCFGR_PLLPDIV_2               (0x20000000)
#define RCC_PLLCFGR_PLLPDIV_3               (0x40000000)
#define RCC_PLLCFGR_PLLPDIV_4               (0x80000000)

/*  Bit definition for RCC_PLLSAI1CFGR register  **/
#define RCC_PLLSAI1CFGR_PLLSAI1N            (0x00007F00)
#define RCC_PLLSAI1CFGR_PLLSAI1N_0          (0x00000100)
#define RCC_PLLSAI1CFGR_PLLSAI1N_1          (0x00000200)
#define RCC_PLLSAI1CFGR_PLLSAI1N_2          (0x00000400)
#define RCC_PLLSAI1CFGR_PLLSAI1N_3          (0x00000800)
#define RCC_PLLSAI1CFGR_PLLSAI1N_4          (0x00001000)
#define RCC_PLLSAI1CFGR_PLLSAI1N_5          (0x00002000)
#define RCC_PLLSAI1CFGR_PLLSAI1N_6          (0x00004000)
#define RCC_PLLSAI1CFGR_PLLSAI1PEN          (0x00010000)
#define RCC_PLLSAI1CFGR_PLLSAI1P            (0x00020000)
#define RCC_PLLSAI1CFGR_PLLSAI1QEN          (0x00100000)
#define RCC_PLLSAI1CFGR_PLLSAI1Q            (0x00600000)
#define RCC_PLLSAI1CFGR_PLLSAI1Q_0          (0x00200000)
#define RCC_PLLSAI1CFGR_PLLSAI1Q_1          (0x00400000)
#define RCC_PLLSAI1CFGR_PLLSAI1REN          (0x01000000)
#define RCC_PLLSAI1CFGR_PLLSAI1R            (0x06000000)
#define RCC_PLLSAI1CFGR_PLLSAI1R_0          (0x02000000)
#define RCC_PLLSAI1CFGR_PLLSAI1R_1          (0x04000000)
#define RCC_PLLSAI1CFGR_PLLSAI1PDIV         (0xF8000000)
#define RCC_PLLSAI1CFGR_PLLSAI1PDIV_0       (0x08000000)
#define RCC_PLLSAI1CFGR_PLLSAI1PDIV_1       (0x10000000)
#define RCC_PLLSAI1CFGR_PLLSAI1PDIV_2       (0x20000000)
#define RCC_PLLSAI1CFGR_PLLSAI1PDIV_3       (0x40000000)
#define RCC_PLLSAI1CFGR_PLLSAI1PDIV_4       (0x80000000)

/*  Bit definition for RCC_CIER register  */
#define RCC_CIER_LSIRDYIE                   (0x00000001)
#define RCC_CIER_LSERDYIE                   (0x00000002)
#define RCC_CIER_MSIRDYIE                   (0x00000004)
#define RCC_CIER_HSIRDYIE                   (0x00000008)
#define RCC_CIER_HSERDYIE                   (0x00000010)
#define RCC_CIER_PLLRDYIE                   (0x00000020)
#define RCC_CIER_PLLSAI1RDYIE               (0x00000040)
#define RCC_CIER_PLLSAI2RDYIE               (0x00000080)
#define RCC_CIER_LSECSSIE                   (0x00000200)
#define RCC_CIER_HSI48RDYIE                 (0x00000400)

/*  Bit definition for RCC_CIFR register  */
#define RCC_CIFR_LSIRDYF                    (0x00000001)
#define RCC_CIFR_LSERDYF                    (0x00000002)
#define RCC_CIFR_MSIRDYF                    (0x00000004)
#define RCC_CIFR_HSIRDYF                    (0x00000008)
#define RCC_CIFR_HSERDYF                    (0x00000010)
#define RCC_CIFR_PLLRDYF                    (0x00000020)
#define RCC_CIFR_PLLSAI1RDYF                (0x00000040)
#define RCC_CIFR_PLLSAI2RDYF                (0x00000080)
#define RCC_CIFR_CSSF                       (0x00000100)
#define RCC_CIFR_LSECSSF                    (0x00000200)
#define RCC_CIFR_HSI48RDYF                  (0x00000400)

/*  Bit definition for RCC_CICR register  */
#define RCC_CICR_LSIRDYC                    (0x00000001)
#define RCC_CICR_LSERDYC                    (0x00000002)
#define RCC_CICR_MSIRDYC                    (0x00000004)
#define RCC_CICR_HSIRDYC                    (0x00000008)
#define RCC_CICR_HSERDYC                    (0x00000010)
#define RCC_CICR_PLLRDYC                    (0x00000020)
#define RCC_CICR_PLLSAI1RDYC                (0x00000040)
#define RCC_CICR_PLLSAI2RDYC                (0x00000080)
#define RCC_CICR_CSSC                       (0x00000100)
#define RCC_CICR_LSECSSC                    (0x00000200)
#define RCC_CICR_HSI48RDYC                  (0x00000400)

/*  Bit definition for RCC_AHB1RSTR register  */
#define RCC_AHB1RSTR_DMA1RST                (0x00000001)
#define RCC_AHB1RSTR_DMA2RST                (0x00000002)
#define RCC_AHB1RSTR_FLASHRST               (0x00000100)
#define RCC_AHB1RSTR_CRCRST                 (0x00001000)
#define RCC_AHB1RSTR_TSCRST                 (0x00010000)

/*  Bit definition for RCC_AHB2RSTR register  */
#define RCC_AHB2RSTR_GPIOARST               (0x00000001)
#define RCC_AHB2RSTR_GPIOBRST               (0x00000002)
#define RCC_AHB2RSTR_GPIOCRST               (0x00000004)
#define RCC_AHB2RSTR_GPIODRST               (0x00000008)
#define RCC_AHB2RSTR_GPIOERST               (0x00000010)
#define RCC_AHB2RSTR_GPIOFRST               (0x00000020)
#define RCC_AHB2RSTR_GPIOGRST               (0x00000040)
#define RCC_AHB2RSTR_GPIOHRST               (0x00000080)
#define RCC_AHB2RSTR_OTGFSRST               (0x00001000)
#define RCC_AHB2RSTR_ADCRST                 (0x00002000)
#define RCC_AHB2RSTR_RNGRST                 (0x00040000)

/*  Bit definition for RCC_AHB3RSTR register  */
#define RCC_AHB3RSTR_FMCRST                 (0x00000001)
#define RCC_AHB3RSTR_QSPIRST                (0x00000100)

/*  Bit definition for RCC_APB1RSTR1 register  */
#define RCC_APB1RSTR1_TIM2RST               (0x00000001)
#define RCC_APB1RSTR1_TIM3RST               (0x00000002)
#define RCC_APB1RSTR1_TIM4RST               (0x00000004)
#define RCC_APB1RSTR1_TIM5RST               (0x00000008)
#define RCC_APB1RSTR1_TIM6RST               (0x00000010)
#define RCC_APB1RSTR1_TIM7RST               (0x00000020)
#define RCC_APB1RSTR1_LCDRST                (0x00000200)
#define RCC_APB1RSTR1_SPI2RST               (0x00004000)
#define RCC_APB1RSTR1_SPI3RST               (0x00008000)
#define RCC_APB1RSTR1_USART2RST             (0x00020000)
#define RCC_APB1RSTR1_USART3RST             (0x00040000)
#define RCC_APB1RSTR1_UART4RST              (0x00080000)
#define RCC_APB1RSTR1_UART5RST              (0x00100000)
#define RCC_APB1RSTR1_I2C1RST               (0x00200000)
#define RCC_APB1RSTR1_I2C2RST               (0x00400000)
#define RCC_APB1RSTR1_I2C3RST               (0x00800000)
#define RCC_APB1RSTR1_CAN1RST               (0x02000000)
#define RCC_APB1RSTR1_USBRST                (0x04000000)
#define RCC_APB1RSTR1_PWRRST                (0x10000000)
#define RCC_APB1RSTR1_DAC1RST               (0x20000000)
#define RCC_APB1RSTR1_OPAMPRST              (0x40000000)
#define RCC_APB1RSTR1_LPTIM1RST             (0x80000000)

/*  Bit definition for RCC_APB1RSTR2 register  */
#define RCC_APB1RSTR2_LPUART1RST            (0x00000001)
#define RCC_APB1RSTR2_I2C41RST              (0x00000002)
#define RCC_APB1RSTR2_SWPMI1RST             (0x00000004)
#define RCC_APB1RSTR2_LPTIM2RST             (0x00000020)

/*  Bit definition for RCC_APB2RSTR register  */
#define RCC_APB2RSTR_SYSCFGRST              (0x00000001)
#define RCC_APB2RSTR_SDMMC1RST              (0x00000400)
#define RCC_APB2RSTR_TIM1RST                (0x00000800)
#define RCC_APB2RSTR_SPI1RST                (0x00001000)
#define RCC_APB2RSTR_USART1RST              (0x00004000)
#define RCC_APB2RSTR_TIM15RST               (0x00010000)
#define RCC_APB2RSTR_TIM16RST               (0x00020000)
#define RCC_APB2RSTR_SAI1RST                (0x00200000)
#define RCC_APB2RSTR_DFSDMRST               (0x01000000)

/*  Bit definition for RCC_AHB1ENR register  */
#define RCC_AHB1ENR_DMA1EN                  (0x00000001)
#define RCC_AHB1ENR_DMA2EN                  (0x00000002)
#define RCC_AHB1ENR_FLASHEN                 (0x00000100)
#define RCC_AHB1ENR_CRCEN                   (0x00001000)
#define RCC_AHB1ENR_TSCEN                   (0x00010000)

/*  Bit definition for RCC_AHB2ENR register  */
#define RCC_AHB2ENR_GPIOAEN                 (0x00000001)
#define RCC_AHB2ENR_GPIOBEN                 (0x00000002)
#define RCC_AHB2ENR_GPIOCEN                 (0x00000004)
#define RCC_AHB2ENR_GPIODEN                 (0x00000008)
#define RCC_AHB2ENR_GPIOEEN                 (0x00000010)
#define RCC_AHB2ENR_GPIOFEN                 (0x00000020)
#define RCC_AHB2ENR_GPIOGEN                 (0x00000040)
#define RCC_AHB2ENR_GPIOHEN                 (0x00000080)
#define RCC_AHB2ENR_OTGFSEN                 (0x00001000)
#define RCC_AHB2ENR_ADCEN                   (0x00002000)
#define RCC_AHB2ENR_RNGEN                   (0x00040000)

/*  Bit definition for RCC_AHB3ENR register  */
#define RCC_AHB3ENR_FMCEN                   (0x00000001)
#define RCC_AHB3ENR_QSPIEN                  (0x00000100)

/*  Bit definition for RCC_APB1ENR1 register  */
#define RCC_APB1ENR1_TIM2EN                 (0x00000001)
#define RCC_APB1ENR1_TIM3EN                 (0x00000002)
#define RCC_APB1ENR1_TIM4EN                 (0x00000004)
#define RCC_APB1ENR1_TIM5EN                 (0x00000008)
#define RCC_APB1ENR1_TIM6EN                 (0x00000010)
#define RCC_APB1ENR1_TIM7EN                 (0x00000020)
#define RCC_APB1ENR1_LCDEN                  (0x00000200)
#define RCC_APB1ENR1_WWDGEN                 (0x00000800)
#define RCC_APB1ENR1_SPI2EN                 (0x00004000)
#define RCC_APB1ENR1_SPI3EN                 (0x00008000)
#define RCC_APB1ENR1_USART2EN               (0x00020000)
#define RCC_APB1ENR1_USART3EN               (0x00040000)
#define RCC_APB1ENR1_UART4EN                (0x00080000)
#define RCC_APB1ENR1_UART5EN                (0x00100000)
#define RCC_APB1ENR1_I2C1EN                 (0x00200000)
#define RCC_APB1ENR1_I2C2EN                 (0x00400000)
#define RCC_APB1ENR1_I2C3EN                 (0x00800000)
#define RCC_APB1ENR1_CAN1EN                 (0x02000000)
#define RCC_APB1ENR1_USBEN                  (0x04000000)
#define RCC_APB1ENR1_PWREN                  (0x10000000)
#define RCC_APB1ENR1_DAC1EN                 (0x20000000)
#define RCC_APB1ENR1_OPAMPEN                (0x40000000)
#define RCC_APB1ENR1_LPTIM1EN               (0x80000000)

/*  Bit definition for RCC_APB1RSTR2 register  */
#define RCC_APB1ENR2_LPUART1EN              (0x00000001)
#define RCC_APB1ENR2_I2C4EN                 (0x00000002)
#define RCC_APB1ENR2_SWPMI1EN               (0x00000004)
#define RCC_APB1ENR2_LPTIM2EN               (0x00000020)

/*  Bit definition for RCC_APB2ENR register  */
#define RCC_APB2ENR_SYSCFGEN                (0x00000001)
#define RCC_APB2ENR_FWEN                    (0x00000080)
#define RCC_APB2ENR_SDMMC1EN                (0x00000400)
#define RCC_APB2ENR_TIM1EN                  (0x00000800)
#define RCC_APB2ENR_SPI1EN                  (0x00001000)
#define RCC_APB2ENR_TIM8EN                  (0x00002000)
#define RCC_APB2ENR_USART1EN                (0x00004000)
#define RCC_APB2ENR_TIM15EN                 (0x00010000)
#define RCC_APB2ENR_TIM16EN                 (0x00020000)
#define RCC_APB2ENR_SAI1EN                  (0x00200000)
#define RCC_APB2ENR_DFSDMEN                 (0x01000000)

/*  Bit definition for RCC_AHB1SMENR register  */
#define RCC_AHB1SMENR_DMA1SMEN              (0x00000001)
#define RCC_AHB1SMENR_DMA2SMEN              (0x00000002)
#define RCC_AHB1SMENR_FLASHSMEN             (0x00000100)
#define RCC_AHB1SMENR_SRAM1SMEN             (0x00000200)
#define RCC_AHB1SMENR_CRCSMEN               (0x00001000)
#define RCC_AHB1SMENR_TSCSMEN               (0x00010000)

/*  Bit definition for RCC_AHB2SMENR register  */
#define RCC_AHB2SMENR_GPIOASMEN             (0x00000001)
#define RCC_AHB2SMENR_GPIOBSMEN             (0x00000002)
#define RCC_AHB2SMENR_GPIOCSMEN             (0x00000004)
#define RCC_AHB2SMENR_GPIODSMEN             (0x00000008)
#define RCC_AHB2SMENR_GPIOESMEN             (0x00000010)
#define RCC_AHB2SMENR_GPIOFSMEN             (0x00000020)
#define RCC_AHB2SMENR_GPIOGSMEN             (0x00000040)
#define RCC_AHB2SMENR_GPIOHSMEN             (0x00000080)
#define RCC_AHB2SMENR_SRAM2SMEN             (0x00000200)
#define RCC_AHB2SMENR_OTGFSSMEN             (0x00001000)
#define RCC_AHB2SMENR_ADCSMEN               (0x00002000)
#define RCC_AHB2SMENR_RNGSMEN               (0x00040000)

/*  Bit definition for RCC_AHB3SMENR register  */
#define RCC_AHB3SMENR_FMCSMEN               (0x00000001)
#define RCC_AHB3SMENR_QSPISMEN              (0x00000100)

/*  Bit definition for RCC_APB1SMENR1 register  */
#define RCC_APB1SMENR1_TIM2SMEN             (0x00000001)
#define RCC_APB1SMENR1_TIM3SMEN             (0x00000002)
#define RCC_APB1SMENR1_TIM4SMEN             (0x00000004)
#define RCC_APB1SMENR1_TIM5SMEN             (0x00000008)
#define RCC_APB1SMENR1_TIM6SMEN             (0x00000010)
#define RCC_APB1SMENR1_TIM7SMEN             (0x00000020)
#define RCC_APB1SMENR1_LCDSMEN              (0x00000200)
#define RCC_APB1SMENR1_WWDGSMEN             (0x00000800)
#define RCC_APB1SMENR1_SPI2SMEN             (0x00004000)
#define RCC_APB1SMENR1_SPI3SMEN             (0x00008000)
#define RCC_APB1SMENR1_USART2SMEN           (0x00020000)
#define RCC_APB1SMENR1_USART3SMEN           (0x00040000)
#define RCC_APB1SMENR1_UART4SMEN            (0x00080000)
#define RCC_APB1SMENR1_UART5SMEN            (0x00100000)
#define RCC_APB1SMENR1_I2C1SMEN             (0x00200000)
#define RCC_APB1SMENR1_I2C2SMEN             (0x00400000)
#define RCC_APB1SMENR1_I2C3SMEN             (0x00800000)
#define RCC_APB1SMENR1_CAN1SMEN             (0x02000000)
#define RCC_APB1SMENR1_USBFSSMEN            (0x04000000)
#define RCC_APB1SMENR1_PWRSMEN              (0x10000000)
#define RCC_APB1SMENR1_DAC1SMEN             (0x20000000)
#define RCC_APB1SMENR1_OPAMPSMEN            (0x40000000)
#define RCC_APB1SMENR1_LPTIM1SMEN           (0x80000000)

/*  Bit definition for RCC_APB1SMENR2 register  */
#define RCC_APB1SMENR2_LPUART1SMEN          (0x00000001)
#define RCC_APB1SMENR2_I2C4SMEN             (0x00000002)
#define RCC_APB1SMENR2_SWPMI1SMEN           (0x00000004)
#define RCC_APB1SMENR2_LPTIM2SMEN           (0x00000020)

/*  Bit definition for RCC_APB2SMENR register  */
#define RCC_APB2SMENR_SYSCFGSMEN            (0x00000001)
#define RCC_APB2SMENR_SDMMC1SMEN            (0x00000400)
#define RCC_APB2SMENR_TIM1SMEN              (0x00000800)
#define RCC_APB2SMENR_SPI1SMEN              (0x00001000)
#define RCC_APB2SMENR_TIM8SMEN              (0x00002000)
#define RCC_APB2SMENR_USART1SMEN            (0x00004000)
#define RCC_APB2SMENR_TIM15SMEN             (0x00010000)
#define RCC_APB2SMENR_TIM16SMEN             (0x00020000)
#define RCC_APB2SMENR_SAI1SMEN              (0x00200000)
#define RCC_APB2SMENR_DFSDMSMEN             (0x01000000)

/*  Bit definition for RCC_CCIPR register  */
#define RCC_CCIPR_USART1SEL                 (0x00000003)
#define RCC_CCIPR_USART1SEL_0               (0x00000001)
#define RCC_CCIPR_USART1SEL_1               (0x00000002)
#define RCC_CCIPR_USART2SEL                 (0x0000000C)
#define RCC_CCIPR_USART2SEL_0               (0x00000004)
#define RCC_CCIPR_USART2SEL_1               (0x00000008)
#define RCC_CCIPR_USART3SEL                 (0x00000030)
#define RCC_CCIPR_USART3SEL_0               (0x00000010)
#define RCC_CCIPR_USART3SEL_1               (0x00000020)
#define RCC_CCIPR_UART4SEL                  (0x000000C0)
#define RCC_CCIPR_UART4SEL_0                (0x00000040)
#define RCC_CCIPR_UART4SEL_1                (0x00000080)
#define RCC_CCIPR_UART5SEL                  (0x00000300)
#define RCC_CCIPR_UART5SEL_0                (0x00000100)
#define RCC_CCIPR_UART5SEL_1                (0x00000200)
#define RCC_CCIPR_LPUART1SEL                (0x00000C00)
#define RCC_CCIPR_LPUART1SEL_0              (0x00000400)
#define RCC_CCIPR_LPUART1SEL_1              (0x00000800)
#define RCC_CCIPR_I2C1SEL                   (0x00003000)
#define RCC_CCIPR_I2C1SEL_0                 (0x00001000)
#define RCC_CCIPR_I2C1SEL_1                 (0x00002000)
#define RCC_CCIPR_I2C2SEL                   (0x0000C000)
#define RCC_CCIPR_I2C2SEL_0                 (0x00004000)
#define RCC_CCIPR_I2C2SEL_1                 (0x00008000)
#define RCC_CCIPR_I2C3SEL                   (0x00030000)
#define RCC_CCIPR_I2C3SEL_0                 (0x00010000)
#define RCC_CCIPR_I2C3SEL_1                 (0x00020000)
#define RCC_CCIPR_LPTIM1SEL                 (0x000C0000)
#define RCC_CCIPR_LPTIM1SEL_0               (0x00040000)
#define RCC_CCIPR_LPTIM1SEL_1               (0x00080000)
#define RCC_CCIPR_LPTIM2SEL                 (0x00300000)
#define RCC_CCIPR_LPTIM2SEL_0               (0x00100000)
#define RCC_CCIPR_LPTIM2SEL_1               (0x00200000)
#define RCC_CCIPR_SAI1SEL                   (0x00C00000)
#define RCC_CCIPR_SAI1SEL_0                 (0x00400000)
#define RCC_CCIPR_SAI1SEL_1                 (0x00800000)
#define RCC_CCIPR_CLK48SEL                  (0x0C000000)
#define RCC_CCIPR_CLK48SEL_0                (0x04000000)
#define RCC_CCIPR_CLK48SEL_1                (0x08000000)
#define RCC_CCIPR_ADCSEL                    (0x30000000)
#define RCC_CCIPR_ADCSEL_0                  (0x10000000)
#define RCC_CCIPR_ADCSEL_1                  (0x20000000)
#define RCC_CCIPR_SWPMI1SEL                 (0x40000000)
#define RCC_CCIPR_DFSDMSEL                  (0x80000000)

/*  Bit definition for RCC_BDCR register  */
#define RCC_BDCR_LSEON                      (0x00000001)
#define RCC_BDCR_LSERDY                     (0x00000002)
#define RCC_BDCR_LSEBYP                     (0x00000004)
#define RCC_BDCR_LSEDRV                     (0x00000018)
#define RCC_BDCR_LSEDRV_0                   (0x00000008)
#define RCC_BDCR_LSEDRV_1                   (0x00000010)
#define RCC_BDCR_LSECSSON                   (0x00000020)
#define RCC_BDCR_LSECSSD                    (0x00000040)
#define RCC_BDCR_RTCSEL                     (0x00000300)
#define RCC_BDCR_RTCSEL_0                   (0x00000100)
#define RCC_BDCR_RTCSEL_1                   (0x00000200)
#define RCC_BDCR_RTCEN                      (0x00008000)
#define RCC_BDCR_BDRST                      (0x00010000)
#define RCC_BDCR_LSCOEN                     (0x01000000)
#define RCC_BDCR_LSCOSEL                    (0x02000000)

/*  Bit definition for RCC_CSR register  */
#define RCC_CSR_LSION                       (0x00000001)
#define RCC_CSR_LSIRDY                      (0x00000002)
#define RCC_CSR_MSISRANGE                   (0x00000F00)
#define RCC_CSR_MSISRANGE_1                 (0x00000400)
#define RCC_CSR_MSISRANGE_2                 (0x00000500)
#define RCC_CSR_MSISRANGE_4                 (0x00000600)
#define RCC_CSR_MSISRANGE_8                 (0x00000700)
#define RCC_CSR_RMVF                        (0x00800000)
#define RCC_CSR_FWRSTF                      (0x01000000)
#define RCC_CSR_OBLRSTF                     (0x02000000)
#define RCC_CSR_PINRSTF                     (0x04000000)
#define RCC_CSR_BORRSTF                     (0x08000000)
#define RCC_CSR_SFTRSTF                     (0x10000000)
#define RCC_CSR_IWDGRSTF                    (0x20000000)
#define RCC_CSR_WWDGRSTF                    (0x40000000)
#define RCC_CSR_LPWRRSTF                    (0x80000000)

/*  Bit definition for RCC_CRCCR register  */
#define RCC_CRRCR_HSI48ON                   (0x00000001)
#define RCC_CRRCR_HSI48RDY                  (0x00000002)
#define RCC_CRRCR_HSI48CAL                  (0x00007F80)

/*  Bit definition for RCC_CCIPR2 register  */
#define RCC_CCIPR2_I2C4SEL                  (0x00000003)
#define RCC_CCIPR2_I2C4SEL_0                (0x00000001)
#define RCC_CCIPR2_I2C4SEL_1                (0x00000002)

#endif /* STM32L433_RCC_H_ */
