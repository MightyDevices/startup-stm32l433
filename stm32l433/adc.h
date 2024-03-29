/**
 * @file adc.h
 * 
 * @date 2019-09-20
 * @author twatorowski (tw@mightydevices.com)
 * 
 * @brief STM32 Defines: ADC
 */

#ifndef STM32L433_ADC_H_
#define STM32L433_ADC_H_

#include "stm32l433/stm32l433.h"

/* register base address */
#define ADC1_BASE                           (0x50040000)
#define ADC_BASE                            (0x50040300)

/* register base */
#define ADC                                 ((adc_com_t *)ADC_BASE)
#define ADC1                                ((adc_t *)ADC1_BASE)

/* registers */
typedef struct {
    reg32_t ISR;
    reg32_t IER;
    reg32_t CR;
    reg32_t CFGR;
    reg32_t CFGR2;
    reg32_t SMPR1;
    reg32_t SMPR2;
    reg32_t RESERVED1;
    reg32_t TR1;
    reg32_t TR2;
    reg32_t TR3;
    reg32_t RESERVED2;
    reg32_t SQR1;
    reg32_t SQR2;
    reg32_t SQR3;
    reg32_t SQR4;
    reg32_t DR;
    reg32_t RESERVED3;
    reg32_t RESERVED4;
    reg32_t JSQR;
    reg32_t RESERVED5[4];
    reg32_t OFR1;
    reg32_t OFR2;
    reg32_t OFR3;
    reg32_t OFR4;
    reg32_t RESERVED6[4];
    reg32_t JDR1;
    reg32_t JDR2;
    reg32_t JDR3;
    reg32_t JDR4;
    reg32_t RESERVED7[4];
    reg32_t AWD2CR;
    reg32_t AWD3CR;
    reg32_t RESERVED8;
    reg32_t RESERVED9;
    reg32_t DIFSEL;
    reg32_t CALFACT;
} PACKED ALIGNED(4) adc_t;

/*  Bit definition for ADC_ISR register  */
#define ADC_ISR_ADRDY                       (0x00000001)
#define ADC_ISR_EOSMP                       (0x00000002)
#define ADC_ISR_EOC                         (0x00000004)
#define ADC_ISR_EOS                         (0x00000008)
#define ADC_ISR_OVR                         (0x00000010)
#define ADC_ISR_JEOC                        (0x00000020)
#define ADC_ISR_JEOS                        (0x00000040)
#define ADC_ISR_AWD1                        (0x00000080)
#define ADC_ISR_AWD2                        (0x00000100)
#define ADC_ISR_AWD3                        (0x00000200)
#define ADC_ISR_JQOVF                       (0x00000400)

/*  Bit definition for ADC_IER register  */
#define ADC_IER_ADRDYIE                     (0x00000001)
#define ADC_IER_EOSMPIE                     (0x00000002)
#define ADC_IER_EOCIE                       (0x00000004)
#define ADC_IER_EOSIE                       (0x00000008)
#define ADC_IER_OVRIE                       (0x00000010)
#define ADC_IER_JEOCIE                      (0x00000020)
#define ADC_IER_JEOSIE                      (0x00000040)
#define ADC_IER_AWD1IE                      (0x00000080)
#define ADC_IER_AWD2IE                      (0x00000100)
#define ADC_IER_AWD3IE                      (0x00000200)
#define ADC_IER_JQOVFIE                     (0x00000400)

/*  Bit definition for ADC_CR register  */
#define ADC_CR_ADEN                         (0x00000001)
#define ADC_CR_ADDIS                        (0x00000002)
#define ADC_CR_ADSTART                      (0x00000004)
#define ADC_CR_JADSTART                     (0x00000008)
#define ADC_CR_ADSTP                        (0x00000010)
#define ADC_CR_JADSTP                       (0x00000020)
#define ADC_CR_ADVREGEN                     (0x10000000)
#define ADC_CR_DEEPPWD                      (0x20000000)
#define ADC_CR_ADCALDIF                     (0x40000000)
#define ADC_CR_ADCAL                        (0x80000000)

