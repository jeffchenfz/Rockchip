/** @file
*
*  Copyright (c) 2014-2017, Linaro Limited. All rights reserved.
*  Copyright (c) 2017, Rockchip Inc. All rights reserved.
*
*  This program and the accompanying materials
*  are licensed and made available under the terms and conditions of the BSD License
*  which accompanies this distribution.  The full text of the license may be found at
*  http://opensource.org/licenses/bsd-license.php
*
*  THE PROGRAM IS DISTRIBUTED UNDER THE BSD LICENSE ON AN "AS IS" BASIS,
*  WITHOUT WARRANTIES OR REPRESENTATIONS OF ANY KIND, EITHER EXPRESS OR IMPLIED.
*
**/

#ifndef __RK3399_H__
#define __RK3399_H__
#include <Library/IoLib.h>

/***********************************************************************************
// Platform Memory Map
************************************************************************************/

// SOC peripherals (UART, I2C, I2S, USB, etc)
#define RK3399_PERIPH_BASE                      0xF4000000
#define RK3399_PERIPH_SZ                        0x0bf00000

#define RK3399_PMU_GRF_BASE               0xFF320000
#define RK3399_PMU_CRU_BASE               0xFF750000
#define RK3399_CRU_BASE                   0xFF760000
#define RK3399_GRF_BASE                   0xFF770000

#define RK3399_I2C0_BASE                  0xFF3C0000
#define RK3399_I2C1_BASE                  0xFF110000
#define RK3399_I2C2_BASE                  0xFF120000
#define RK3399_I2C3_BASE                  0xFF130000
#define RK3399_I2C4_BASE                  0xFF3D0000
#define RK3399_I2C5_BASE                  0xFF140000
#define RK3399_I2C6_BASE                  0xFF150000
#define RK3399_I2C7_BASE                  0xFF160000
#define RK3399_I2C8_BASE                  0xFF3E0000

#define RK3399_PWM_BASE                  0xFF420000


#define CruReadl(offset)		MmioRead32(RK3399_CRU_BASE + offset)
#define CruWritel(v, offset)		do { MmioWrite32(RK3399_CRU_BASE + offset, v); } while (0)

#define GrfReadl(offset)		MmioRead32(RK3399_GRF_BASE + offset)
#define GrfWritel(v, offset)		do { MmioWrite32(RK3399_GRF_BASE + offset, v); } while (0)

#define PmuCruReadl(offset)		MmioRead32(RK3399_PMU_CRU_BASE + offset)
#define PmuCruWritel(v, offset)		do { MmioWrite32(RK3399_PMU_CRU_BASE + offset, v); } while (0)

#define PmuGrfReadl(offset)		MmioRead32(RK3399_PMU_GRF_BASE + offset)
#define PmuGrfWritel(v, offset)		do { MmioWrite32(RK3399_PMU_GRF_BASE + offset, v); } while (0)

#endif /* __RK3399_H__ */
