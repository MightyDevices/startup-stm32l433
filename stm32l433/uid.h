/**
 * @file uid.h
 * 
 * @date 2019-09-12
 * @author twatorowski (tw@mightydevices.com)
 * 
 * @brief STM32 Headers: UID
 */

#ifndef STM32L433_UID_H_
#define STM32L433_UID_H_

#include "stm32l433/stm32l433.h"

/* register base */
#define UID_BASE							(0x1FFF7590)
/* registers */
#define UID               					((uid_t *) UID_BASE)

/* gpio registers */
typedef struct {
	reg32_t UID1;
	reg32_t UID2;
	reg32_t UID3;
} PACKED ALIGNED(4) uid_t;

#endif /* STM32L33_UID_H_ */