/*  Bit definition for ADC_CFGR register  */
#define ADC_CFGR_DMAEN                      (0x00000001)
#define ADC_CFGR_DMACFG                     (0x00000002)
#define ADC_CFGR_DFSDMCFG                   (0x00000004)
#define ADC_CFGR_RES                        (0x00000018)
#define ADC_CFGR_RES_0                      (0x00000008)
#define ADC_CFGR_RES_1                      (0x00000010)
#define ADC_CFGR_ALIGN                      (0x00000020)
#define ADC_CFGR_EXTSEL                     (0x000003C0)
#define ADC_CFGR_EXTSEL_0                   (0x00000040)
#define ADC_CFGR_EXTSEL_1                   (0x00000080)
#define ADC_CFGR_EXTSEL_2                   (0x00000100)
#define ADC_CFGR_EXTSEL_3                   (0x00000200)
#define ADC_CFGR_EXTSEL_TIM1_CC1            (0x00000000)
#define ADC_CFGR_EXTSEL_TIM1_CC2            (0x00000040)
#define ADC_CFGR_EXTSEL_TIM1_CC3            (0x00000080)
#define ADC_CFGR_EXTSEL_TIM1_CC4            (0x000000C0)
#define ADC_CFGR_EXTSEL_TIM3_TRGO           (0x00000100)
#define ADC_CFGR_EXTSEL_TIM4_CC4            (0x00000140)
#define ADC_CFGR_EXTSEL_EXTI11              (0x00000180)
#define ADC_CFGR_EXTSEL_TIM8_TRGO1          (0x000001C0)
#define ADC_CFGR_EXTSEL_TIM8_TRGO2          (0x00000200)
#define ADC_CFGR_EXTSEL_TIM1_TRGO1          (0x00000240)
#define ADC_CFGR_EXTSEL_TIM1_TRGO2          (0x00000280)
#define ADC_CFGR_EXTSEL_TIM2_TRGO           (0x000002C0)
#define ADC_CFGR_EXTSEL_TIM4_TRGO           (0x00000300)
#define ADC_CFGR_EXTSEL_TIM6_TRGO           (0x00000340)
#define ADC_CFGR_EXTSEL_TIM15_TRGO          (0x00000380)
#define ADC_CFGR_EXTSEL_TIM3_CC4            (0x000003C0)
#define ADC_CFGR_EXTEN                      (0x00000C00)
#define ADC_CFGR_EXTEN_0                    (0x00000400)
#define ADC_CFGR_EXTEN_1                    (0x00000800)
#define ADC_CFGR_EXTEN_DIS                  (0x00000000)
#define ADC_CFGR_EXTEN_RE                   (0x00000400)
#define ADC_CFGR_EXTEN_FE                   (0x00000800)
#define ADC_CFGR_EXTEN_RE_FE                (0x00000C00)
#define ADC_CFGR_OVRMOD                     (0x00001000)
#define ADC_CFGR_CONT                       (0x00002000)
#define ADC_CFGR_AUTDLY                     (0x00004000)
#define ADC_CFGR_DISCEN                     (0x00010000)
#define ADC_CFGR_DISCNUM                    (0x000E0000)
#define ADC_CFGR_DISCNUM_0                  (0x00020000)
#define ADC_CFGR_DISCNUM_1                  (0x00040000)
#define ADC_CFGR_DISCNUM_2                  (0x00080000)
#define ADC_CFGR_JDISCEN                    (0x00100000)
#define ADC_CFGR_JQM                        (0x00200000)
#define ADC_CFGR_AWD1SGL                    (0x00400000)
#define ADC_CFGR_AWD1EN                     (0x00800000)
#define ADC_CFGR_JAWD1EN                    (0x01000000)
#define ADC_CFGR_JAUTO                      (0x02000000)
#define ADC_CFGR_AWD1CH                     (0x7C000000)
#define ADC_CFGR_AWD1CH_0                   (0x04000000)
#define ADC_CFGR_AWD1CH_1                   (0x08000000)
#define ADC_CFGR_AWD1CH_2                   (0x10000000)
#define ADC_CFGR_AWD1CH_3                   (0x20000000)
#define ADC_CFGR_AWD1CH_4                   (0x40000000)
#define ADC_CFGR_JQDIS                      (0x80000000)

/*  Bit definition for ADC_CFGR2 register  */
#define ADC_CFGR2_ROVSE                     (0x00000001)
#define ADC_CFGR2_JOVSE                     (0x00000002)
#define ADC_CFGR2_OVSR                      (0x0000001C)
#define ADC_CFGR2_OVSR_0                    (0x00000004)
#define ADC_CFGR2_OVSR_1                    (0x00000008)
#define ADC_CFGR2_OVSR_2                    (0x00000010)
#define ADC_CFGR2_OVSS                      (0x000001E0)
#define ADC_CFGR2_OVSS_0                    (0x00000020)
#define ADC_CFGR2_OVSS_1                    (0x00000040)
#define ADC_CFGR2_OVSS_2                    (0x00000080)
#define ADC_CFGR2_OVSS_3                    (0x00000100)
#define ADC_CFGR2_TROVS                     (0x00000200)
#define ADC_CFGR2_ROVSM                     (0x00000400)

/*  Bit definition for ADC_SMPR1 register  */
#define ADC_SMPR1_SMP0                      (0x00000007)
#define ADC_SMPR1_SMP0_0                    (0x00000001)
#define ADC_SMPR1_SMP0_1                    (0x00000002)
#define ADC_SMPR1_SMP0_2                    (0x00000004)
#define ADC_SMPR1_SMP0_2CLK5                (0x00000000)
#define ADC_SMPR1_SMP0_6CLK5                (0x00000001)
#define ADC_SMPR1_SMP0_12CLK5               (0x00000002)
#define ADC_SMPR1_SMP0_24CLK5               (0x00000003)
#define ADC_SMPR1_SMP0_47CLK5               (0x00000004)
#define ADC_SMPR1_SMP0_92CLK5               (0x00000005)
#define ADC_SMPR1_SMP0_247CLK5              (0x00000006)
#define ADC_SMPR1_SMP0_640CLK5              (0x00000007)
#define ADC_SMPR1_SMP1                      (0x00000038)
#define ADC_SMPR1_SMP1_0                    (0x00000008)
#define ADC_SMPR1_SMP1_1                    (0x00000010)
#define ADC_SMPR1_SMP1_2                    (0x00000020)
#define ADC_SMPR1_SMP1_2CLK5                (0x00000000)
#define ADC_SMPR1_SMP1_6CLK5                (0x00000008)
#define ADC_SMPR1_SMP1_12CLK5               (0x00000010)
#define ADC_SMPR1_SMP1_24CLK5               (0x00000018)
#define ADC_SMPR1_SMP1_47CLK5               (0x00000020)
#define ADC_SMPR1_SMP1_92CLK5               (0x00000028)
#define ADC_SMPR1_SMP1_247CLK5              (0x00000030)
#define ADC_SMPR1_SMP1_640CLK5              (0x00000038)
#define ADC_SMPR1_SMP2                      (0x000001C0)
#define ADC_SMPR1_SMP2_0                    (0x00000040)
#define ADC_SMPR1_SMP2_1                    (0x00000080)
#define ADC_SMPR1_SMP2_2                    (0x00000100)
#define ADC_SMPR1_SMP2_2CLK5                (0x00000000)
#define ADC_SMPR1_SMP2_6CLK5                (0x00000040)
#define ADC_SMPR1_SMP2_12CLK5               (0x00000080)
#define ADC_SMPR1_SMP2_24CLK5               (0x000000C0)
#define ADC_SMPR1_SMP2_47CLK5               (0x00000100)
#define ADC_SMPR1_SMP2_92CLK5               (0x00000140)
#define ADC_SMPR1_SMP2_247CLK5              (0x00000180)
#define ADC_SMPR1_SMP2_640CLK5              (0x000001C0)
#define ADC_SMPR1_SMP3                      (0x00000E00)
#define ADC_SMPR1_SMP3_0                    (0x00000200)
#define ADC_SMPR1_SMP3_1                    (0x00000400)
#define ADC_SMPR1_SMP3_2                    (0x00000800)
#define ADC_SMPR1_SMP3_2CLK5                (0x00000000)
#define ADC_SMPR1_SMP3_6CLK5                (0x00000200)
#define ADC_SMPR1_SMP3_12CLK5               (0x00000400)
#define ADC_SMPR1_SMP3_24CLK5               (0x00000600)
#define ADC_SMPR1_SMP3_47CLK5               (0x00000800)
#define ADC_SMPR1_SMP3_92CLK5               (0x00000A00)
#define ADC_SMPR1_SMP3_247CLK5              (0x00000C00)
#define ADC_SMPR1_SMP3_640CLK5              (0x00000E00)
#define ADC_SMPR1_SMP4                      (0x00007000)
#define ADC_SMPR1_SMP4_0                    (0x00001000)
#define ADC_SMPR1_SMP4_1                    (0x00002000)
#define ADC_SMPR1_SMP4_2                    (0x00004000)
#define ADC_SMPR1_SMP4_2CLK5                (0x00000000)
#define ADC_SMPR1_SMP4_6CLK5                (0x00001000)
#define ADC_SMPR1_SMP4_12CLK5               (0x00002000)
#define ADC_SMPR1_SMP4_24CLK5               (0x00003000)
#define ADC_SMPR1_SMP4_47CLK5               (0x00004000)
#define ADC_SMPR1_SMP4_92CLK5               (0x00005000)
#define ADC_SMPR1_SMP4_247CLK5              (0x00006000)
#define ADC_SMPR1_SMP4_640CLK5              (0x00007000)
#define ADC_SMPR1_SMP5                      (0x00038000)
#define ADC_SMPR1_SMP5_0                    (0x00008000)
#define ADC_SMPR1_SMP5_1                    (0x00010000)
#define ADC_SMPR1_SMP5_2                    (0x00020000)
#define ADC_SMPR1_SMP5_2CLK5                (0x00000000)
#define ADC_SMPR1_SMP5_6CLK5                (0x00008000)
#define ADC_SMPR1_SMP5_12CLK5               (0x00010000)
#define ADC_SMPR1_SMP5_24CLK5               (0x00018000)
#define ADC_SMPR1_SMP5_47CLK5               (0x00020000)
#define ADC_SMPR1_SMP5_92CLK5               (0x00028000)
#define ADC_SMPR1_SMP5_247CLK5              (0x00030000)
#define ADC_SMPR1_SMP5_640CLK5              (0x00038000)
#define ADC_SMPR1_SMP6                      (0x001C0000)
#define ADC_SMPR1_SMP6_0                    (0x00040000)
#define ADC_SMPR1_SMP6_1                    (0x00080000)
#define ADC_SMPR1_SMP6_2                    (0x00100000)
#define ADC_SMPR1_SMP6_2CLK5                (0x00000000)
#define ADC_SMPR1_SMP6_6CLK5                (0x00040000)
#define ADC_SMPR1_SMP6_12CLK5               (0x00080000)
#define ADC_SMPR1_SMP6_24CLK5               (0x000C0000)
#define ADC_SMPR1_SMP6_47CLK5               (0x00100000)
#define ADC_SMPR1_SMP6_92CLK5               (0x00140000)
#define ADC_SMPR1_SMP6_247CLK5              (0x00180000)
#define ADC_SMPR1_SMP6_640CLK5              (0x001C0000)
#define ADC_SMPR1_SMP7                      (0x00E00000)
#define ADC_SMPR1_SMP7_0                    (0x00200000)
#define ADC_SMPR1_SMP7_1                    (0x00400000)
#define ADC_SMPR1_SMP7_2                    (0x00800000)
#define ADC_SMPR1_SMP7_2CLK5                (0x00000000)
#define ADC_SMPR1_SMP7_6CLK5                (0x00200000)
#define ADC_SMPR1_SMP7_12CLK5               (0x00400000)
#define ADC_SMPR1_SMP7_24CLK5               (0x00600000)
#define ADC_SMPR1_SMP7_47CLK5               (0x00800000)
#define ADC_SMPR1_SMP7_92CLK5               (0x00A00000)
#define ADC_SMPR1_SMP7_247CLK5              (0x00C00000)
#define ADC_SMPR1_SMP7_640CLK5              (0x00E00000)
#define ADC_SMPR1_SMP8                      (0x07000000)
#define ADC_SMPR1_SMP8_0                    (0x01000000)
#define ADC_SMPR1_SMP8_1                    (0x02000000)
#define ADC_SMPR1_SMP8_2                    (0x04000000)
#define ADC_SMPR1_SMP8_2CLK5                (0x00000000)
#define ADC_SMPR1_SMP8_6CLK5                (0x01000000)
#define ADC_SMPR1_SMP8_12CLK5               (0x02000000)
#define ADC_SMPR1_SMP8_24CLK5               (0x03000000)
#define ADC_SMPR1_SMP8_47CLK5               (0x04000000)
#define ADC_SMPR1_SMP8_92CLK5               (0x05000000)
#define ADC_SMPR1_SMP8_247CLK5              (0x06000000)
#define ADC_SMPR1_SMP8_640CLK5              (0x07000000)
#define ADC_SMPR1_SMP9                      (0x38000000)
#define ADC_SMPR1_SMP9_0                    (0x08000000)
#define ADC_SMPR1_SMP9_1                    (0x10000000)
#define ADC_SMPR1_SMP9_2                    (0x20000000)
#define ADC_SMPR1_SMP9_2CLK5                (0x00000000)
#define ADC_SMPR1_SMP9_6CLK5                (0x08000000)
#define ADC_SMPR1_SMP9_12CLK5               (0x10000000)
#define ADC_SMPR1_SMP9_24CLK5               (0x18000000)
#define ADC_SMPR1_SMP9_47CLK5               (0x20000000)
#define ADC_SMPR1_SMP9_92CLK5               (0x28000000)
#define ADC_SMPR1_SMP9_247CLK5              (0x30000000)
#define ADC_SMPR1_SMP9_640CLK5              (0x38000000)

/*  Bit definition for ADC_SMPR2 register  */
#define ADC_SMPR2_SMP10                     (0x00000007)
#define ADC_SMPR2_SMP10_0                   (0x00000001)
#define ADC_SMPR2_SMP10_1                   (0x00000002)
#define ADC_SMPR2_SMP10_2                   (0x00000004)
#define ADC_SMPR2_SMP10_2CLK5               (0x00000000)
#define ADC_SMPR2_SMP10_6CLK5               (0x00000001)
#define ADC_SMPR2_SMP10_12CLK5              (0x00000002)
#define ADC_SMPR2_SMP10_24CLK5              (0x00000003)
#define ADC_SMPR2_SMP10_47CLK5              (0x00000004)
#define ADC_SMPR2_SMP10_92CLK5              (0x00000005)
#define ADC_SMPR2_SMP10_247CLK5             (0x00000006)
#define ADC_SMPR2_SMP10_640CLK5             (0x00000007)
#define ADC_SMPR2_SMP11                     (0x00000038)
#define ADC_SMPR2_SMP11_0                   (0x00000008)
#define ADC_SMPR2_SMP11_1                   (0x00000010)
#define ADC_SMPR2_SMP11_2                   (0x00000020)
#define ADC_SMPR2_SMP11_2CLK5               (0x00000000)
#define ADC_SMPR2_SMP11_6CLK5               (0x00000008)
#define ADC_SMPR2_SMP11_12CLK5              (0x00000010)
#define ADC_SMPR2_SMP11_24CLK5              (0x00000018)
#define ADC_SMPR2_SMP11_47CLK5              (0x00000020)
#define ADC_SMPR2_SMP11_92CLK5              (0x00000028)
#define ADC_SMPR2_SMP11_247CLK5             (0x00000030)
#define ADC_SMPR2_SMP11_640CLK5             (0x00000038)
#define ADC_SMPR2_SMP12                     (0x000001C0)
#define ADC_SMPR2_SMP12_0                   (0x00000040)
#define ADC_SMPR2_SMP12_1                   (0x00000080)
#define ADC_SMPR2_SMP12_2                   (0x00000100)
#define ADC_SMPR2_SMP12_2CLK5               (0x00000000)
#define ADC_SMPR2_SMP12_6CLK5               (0x00000040)
#define ADC_SMPR2_SMP12_12CLK5              (0x00000080)
#define ADC_SMPR2_SMP12_24CLK5              (0x000000C0)
#define ADC_SMPR2_SMP12_47CLK5              (0x00000100)
#define ADC_SMPR2_SMP12_92CLK5              (0x00000140)
#define ADC_SMPR2_SMP12_247CLK5             (0x00000180)
#define ADC_SMPR2_SMP12_640CLK5             (0x000001C0)
#define ADC_SMPR2_SMP13                     (0x00000E00)
#define ADC_SMPR2_SMP13_0                   (0x00000200)
#define ADC_SMPR2_SMP13_1                   (0x00000400)
#define ADC_SMPR2_SMP13_2                   (0x00000800)
#define ADC_SMPR2_SMP13_2CLK5               (0x00000000)
#define ADC_SMPR2_SMP13_6CLK5               (0x00000200)
#define ADC_SMPR2_SMP13_12CLK5              (0x00000400)
#define ADC_SMPR2_SMP13_24CLK5              (0x00000600)
#define ADC_SMPR2_SMP13_47CLK5              (0x00000800)
#define ADC_SMPR2_SMP13_92CLK5              (0x00000A00)
#define ADC_SMPR2_SMP13_247CLK5             (0x00000C00)
#define ADC_SMPR2_SMP13_640CLK5             (0x00000E00)
#define ADC_SMPR2_SMP14                     (0x00007000)
#define ADC_SMPR2_SMP14_0                   (0x00001000)
#define ADC_SMPR2_SMP14_1                   (0x00002000)
#define ADC_SMPR2_SMP14_2                   (0x00004000)
#define ADC_SMPR2_SMP14_2CLK5               (0x00000000)
#define ADC_SMPR2_SMP14_6CLK5               (0x00001000)
#define ADC_SMPR2_SMP14_12CLK5              (0x00002000)
#define ADC_SMPR2_SMP14_24CLK5              (0x00003000)
#define ADC_SMPR2_SMP14_47CLK5              (0x00004000)
#define ADC_SMPR2_SMP14_92CLK5              (0x00005000)
#define ADC_SMPR2_SMP14_247CLK5             (0x00006000)
#define ADC_SMPR2_SMP14_640CLK5             (0x00007000)
#define ADC_SMPR2_SMP15                     (0x00038000)
#define ADC_SMPR2_SMP15_0                   (0x00008000)
#define ADC_SMPR2_SMP15_1                   (0x00010000)
#define ADC_SMPR2_SMP15_2                   (0x00020000)
#define ADC_SMPR2_SMP15_2CLK5               (0x00000000)
#define ADC_SMPR2_SMP15_6CLK5               (0x00008000)
#define ADC_SMPR2_SMP15_12CLK5              (0x00010000)
#define ADC_SMPR2_SMP15_24CLK5              (0x00018000)
#define ADC_SMPR2_SMP15_47CLK5              (0x00020000)
#define ADC_SMPR2_SMP15_92CLK5              (0x00028000)
#define ADC_SMPR2_SMP15_247CLK5             (0x00030000)
#define ADC_SMPR2_SMP15_640CLK5             (0x00038000)
#define ADC_SMPR2_SMP16                     (0x001C0000)
#define ADC_SMPR2_SMP16_0                   (0x00040000)
#define ADC_SMPR2_SMP16_1                   (0x00080000)
#define ADC_SMPR2_SMP16_2                   (0x00100000)
#define ADC_SMPR2_SMP16_2CLK5               (0x00000000)
#define ADC_SMPR2_SMP16_6CLK5               (0x00040000)
#define ADC_SMPR2_SMP16_12CLK5              (0x00080000)
#define ADC_SMPR2_SMP16_24CLK5              (0x000C0000)
#define ADC_SMPR2_SMP16_47CLK5              (0x00100000)
#define ADC_SMPR2_SMP16_92CLK5              (0x00140000)
#define ADC_SMPR2_SMP16_247CLK5             (0x00180000)
#define ADC_SMPR2_SMP16_640CLK5             (0x001C0000)
#define ADC_SMPR2_SMP17                     (0x00E00000)
#define ADC_SMPR2_SMP17_0                   (0x00200000)
#define ADC_SMPR2_SMP17_1                   (0x00400000)
#define ADC_SMPR2_SMP17_2                   (0x00800000)
#define ADC_SMPR2_SMP17_2CLK5               (0x00000000)
#define ADC_SMPR2_SMP17_6CLK5               (0x00200000)
#define ADC_SMPR2_SMP17_12CLK5              (0x00400000)
#define ADC_SMPR2_SMP17_24CLK5              (0x00600000)
#define ADC_SMPR2_SMP17_47CLK5              (0x00800000)
#define ADC_SMPR2_SMP17_92CLK5              (0x00A00000)
#define ADC_SMPR2_SMP17_247CLK5             (0x00C00000)
#define ADC_SMPR2_SMP17_640CLK5             (0x00E00000)
#define ADC_SMPR2_SMP18                     (0x07000000)
#define ADC_SMPR2_SMP18_0                   (0x01000000)
#define ADC_SMPR2_SMP18_1                   (0x02000000)
#define ADC_SMPR2_SMP18_2                   (0x04000000)
#define ADC_SMPR2_SMP18_2CLK5               (0x00000000)
#define ADC_SMPR2_SMP18_6CLK5               (0x01000000)
#define ADC_SMPR2_SMP18_12CLK5              (0x02000000)
#define ADC_SMPR2_SMP18_24CLK5              (0x03000000)
#define ADC_SMPR2_SMP18_47CLK5              (0x04000000)
#define ADC_SMPR2_SMP18_92CLK5              (0x05000000)
#define ADC_SMPR2_SMP18_247CLK5             (0x06000000)
#define ADC_SMPR2_SMP18_640CLK5             (0x07000000)

/*  Bit definition for ADC_TR1 register  */
#define ADC_TR1_LT1                         (0x00000FFF)
#define ADC_TR1_HT1                         (0x0FFF0000)

/*  Bit definition for ADC_TR2 register  */
#define ADC_TR2_LT2                         (0x000000FF)
#define ADC_TR2_HT2                         (0x00FF0000)

/*  Bit definition for ADC_TR3 register  */
#define ADC_TR3_LT3                         (0x000000FF)
#define ADC_TR3_HT3                         (0x00FF0000)

/*  Bit definition for ADC_SQR1 register  */
#define ADC_SQR1_L                          (0x0000000F)
#define ADC_SQR1_SQ1                        (0x000007C0)
#define ADC_SQR1_SQ2                        (0x0001F000)
#define ADC_SQR1_SQ3                        (0x007C0000)
#define ADC_SQR1_SQ4                        (0x1F000000)

/*  Bit definition for ADC_SQR2 register  */
#define ADC_SQR2_SQ5                        (0x0000001F)
#define ADC_SQR2_SQ6                        (0x000007C0)
#define ADC_SQR2_SQ7                        (0x0001F000)
#define ADC_SQR2_SQ8                        (0x007C0000)
#define ADC_SQR2_SQ9                        (0x1F000000)

/*  Bit definition for ADC_SQR3 register  */
#define ADC_SQR3_SQ10                       (0x0000001F)
#define ADC_SQR3_SQ11                       (0x000007C0)
#define ADC_SQR3_SQ12                       (0x0001F000)
#define ADC_SQR3_SQ13                       (0x007C0000)
#define ADC_SQR3_SQ14                       (0x1F000000)

/*  Bit definition for ADC_SQR4 register  */
#define ADC_SQR4_SQ15                       (0x0000001F)
#define ADC_SQR4_SQ16                       (0x000007C0)

/*  Bit definition for ADC_DR register  */
#define ADC_DR_RDATA                        (0x0000FFFF)

/*  Bit definition for ADC_JSQR register  */
#define ADC_JSQR_JL                         (0x00000003)
#define ADC_JSQR_JL_0                       (0x00000001)
#define ADC_JSQR_JL_1                       (0x00000002)
#define ADC_JSQR_JEXTSEL                    (0x0000003C)
#define ADC_JSQR_JEXTSEL_0                  (0x00000004)
#define ADC_JSQR_JEXTSEL_1                  (0x00000008)
#define ADC_JSQR_JEXTSEL_2                  (0x00000010)
#define ADC_JSQR_JEXTSEL_3                  (0x00000020)
#define ADC_JSQR_JEXTEN                     (0x000000C0)
#define ADC_JSQR_JEXTEN_0                   (0x00000040)
#define ADC_JSQR_JEXTEN_1                   (0x00000080)
#define ADC_JSQR_JSQ1                       (0x00001F00)
#define ADC_JSQR_JSQ2                       (0x0007C000)
#define ADC_JSQR_JSQ3                       (0x01F00000)
#define ADC_JSQR_JSQ4                       (0x7C000000)

/*  Bit definition for ADC_OFR1 register  */
#define ADC_OFR1_OFFSET1                    (0x00000FFF)
#define ADC_OFR1_OFFSET1_CH                 (0x7C000000)
#define ADC_OFR1_OFFSET1_EN                 (0x80000000)

/*  Bit definition for ADC_OFR2 register  */
#define ADC_OFR2_OFFSET2                    (0x00000FFF)
#define ADC_OFR2_OFFSET2_CH                 (0x7C000000)
#define ADC_OFR2_OFFSET2_EN                 (0x80000000)

/*  Bit definition for ADC_OFR3 register  */
#define ADC_OFR3_OFFSET3                    (0x00000FFF)
#define ADC_OFR3_OFFSET3_CH                 (0x7C000000)
#define ADC_OFR3_OFFSET3_EN                 (0x80000000)

/*  Bit definition for ADC_OFR4 register  */
#define ADC_OFR4_OFFSET4                    (0x00000FFF)
#define ADC_OFR4_OFFSET4_CH                 (0x7C000000)
#define ADC_OFR4_OFFSET4_EN                 (0x80000000)

/*  Bit definition for ADC_JDR1 register  */
#define ADC_JDR1_JDATA                      (0x0000FFFF)

/*  Bit definition for ADC_JDR2 register  */
#define ADC_JDR2_JDATA                      (0x0000FFFF)

/*  Bit definition for ADC_JDR3 register  */
#define ADC_JDR3_JDATA                      (0x0000FFFF)

/*  Bit definition for ADC_JDR4 register  */
#define ADC_JDR4_JDATA                      (0x0000FFFF)

/*  Bit definition for ADC_AWD2CR register  */
#define ADC_AWD2CR_AWD2CH                   (0x0007FFFF)
#define ADC_AWD2CR_AWD2CH_0                 (0x00000001)
#define ADC_AWD2CR_AWD2CH_1                 (0x00000002)
#define ADC_AWD2CR_AWD2CH_2                 (0x00000004)
#define ADC_AWD2CR_AWD2CH_3                 (0x00000008)
#define ADC_AWD2CR_AWD2CH_4                 (0x00000010)
#define ADC_AWD2CR_AWD2CH_5                 (0x00000020)
#define ADC_AWD2CR_AWD2CH_6                 (0x00000040)
#define ADC_AWD2CR_AWD2CH_7                 (0x00000080)
#define ADC_AWD2CR_AWD2CH_8                 (0x00000100)
#define ADC_AWD2CR_AWD2CH_9                 (0x00000200)
#define ADC_AWD2CR_AWD2CH_10                (0x00000400)
#define ADC_AWD2CR_AWD2CH_11                (0x00000800)
#define ADC_AWD2CR_AWD2CH_12                (0x00001000)
#define ADC_AWD2CR_AWD2CH_13                (0x00002000)
#define ADC_AWD2CR_AWD2CH_14                (0x00004000)
#define ADC_AWD2CR_AWD2CH_15                (0x00008000)
#define ADC_AWD2CR_AWD2CH_16                (0x00010000)
#define ADC_AWD2CR_AWD2CH_17                (0x00020000)
#define ADC_AWD2CR_AWD2CH_18                (0x00040000)

/*  Bit definition for ADC_AWD3CR register  */
#define ADC_AWD3CR_AWD3CH                   (0x0007FFFF)
#define ADC_AWD3CR_AWD3CH_0                 (0x00000001)
#define ADC_AWD3CR_AWD3CH_1                 (0x00000002)
#define ADC_AWD3CR_AWD3CH_2                 (0x00000004)
#define ADC_AWD3CR_AWD3CH_3                 (0x00000008)
#define ADC_AWD3CR_AWD3CH_4                 (0x00000010)
#define ADC_AWD3CR_AWD3CH_5                 (0x00000020)
#define ADC_AWD3CR_AWD3CH_6                 (0x00000040)
#define ADC_AWD3CR_AWD3CH_7                 (0x00000080)
#define ADC_AWD3CR_AWD3CH_8                 (0x00000100)
#define ADC_AWD3CR_AWD3CH_9                 (0x00000200)
#define ADC_AWD3CR_AWD3CH_10                (0x00000400)
#define ADC_AWD3CR_AWD3CH_11                (0x00000800)
#define ADC_AWD3CR_AWD3CH_12                (0x00001000)
#define ADC_AWD3CR_AWD3CH_13                (0x00002000)
#define ADC_AWD3CR_AWD3CH_14                (0x00004000)
#define ADC_AWD3CR_AWD3CH_15                (0x00008000)
#define ADC_AWD3CR_AWD3CH_16                (0x00010000)
#define ADC_AWD3CR_AWD3CH_17                (0x00020000)
#define ADC_AWD3CR_AWD3CH_18                (0x00040000)

/*  Bit definition for ADC_DIFSEL register  */
#define ADC_DIFSEL_DIFSEL                   (0x0007FFFF)
#define ADC_DIFSEL_DIFSEL_0                 (0x00000001)
#define ADC_DIFSEL_DIFSEL_1                 (0x00000002)
#define ADC_DIFSEL_DIFSEL_2                 (0x00000004)
#define ADC_DIFSEL_DIFSEL_3                 (0x00000008)
#define ADC_DIFSEL_DIFSEL_4                 (0x00000010)
#define ADC_DIFSEL_DIFSEL_5                 (0x00000020)
#define ADC_DIFSEL_DIFSEL_6                 (0x00000040)
#define ADC_DIFSEL_DIFSEL_7                 (0x00000080)
#define ADC_DIFSEL_DIFSEL_8                 (0x00000100)
#define ADC_DIFSEL_DIFSEL_9                 (0x00000200)
#define ADC_DIFSEL_DIFSEL_10                (0x00000400)
#define ADC_DIFSEL_DIFSEL_11                (0x00000800)
#define ADC_DIFSEL_DIFSEL_12                (0x00001000)
#define ADC_DIFSEL_DIFSEL_13                (0x00002000)
#define ADC_DIFSEL_DIFSEL_14                (0x00004000)
#define ADC_DIFSEL_DIFSEL_15                (0x00008000)
#define ADC_DIFSEL_DIFSEL_16                (0x00010000)
#define ADC_DIFSEL_DIFSEL_17                (0x00020000)
#define ADC_DIFSEL_DIFSEL_18                (0x00040000)

/*  Bit definition for ADC_CALFACT register  */
#define ADC_CALFACT_CALFACT_S               (0x0000007F)
#define ADC_CALFACT_CALFACT_D               (0x007F0000)

/* common registers */
typedef struct {
    reg32_t CSR;
    reg32_t RESERVED;
    reg32_t CCR;
} PACKED ALIGNED(4) adc_com_t;

/*  ADC Common registers  */
/*  Bit definition for ADC_CSR register  */
#define ADC_CSR_ADRDY_MST                   (0x00000001)
#define ADC_CSR_EOSMP_MST                   (0x00000002)
#define ADC_CSR_EOC_MST                     (0x00000004)
#define ADC_CSR_EOS_MST                     (0x00000008)
#define ADC_CSR_OVR_MST                     (0x00000010)
#define ADC_CSR_JEOC_MST                    (0x00000020)
#define ADC_CSR_JEOS_MST                    (0x00000040)
#define ADC_CSR_AWD1_MST                    (0x00000080)
#define ADC_CSR_AWD2_MST                    (0x00000100)
#define ADC_CSR_AWD3_MST                    (0x00000200)
#define ADC_CSR_JQOVF_MST                   (0x00000400)

/*  Bit definition for ADC_CCR register  */
#define ADC_CCR_CKMODE                      (0x00030000)
#define ADC_CCR_CKMODE_0                    (0x00010000)
#define ADC_CCR_CKMODE_1                    (0x00020000)
#define ADC_CCR_PRESC                       (0x003C0000)
#define ADC_CCR_PRESC_0                     (0x00040000)
#define ADC_CCR_PRESC_1                     (0x00080000)
#define ADC_CCR_PRESC_2                     (0x00100000)
#define ADC_CCR_PRESC_3                     (0x00200000)
#define ADC_CCR_VREFEN                      (0x00400000)
#define ADC_CCR_CH17SEL                     (0x00800000)
#define ADC_CCR_CH18SEL                     (0x01000000)


#endif /* STM32L433_ADC_H_ */
