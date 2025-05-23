/****************************************************************************
 * arch/arm/src/stm32h5/hardware/stm32h5xxx_flash.h
 *
 * SPDX-License-Identifier: Apache-2.0
 *
 * Licensed to the Apache Software Foundation (ASF) under one or more
 * contributor license agreements.  See the NOTICE file distributed with
 * this work for additional information regarding copyright ownership.  The
 * ASF licenses this file to you under the Apache License, Version 2.0 (the
 * "License"); you may not use this file except in compliance with the
 * License.  You may obtain a copy of the License at
 *
 *   http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS, WITHOUT
 * WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.  See the
 * License for the specific language governing permissions and limitations
 * under the License.
 *
 ****************************************************************************/

#ifndef __ARCH_ARM_SRC_STM32H5_HARDWARE_STM32H5XXX_FLASH_H
#define __ARCH_ARM_SRC_STM32H5_HARDWARE_STM32H5XXX_FLASH_H

/****************************************************************************
 * Included Files
 ****************************************************************************/

#include <nuttx/config.h>

/****************************************************************************
 * Pre-processor Definitions
 ****************************************************************************/

/* Register Offsets *********************************************************/

#define STM32_FLASH_ACR_OFFSET           0x0000
#define STM32_FLASH_NSKEYR_OFFSET        0x0004
#define STM32_FLASH_SECKEYR_OFFSET       0x0008
#define STM32_FLASH_OPTKEYR_OFFSET       0x000c
#define STM32_FLASH_NSOBKKEYR_OFFSET     0x0010
#define STM32_FLASH_SECOBKKEYR_OFFSET    0x0014
#define STM32_FLASH_OPSR_OFFSET          0x0018
#define STM32_FLASH_OPTCR_OFFSET         0x001c
#define STM32_FLASH_NSSR_OFFSET          0x0020
#define STM32_FLASH_SECSR_OFFSET         0x0024
#define STM32_FLASH_NSCR_OFFSET          0x0028
#define STM32_FLASH_SECCR_OFFSET         0x002c
#define STM32_FLASH_NSCCR_OFFSET         0x0030
#define STM32_FLASH_SECCCR_OFFSET        0x0034
#define STM32_FLASH_PRIVCFGR_OFFSET      0x003c
#define STM32_FLASH_NSOBKCFGR_OFFSET     0x0040
#define STM32_FLASH_SECOBKCFGR_OFFSET    0x0044
#define STM32_FLASH_HDPEXTR_OFFSET       0x0048
#define STM32_FLASH_OPTSR_CUR_OFFSET     0x0050
#define STM32_FLASH_OPTSR_PRG_OFFSET     0x0054
#define STM32_FLASH_NSEPOCHR_CUR_OFFSET  0x0060
#define STM32_FLASH_NSEPOCHR_PRG_OFFSET  0x0064
#define STM32_FLASH_SECEPOCHR_CUR_OFFSET 0x0068
#define STM32_FLASH_SECEPOCHR_PRG_OFFSET 0x006c
#define STM32_FLASH_OPTSR2_CUR_OFFSET    0x0070
#define STM32_FLASH_OPTSR2_PRG_OFFSET    0x0074
#define STM32_FLASH_NSBOOTR_CUR_OFFSET   0x0080
#define STM32_FLASH_NSBOOTR_PRG_OFFSET   0x0084
#define STM32_FLASH_SECBOOTR_CUR_OFFSET  0x0088
#define STM32_FLASH_SECBOOTR_PRG_OFFSET  0x008c
#define STM32_FLASH_OTBPBLR_CUR_OFFSET   0x0090
#define STM32_FLASH_OTBPBLR_PRG_OFFSET   0x0094
#define STM32_FLASH_SECBB1R_1_OFFSET     0x00a0
#define STM32_FLASH_SECBB1R_2_OFFSET     0x00a4
#define STM32_FLASH_SECBB1R_3_OFFSET     0x00a8
#define STM32_FLASH_SECBB1R_4_OFFSET     0x00ac
#define STM32_FLASH_PRIVBB1R_1_OFFSET    0x00c0
#define STM32_FLASH_PRIVBB1R_2_OFFSET    0x00c4
#define STM32_FLASH_PRIVBB1R_3_OFFSET    0x00c8
#define STM32_FLASH_PRIVBB1R_4_OFFSET    0x00cc
#define STM32_FLASH_SECWM1R_CUR_OFFSET   0x00e0
#define STM32_FLASH_SECWM1R_PRG_OFFSET   0x00e4
#define STM32_FLASH_WRP1R_CUR_OFFSET     0x00e8
#define STM32_FLASH_WRP1R_PRG_OFFSET     0x00ec
#define STM32_FLASH_EDATA1R_CUR_OFFSET   0x00f0
#define STM32_FLASH_EDATA1R_PRG_OFFSET   0x00f4
#define STM32_FLASH_HDP1R_CUR_OFFSET     0x00f8
#define STM32_FLASH_HDP1R_PRG_OFFSET     0x00fc
#define STM32_FLASH_ECCCORR_OFFSET       0x0100
#define STM32_FLASH_ECCDETR_OFFSET       0x0104
#define STM32_FLASH_ECCDR_OFFSET         0x0108
#define STM32_FLASH_SECBB2R_1_OFFSET     0x01a0
#define STM32_FLASH_SECBB2R_2_OFFSET     0x01a4
#define STM32_FLASH_SECBB2R_3_OFFSET     0x01a8
#define STM32_FLASH_SECBB2R_4_OFFSET     0x01ac
#define STM32_FLASH_PRIVBB2R_1_OFFSET    0x01c0
#define STM32_FLASH_PRIVBB2R_2_OFFSET    0x01c4
#define STM32_FLASH_PRIVBB2R_3_OFFSET    0x01c8
#define STM32_FLASH_PRIVBB2R_4_OFFSET    0x01cc
#define STM32_FLASH_SECWM2R_CUR_OFFSET   0x01e0
#define STM32_FLASH_SECWM2R_PRG_OFFSET   0x01e4
#define STM32_FLASH_WRP2R_CUR_OFFSET     0x01e8
#define STM32_FLASH_WRP2R_PRG_OFFSET     0x01ec
#define STM32_FLASH_EDATA2R_CUR_OFFSET   0x01f0
#define STM32_FLASH_EDATA2R_PRG_OFFSET   0x01f4
#define STM32_FLASH_HDP2R_CUR_OFFSET     0x01f8
#define STM32_FLASH_HDP2R_PRG_OFFSET     0x01fc

/* Register Addresses *******************************************************/

#define STM32_FLASH_ACR           (STM32_FLASHIF_BASE + STM32_FLASH_ACR_OFFSET)
#define STM32_FLASH_NSKEYR        (STM32_FLASHIF_BASE + STM32_FLASH_NSKEYR_OFFSET)
#define STM32_FLASH_SECKEYR       (STM32_FLASHIF_BASE + STM32_FLASH_SECKEYR_OFFSET)
#define STM32_FLASH_OPTKEYR       (STM32_FLASHIF_BASE + STM32_FLASH_OPTKEYR_OFFSET)
#define STM32_FLASH_NSOBKKEYR     (STM32_FLASHIF_BASE + STM32_FLASH_NSOBKKEYR_OFFSET)
#define STM32_FLASH_SECOBKKEYR    (STM32_FLASHIF_BASE + STM32_FLASH_SECOBKKEYR_OFFSET)
#define STM32_FLASH_OPSR          (STM32_FLASHIF_BASE + STM32_FLASH_OPSR_OFFSET)
#define STM32_FLASH_OPTCR         (STM32_FLASHIF_BASE + STM32_FLASH_OPTCR_OFFSET)
#define STM32_FLASH_NSSR          (STM32_FLASHIF_BASE + STM32_FLASH_NSSR_OFFSET)
#define STM32_FLASH_SECSR         (STM32_FLASHIF_BASE + STM32_FLASH_SECSR_OFFSET)
#define STM32_FLASH_NSCR          (STM32_FLASHIF_BASE + STM32_FLASH_NSCR_OFFSET)
#define STM32_FLASH_SECCR         (STM32_FLASHIF_BASE + STM32_FLASH_SECCR_OFFSET)
#define STM32_FLASH_NSCCR         (STM32_FLASHIF_BASE + STM32_FLASH_NSCCR_OFFSET)
#define STM32_FLASH_SECCCR        (STM32_FLASHIF_BASE + STM32_FLASH_SECCCR_OFFSET)
#define STM32_FLASH_PRIVCFGR      (STM32_FLASHIF_BASE + STM32_FLASH_PRIVCFGR_OFFSET)
#define STM32_FLASH_NSOBKCFGR     (STM32_FLASHIF_BASE + STM32_FLASH_NSOBKCFGR_OFFSET)
#define STM32_FLASH_SECOBKCFGR    (STM32_FLASHIF_BASE + STM32_FLASH_SECOBKCFGR_OFFSET)
#define STM32_FLASH_HDPEXTR       (STM32_FLASHIF_BASE + STM32_FLASH_HDPEXTR_OFFSET)
#define STM32_FLASH_OPTSR_CUR     (STM32_FLASHIF_BASE + STM32_FLASH_OPTSR_CUR_OFFSET)
#define STM32_FLASH_OPTSR_PRG     (STM32_FLASHIF_BASE + STM32_FLASH_OPTSR_PRG_OFFSET)
#define STM32_FLASH_NSEPOCHR_CUR  (STM32_FLASHIF_BASE + STM32_FLASH_NSEPOCHR_CUR_OFFSET)
#define STM32_FLASH_NSEPOCHR_PRG  (STM32_FLASHIF_BASE + STM32_FLASH_NSEPOCHR_PRG_OFFSET)
#define STM32_FLASH_SECEPOCHR_CUR (STM32_FLASHIF_BASE + STM32_FLASH_SECEPOCHR_CUR_OFFSET)
#define STM32_FLASH_SECEPOCHR_PRG (STM32_FLASHIF_BASE + STM32_FLASH_SECEPOCHR_PRG_OFFSET)
#define STM32_FLASH_OPTSR2_CUR    (STM32_FLASHIF_BASE + STM32_FLASH_OPTSR2_CUR_OFFSET)
#define STM32_FLASH_OPTSR2_PRG    (STM32_FLASHIF_BASE + STM32_FLASH_OPTSR2_PRG_OFFSET)
#define STM32_FLASH_NSBOOTR_CUR   (STM32_FLASHIF_BASE + STM32_FLASH_NSBOOTR_CUR_OFFSET)
#define STM32_FLASH_NSBOOTR_PRG   (STM32_FLASHIF_BASE + STM32_FLASH_NSBOOTR_PRG_OFFSET)
#define STM32_FLASH_SECBOOTR_CUR  (STM32_FLASHIF_BASE + STM32_FLASH_SECBOOTR_CUR_OFFSET)
#define STM32_FLASH_SECBOOTR_PRG  (STM32_FLASHIF_BASE + STM32_FLASH_SECBOOTR_PRG_OFFSET)
#define STM32_FLASH_OTBPBLR_CUR   (STM32_FLASHIF_BASE + STM32_FLASH_OTBPBLR_CUR_OFFSET)
#define STM32_FLASH_OTBPBLR_PRG   (STM32_FLASHIF_BASE + STM32_FLASH_OTBPBLR_PRG_OFFSET)
#define STM32_FLASH_SECBB1R_1     (STM32_FLASHIF_BASE + STM32_FLASH_SECBB1R_1_OFFSET)
#define STM32_FLASH_SECBB1R_2     (STM32_FLASHIF_BASE + STM32_FLASH_SECBB1R_2_OFFSET)
#define STM32_FLASH_SECBB1R_3     (STM32_FLASHIF_BASE + STM32_FLASH_SECBB1R_3_OFFSET)
#define STM32_FLASH_SECBB1R_4     (STM32_FLASHIF_BASE + STM32_FLASH_SECBB1R_4_OFFSET)
#define STM32_FLASH_PRIVBB1R_1    (STM32_FLASHIF_BASE + STM32_FLASH_PRIVBB1R_1_OFFSET)
#define STM32_FLASH_PRIVBB1R_2    (STM32_FLASHIF_BASE + STM32_FLASH_PRIVBB1R_2_OFFSET)
#define STM32_FLASH_PRIVBB1R_3    (STM32_FLASHIF_BASE + STM32_FLASH_PRIVBB1R_3_OFFSET)
#define STM32_FLASH_PRIVBB1R_4    (STM32_FLASHIF_BASE + STM32_FLASH_PRIVBB1R_4_OFFSET)
#define STM32_FLASH_SECWM1R_CUR   (STM32_FLASHIF_BASE + STM32_FLASH_SECWM1R_CUR_OFFSET)
#define STM32_FLASH_SECWM1R_PRG   (STM32_FLASHIF_BASE + STM32_FLASH_SECWM1R_PRG_OFFSET)
#define STM32_FLASH_WRP1R_CUR     (STM32_FLASHIF_BASE + STM32_FLASH_WRP1R_CUR_OFFSET)
#define STM32_FLASH_WRP1R_PRG     (STM32_FLASHIF_BASE + STM32_FLASH_WRP1R_PRG_OFFSET)
#define STM32_FLASH_EDATA1R_CUR   (STM32_FLASHIF_BASE + STM32_FLASH_EDATA1R_CUR_OFFSET)
#define STM32_FLASH_EDATA1R_PRG   (STM32_FLASHIF_BASE + STM32_FLASH_EDATA1R_PRG_OFFSET)
#define STM32_FLASH_HDP1R_CUR     (STM32_FLASHIF_BASE + STM32_FLASH_HDP1R_CUR_OFFSET)
#define STM32_FLASH_HDP1R_PRG     (STM32_FLASHIF_BASE + STM32_FLASH_HDP1R_PRG_OFFSET)
#define STM32_FLASH_ECCCORR       (STM32_FLASHIF_BASE + STM32_FLASH_ECCCORR_OFFSET)
#define STM32_FLASH_ECCDETR       (STM32_FLASHIF_BASE + STM32_FLASH_ECCDETR_OFFSET)
#define STM32_FLASH_ECCDR         (STM32_FLASHIF_BASE + STM32_FLASH_ECCDR_OFFSET)
#define STM32_FLASH_SECBB2R_1     (STM32_FLASHIF_BASE + STM32_FLASH_SECBB2R_1_OFFSET)
#define STM32_FLASH_SECBB2R_2     (STM32_FLASHIF_BASE + STM32_FLASH_SECBB2R_2_OFFSET)
#define STM32_FLASH_SECBB2R_3     (STM32_FLASHIF_BASE + STM32_FLASH_SECBB2R_3_OFFSET)
#define STM32_FLASH_SECBB2R_4     (STM32_FLASHIF_BASE + STM32_FLASH_SECBB2R_4_OFFSET)
#define STM32_FLASH_PRIVBB2R_1    (STM32_FLASHIF_BASE + STM32_FLASH_PRIVBB2R_1_OFFSET)
#define STM32_FLASH_PRIVBB2R_2    (STM32_FLASHIF_BASE + STM32_FLASH_PRIVBB2R_2_OFFSET)
#define STM32_FLASH_PRIVBB2R_3    (STM32_FLASHIF_BASE + STM32_FLASH_PRIVBB2R_3_OFFSET)
#define STM32_FLASH_PRIVBB2R_4    (STM32_FLASHIF_BASE + STM32_FLASH_PRIVBB2R_4_OFFSET)
#define STM32_FLASH_SECWM2R_CUR   (STM32_FLASHIF_BASE + STM32_FLASH_SECWM2R_CUR_OFFSET)
#define STM32_FLASH_SECWM2R_PRG   (STM32_FLASHIF_BASE + STM32_FLASH_SECWM2R_PRG_OFFSET)
#define STM32_FLASH_WRP2R_CUR     (STM32_FLASHIF_BASE + STM32_FLASH_WRP2R_CUR_OFFSET)
#define STM32_FLASH_WRP2R_PRG     (STM32_FLASHIF_BASE + STM32_FLASH_WRP2R_PRG_OFFSET)
#define STM32_FLASH_EDATA2R_CUR   (STM32_FLASHIF_BASE + STM32_FLASH_EDATA2R_CUR_OFFSET)
#define STM32_FLASH_EDATA2R_PRG   (STM32_FLASHIF_BASE + STM32_FLASH_EDATA2R_PRG_OFFSET)
#define STM32_FLASH_HDP2R_CUR     (STM32_FLASHIF_BASE + STM32_FLASH_HDP2R_CUR_OFFSET)
#define STM32_FLASH_HDP2R_PRG     (STM32_FLASHIF_BASE + STM32_FLASH_HDP2R_PRG_OFFSET)

/* Register Bitfield Definitions ********************************************/

/* Flash Access Control Register (ACR) */

#define FLASH_ACR_LATENCY_SHIFT   (0)
#define FLASH_ACR_LATENCY_MASK    (0xF << FLASH_ACR_LATENCY_SHIFT)
#  define FLASH_ACR_LATENCY(n)    ((n) << FLASH_ACR_LATENCY_SHIFT)  /* n wait states, for Vcore range 0-3. */

#define FLASH_ACR_WRHIGHFREQ_SHIFT (4)
#define FLASH_ACR_WRHIGHFREQ_MASK  (0x3 << FLASH_ACR_WRHIGHFREQ_SHIFT)
#  define FLASH_ACR_WRHIGHFREQ(n)  ((n) << FLASH_ACR_WRHIGHFREQ_SHIFT)  /* Used to control the delay between NVM
                                                                         * signals during programming operations
                                                                         */
#define FLASH_ACR_PRFTEN           (1 << 8)                             /* Bit 8: Prefetch Enable */

/* Flash Operation Status Register (OPSR) */

#define FLASH_OPSR_ADDR_OP_SHIFT   (0)
#define FLASH_OPSR_ADDR_OP_MASK    (0xfffff << FLASH_OPSR_ADDR_OP_SHIFT)

#define FLASH_OPSR_DATA_OP         (1 << 21)
#define FLASH_OPSR_BK_OP           (1 << 22)
#define FLASH_OPSR_SYSF_OP         (1 << 23)
#define FLASH_OPSR_OTP_OP          (1 << 24)

#define FLASH_OPSR_CODE_OP_SHIFT    (29)
#define FLASH_OPSR_CODE_OP_MASK     (0x7 << FLASH_OPSR_CODE_OP_SHIFT)
#define FLASH_OPSR_CODE_OP_NO_FLSH  (0 << FLASH_OPSR_CODE_OP_SHIFT)
#define FLASH_OPSR_CODE_OP_SNGL_WRT (1 << FLASH_OPSR_CODE_OP_SHIFT)
#define FLASH_OPSR_CODE_OP_OBK_ALT  (2 << FLASH_OPSR_CODE_OP_SHIFT)
#define FLASH_OPSR_CODE_OP_SEC_ERS  (3 << FLASH_OPSR_CODE_OP_SHIFT)
#define FLASH_OPSR_CODE_OP_BNK_ERS  (4 << FLASH_OPSR_CODE_OP_SHIFT)
#define FLASH_OPSR_CODE_OP_MASS_ERS (5 << FLASH_OPSR_CODE_OP_SHIFT)
#define FLASH_OPSR_CODE_OP_OPT_CNG  (6 << FLASH_OPSR_CODE_OP_SHIFT)
#define FLASH_OPSR_CODE_OP_OBK_SWP  (7 << FLASH_OPSR_CODE_OP_SHIFT)

/* Flash Option Control Register (OPTCR) */

#define FLASH_OPTCR_OPTLOCK        (1 << 0)
#define FLASH_OPTCR_OPTSTRT        (1 << 1)
#define FLASH_OPTCR_SWAP_BANK      (1 << 31)

/* Flash Non-Secure Status Register (NSSR) */

#define FLASH_NSSR_BSY             (1 << 0)
#define FLASH_NSSR_WBNE            (1 << 1)
#define FLASH_NSSR_DBNE            (1 << 3)
#define FLASH_NSSR_EOP             (1 << 16)
#define FLASH_NSSR_WRPERR          (1 << 17)
#define FLASH_NSSR_PGSERR          (1 << 18)
#define FLASH_NSSR_STRBERR         (1 << 19)
#define FLASH_NSSR_INCERR          (1 << 20)
#define FLASH_NSSR_OBKERR          (1 << 21)
#define FLASH_NSSR_OBKWERR         (1 << 22)
#define FLASH_NSSR_OPTCHANGERR     (1 << 23)

/* Flash Secure Status Register (SECSR) */

#define FLASH_NSSR_BSY             (1 << 0)
#define FLASH_NSSR_WBNE            (1 << 1)
#define FLASH_NSSR_DBNE            (1 << 3)
#define FLASH_NSSR_EOP             (1 << 16)
#define FLASH_NSSR_WRPERR          (1 << 17)
#define FLASH_NSSR_PGSERR          (1 << 18)
#define FLASH_NSSR_STRBERR         (1 << 19)
#define FLASH_NSSR_INCERR          (1 << 20)
#define FLASH_NSSR_OBKERR          (1 << 21)
#define FLASH_NSSR_OBKWERR         (1 << 22)

/* Flash Non-Secure Control Register (NSCR) */

#define FLASH_NSCR_LOCK            (1 << 0)
#define FLASH_NSCR_PG              (1 << 1)
#define FLASH_NSCR_SER             (1 << 2)
#define FLASH_NSCR_BER             (1 << 3)
#define FLASH_NSCR_FW              (1 << 4)
#define FLASH_NSCR_STRT            (1 << 5)

#define FLASH_NSCR_SNB_SHIFT       (6)
#define FLASH_NSCR_SNB_MASK        (0x7f << FLASH_NSCR_SNB_SHIFT)
#  define FLASH_NSCR_SNB(n)        ((n) << FLASH_NSCR_SNB_SHIFT)

#define FLASH_NSCR_MER             (1 << 15)
#define FLASH_NSCR_EOPIE           (1 << 16)
#define FLASH_NSCR_WRPERRIE        (1 << 17)
#define FLASH_NSCR_PGSERRIE        (1 << 18)
#define FLASH_NSCR_STRBERRIE       (1 << 19)
#define FLASH_NSCR_INCERRIE        (1 << 20)
#define FLASH_NSCR_OBKERRIE        (1 << 21)
#define FLASH_NSCR_OBKWERRIE       (1 << 22)
#define FLASH_NSCR_OPTCHANGEERRIE  (1 << 23)
#define FLASH_NSCR_BKSEL           (1 << 31)

/* Flash Secure Control Register (NSCR) */

#define FLASH_SECCR_LOCK             (1 << 0)
#define FLASH_SECCR_PG               (1 << 1)
#define FLASH_SECCR_SER              (1 << 2)
#define FLASH_SECCR_BER              (1 << 3)
#define FLASH_SECCR_FW               (1 << 4)
#define FLASH_SECCR_STRT             (1 << 5)

#define FLASH_SECCR_SNB_SHIFT        (6)
#define FLASH_SECCR_SNB_MASK         (0x7f << FLASH_SECCR_SNB_SHIFT)
#  define FLASH_SECCR_SNB(n)         ((n) << FLASH_SECCR_SNB_SHIFT)

#define FLASH_SECCR_MER              (1 << 15)
#define FLASH_SECCR_EOPIE            (1 << 16)
#define FLASH_SECCR_WRPERRIE         (1 << 17)
#define FLASH_SECCR_PGSERRIE         (1 << 18)
#define FLASH_SECCR_STRBERRIE        (1 << 19)
#define FLASH_SECCR_INCERRIE         (1 << 20)
#define FLASH_SECCR_OBKERRIE         (1 << 21)
#define FLASH_SECCR_OBKWERRIE        (1 << 22)
#define FLASH_SECCR_INV              (1 << 29)
#define FLASH_SECCR_BKSEL            (1 << 31)

/* Flash Non-Secure Clear Control Register (NSCCR) */

#define FLASH_NSCCR_CLR_EOP          (1 << 16)
#define FLASH_NSCCR_CLR_WRPERR       (1 << 17)
#define FLASH_NSCCR_CLR_PGSERR       (1 << 18)
#define FLASH_NSCCR_CLR_STRBERR      (1 << 19)
#define FLASH_NSCCR_CLR_INCERR       (1 << 20)
#define FLASH_NSCCR_CLR_OBKERR       (1 << 21)
#define FLASH_NSCCR_CLR_OBKWERR      (1 << 22)
#define FLASH_NSCCR_CLR_OPTCHANGEERR (1 << 23)

/* Flash Secure Clear Control Register (SECCCR) */

#define FLASH_SECCCR_CLR_EOP         (1 << 16)
#define FLASH_SECCCR_CLR_WRPERR      (1 << 17)
#define FLASH_SECCCR_CLR_PGSERR      (1 << 18)
#define FLASH_SECCCR_CLR_STRBERR     (1 << 19)
#define FLASH_SECCCR_CLR_INCERR      (1 << 20)
#define FLASH_SECCCR_CLR_OBKERR      (1 << 21)
#define FLASH_SECCCR_CLR_OBKWERR     (1 << 22)

/* Flash Privilege Configuration Register (PRIVCFGR) */

#define FLASH_PRIVCFGR_SPRIV         (1 << 0)
#define FLASH_PRIVCFGR_NSPRIV        (1 << 1)

/* Flash Non-Secure OBK Configuration Register (NSOBKCFGR) */

#define FLASH_NSOBKCFGR_LOCK           (1 << 0)
#define FLASH_NSOBKCFGR_SWAP_SECT_REQ  (1 << 1)
#define FLASH_NSOBKCFGR_ALT_SECT       (1 << 2)
#define FLASH_NSOBKCFGR_ALT_SECT_ERASE (1 << 3)

#define FLASH_NSOBKCFGR_SWAP_OFFSET_SHIFT (16)
#define FLASH_NSOBKCFGR_SWAP_OFFSET_MASK  (0x1ff << FLASH_NSOBKCFGR_SWAP_OFFSET_SHIFT)

/* Flash Non-Secure OBK Configuration Register (SECOBKCFGR) */

#define FLASH_SECOBKCFGR_LOCK           (1 << 0)
#define FLASH_SECOBKCFGR_SWAP_SECT_REQ  (1 << 1)
#define FLASH_SECOBKCFGR_ALT_SECT       (1 << 2)
#define FLASH_SECOBKCFGR_ALT_SECT_ERASE (1 << 3)

#define FLASH_SECOBKCFGR_SWAP_OFFSET_SHIFT (16)
#define FLASH_SECOBKCFGR_SWAP_OFFSET_MASK  (0x1ff << FLASH_SECOBKCFGR_SWAP_OFFSET_SHIFT)

/* Flash HDP Extension Register (HDPEXTR) */

#define FLASH_HDPEXTR_HDP1_EXT_SHIFT    (0)
#define FLASH_HDPEXTR_HDP1_EXT_MASK     (0x7f << FLASH_HDPEXTR_HDP1_EXT_SHIFT)
#  define FLASH_HDPEXTR_HDP1_EXT(n)     ((n) << FLASH_HDPEXTR_HDP1_SHIFT)

#define FLASH_HDPEXTR_HDP2_EXT_SHIFT    (0)
#define FLASH_HDPEXTR_HDP2_EXT_MASK     (0x7f << FLASH_HDPEXTR_HDP2_EXT_SHIFT)
#  define FLASH_HDPEXTR_HDP2_EXT(n)     ((n) << FLASH_HDPEXTR_HDP2_SHIFT)

/* Flash Option Status (Current) Register (OPTSR_CUR) */

#define FLASH_OPTSR_CUR_BOR_LEV_SHIFT   (0)
#define FLASH_OPTSR_CUR_BOR_LEV_MASK    (3 << FLASH_OPTSR_CUR_BOR_LEV_SHIFT)
#define FLASH_OPTSR_CUR_BOR_LEV_1       (0 << FLASH_OPTSR_CUR_BOR_LEV_SHIFT)
#define FLASH_OPTSR_CUR_BOR_LEV_2       (1 << FLASH_OPTSR_CUR_BOR_LEV_SHIFT)
#define FLASH_OPTSR_CUR_BOR_LEV_3       (2 << FLASH_OPTSR_CUR_BOR_LEV_SHIFT)

#define FLASH_OPTSR_CUR_BORH_EN         (1 << 2)
#define FLASH_OPTSR_CUR_IWDG_SW         (1 << 3)
#define FLASH_OPTSR_CUR_WWDG_SW         (1 << 4)
#define FLASH_OPTSR_CUR_NRST_STOP       (1 << 6)
#define FLASH_OPTSR_CUR_NRST_STDBY      (1 << 7)

#define FLASH_OPTSR_CUR_PRODUCT_STATE_SHIFT   (8)
#define FLASH_OPTSR_CUR_PRODUCT_STATE_MASK    (0xff << FLASH_OPTSR_CUR_PRODUCT_STATE_SHIFT)

#define FLASH_OPTSR_CUR_IO_VDD_HSLV     (1 << 16)
#define FLASH_OPTSR_CUR_IO_VDDIO2_HSLV  (1 << 17)
#define FLASH_OPTSR_CUR_IWDG_STOP       (1 << 20)
#define FLASH_OPTSR_CUR_IWDG_STDBY      (1 << 21)

#define FLASH_OPTSR_CUR_BOOT_UBE_SHIFT  (22)
#define FLASH_OPTSR_CUR_BOOT_UBE_MASK   (0xff << FLASH_OPTSR_CUR_BOOT_UBE_SHIFT)

#define FLASH_OPTSR_CUR_SWAP_BANK       (1 << 31)

/* Flash Option Status (Program) Register (OPTSR_PRG) */

#define FLASH_OPTSR_PRG_BOR_LEV_SHIFT   (0)
#define FLASH_OPTSR_PRG_BOR_LEV_MASK    (3 << FLASH_OPTSR_PRG_BOR_LEV_SHIFT)
#define FLASH_OPTSR_PRG_BOR_LEV_1       (0 << FLASH_OPTSR_PRG_BOR_LEV_SHIFT)
#define FLASH_OPTSR_PRG_BOR_LEV_2       (1 << FLASH_OPTSR_PRG_BOR_LEV_SHIFT)
#define FLASH_OPTSR_PRG_BOR_LEV_3       (2 << FLASH_OPTSR_PRG_BOR_LEV_SHIFT)

#define FLASH_OPTSR_PRG_BORH_EN         (1 << 2)
#define FLASH_OPTSR_PRG_IWDG_SW         (1 << 3)
#define FLASH_OPTSR_PRG_WWDG_SW         (1 << 4)
#define FLASH_OPTSR_PRG_NRST_STOP       (1 << 6)
#define FLASH_OPTSR_PRG_NRST_STDBY      (1 << 7)

#define FLASH_OPTSR_PRG_PRODUCT_STATE_SHIFT   (8)
#define FLASH_OPTSR_PRG_PRODUCT_STATE_MASK    (0xff << FLASH_OPTSR_PRG_PRODUCT_STATE_SHIFT)

#define FLASH_OPTSR_PRG_IO_VDD_HSLV     (1 << 16)
#define FLASH_OPTSR_PRG_IO_VDDIO2_HSLV  (1 << 17)
#define FLASH_OPTSR_PRG_IWDG_STOP       (1 << 20)
#define FLASH_OPTSR_PRG_IWDG_STDBY      (1 << 21)

#define FLASH_OPTSR_PRG_BOOT_UBE_SHIFT  (22)
#define FLASH_OPTSR_PRG_BOOT_UBE_MASK   (0xff << FLASH_OPTSR_PRG_BOOT_UBE_SHIFT)

#define FLASH_OPTSR_PRG_SWAP_BANK       (1 << 31)

/* Flash Non-Secure EPOCH Register (NSEPOCHR_CUR) */

#define FLASH_NSEPOCHR_CUR_MASK         (0xffffff)

/* Flash Secure EPOCH Register (SECEPOCHR_CUR) */

#define FLASH_SECEPOCHR_CUR_MASK        (0xffffff)

/* Flash Option Status (Current) Register (OPTSR2_CUR) */

#define FLASH_OPTSR2_CUR_SRAM13_RST     (1 << 2)
#define FLASH_OPTSR2_CUR_SRAM2_RST      (1 << 3)
#define FLASH_OPTSR2_CUR_BKPRAM_ECC     (1 << 4)
#define FLASH_OPTSR2_CUR_SRAM3_ECC      (1 << 5)
#define FLASH_OPTSR2_CUR_SRAM2_ECC      (1 << 6)
#define FLASH_OPTSR2_CUR_USBPD_DIS      (1 << 8)

#define FLASH_OPTSR2_CUR_TZEN_SHIFT     (24)
#define FLASH_OPTSR2_CUR_TZEN_MASK      (0xff << FLASH_OPTSR2_CUR_TZEN_SHIFT)
#define FLASH_OPTSR2_CUR_TZEN_EN        (0xb4 << FLASH_OPTSR2_CUR_TZEN_SHIFT)
#define FLASH_OPTSR2_CUR_TZEN_DIS       (0xb4 << FLASH_OPTSR2_CUR_TZEN_SHIFT)

/* Flash Option Status (Program) Register (OPTSR2_PRG) */

#define FLASH_OPTSR2_PRG_SRAM13_RST     (1 << 2)
#define FLASH_OPTSR2_PRG_SRAM2_RST      (1 << 3)
#define FLASH_OPTSR2_PRG_BKPRAM_ECC     (1 << 4)
#define FLASH_OPTSR2_PRG_SRAM3_ECC      (1 << 5)
#define FLASH_OPTSR2_PRG_SRAM2_ECC      (1 << 6)
#define FLASH_OPTSR2_PRG_USBPD_DIS      (1 << 8)

#define FLASH_OPTSR2_PRG_TZEN_SHIFT     (24)
#define FLASH_OPTSR2_PRG_TZEN_MASK      (0xff << FLASH_OPTSR2_PRG_TZEN_SHIFT)
#define FLASH_OPTSR2_PRG_TZEN_EN        (0xb4 << FLASH_OPTSR2_PRG_TZEN_SHIFT)
#define FLASH_OPTSR2_PRG_TZEN_DIS       (0xc3 << FLASH_OPTSR2_PRG_TZEN_SHIFT)

/* Flash Non-Secure Boot (Current) Register (NSBOOTR_CUR) */

#define FLASH_NSBOOTR_CUR_NSBOOT_LOCK_SHIFT  (0)
#define FLASH_NSBOOTR_CUR_NSBOOT_LOCK_MASK   (0xff << FLASH_NSBOOTR_CUR_NSBOOT_LOCK_SHIFT)
#define FLASH_NSBOOTR_CUR_NSBOOT_LOCK_MOD    (0xc3 << FLASH_NSBOOTR_CUR_NSBOOT_LOCK_SHIFT)
#define FLASH_NSBOOTR_CUR_NSBOOT_LOCK_FRZN   (0xb4 << FLASH_NSBOOTR_CUR_NSBOOT_LOCK_SHIFT)

#define FLASH_NSBOOTR_CUR_NSBOOTADD_SHIFT  (8)
#define FLASH_NSBOOTR_CUR_NSBOOTADD_MASK   (0xffffff << FLASH_NSBOOTR_CUR_NSBOOTADD_SHIFT)

/* Flash Non-Secure Boot (Program) Register (NSBOOTR_PRG) */

#define FLASH_NSBOOTR_PRG_NSBOOT_LOCK_SHIFT  (0)
#define FLASH_NSBOOTR_PRG_NSBOOT_LOCK_MASK   (0xff << FLASH_NSBOOTR_PRG_NSBOOT_LOCK_SHIFT)
#define FLASH_NSBOOTR_PRG_NSBOOT_LOCK_MOD    (0xc3 << FLASH_NSBOOTR_PRG_NSBOOT_LOCK_SHIFT)
#define FLASH_NSBOOTR_PRG_NSBOOT_LOCK_FRZN   (0xb4 << FLASH_NSBOOTR_PRG_NSBOOT_LOCK_SHIFT)

#define FLASH_NSBOOTR_PRG_NSBOOTADD_SHIFT  (8)
#define FLASH_NSBOOTR_PRG_NSBOOTADD_MASK   (0xffffff << FLASH_NSBOOTR_PRG_NSBOOTADD_SHIFT)

/* Flash Secure Boot (Current) Register (SECBOOTR_CUR) */

#define FLASH_SECBOOTR_CUR_SECBOOT_LOCK_SHIFT  (0)
#define FLASH_SECBOOTR_CUR_SECBOOT_LOCK_MASK   (0xff << FLASH_SECBOOTR_CUR_SECBOOT_LOCK_SHIFT)
#define FLASH_SECBOOTR_CUR_SECBOOT_LOCK_MOD    (0xc3 << FLASH_SECBOOTR_CUR_SECBOOT_LOCK_SHIFT)
#define FLASH_SECBOOTR_CUR_SECBOOT_LOCK_FRZN   (0xb4 << FLASH_SECBOOTR_CUR_SECBOOT_LOCK_SHIFT)

#define FLASH_SECBOOTR_CUR_SECBOOTADD_SHIFT  (8)
#define FLASH_SECBOOTR_CUR_SECBOOTADD_MASK   (0xffffff << FLASH_SECBOOTR_CUR_SECBOOTADD_SHIFT)

/* Flash Secure Boot Register (BOOTR_PRG) */

#define FLASH_BOOTR_PRG_SECBOOT_LOCK_SHIFT  (0)
#define FLASH_BOOTR_PRG_SECBOOT_LOCK_MASK   (0xff << FLASH_BOOTR_PRG_SECBOOT_LOCK_SHIFT)
#define FLASH_BOOTR_PRG_SECBOOT_LOCK_MOD    (0xc3 << FLASH_BOOTR_PRG_SECBOOT_LOCK_SHIFT)
#define FLASH_BOOTR_PRG_SECBOOT_LOCK_FRZN   (0xb4 << FLASH_BOOTR_PRG_SECBOOT_LOCK_SHIFT)

#define FLASH_BOOTR_PRG_SECBOOTADD_SHIFT    (8)
#define FLASH_BOOTR_PRG_SECBOOTADD_MASK     (0xffffff << FLASH_BOOTR_PRG_SECBOOTADD_SHIFT)

/* Flash Security Watermark for Bank1 (Current) Register (SECWM1R_CUR) */

#define FLASH_SECWM1R_CUR_SECWM1_STRT_SHIFT  (0)
#define FLASH_SECWM1R_CUR_SECWM1_END_SHIFT   (16)

#if defined(CONFIG_STM32H5_STM32H56XXX) || defined(CONFIG_STM32H5_STM32H57XXX)
#  define FLASH_SECWM1R_CUR_SECWM1_STRT_MASK  (0x7f << FLASH_SECWM1R_CUR_SECWM1_STRT_SHIFT)
#  define FLASH_SECWM1R_CUR_SECWM1_END_MASK   (0x7f << FLASH_SECWM1R_CUR_SECWM1_END_SHIFT)
#endif

#if defined(CONFIG_STM32H5_STM32H52XXX) || defined(CONFIG_STM32H5_STM32H53XXX)
#  define FLASH_SECWM1R_CUR_SECWM1_STRT_MASK  (0x1f << FLASH_SECWM1R_CUR_SECWM1_STRT_SHIFT)
#  define FLASH_SECWM1R_CUR_SECWM1_END_MASK   (0x1f << FLASH_SECWM1R_CUR_SECWM1_END_SHIFT)
#endif

/* Flash Security Watermark for Bank1 (Program) Register (SECWM1R_PRG) */

#define FLASH_SECWM1R_PRG_SECWM1_STRT_SHIFT  (0)
#define FLASH_SECWM1R_PRG_SECWM1_END_SHIFT   (16)

#if defined(CONFIG_STM32H5_STM32H56XXX) || defined(CONFIG_STM32H5_STM32H57XXX)
#  define FLASH_SECWM1R_PRG_SECWM1_STRT_MASK  (0x7f << FLASH_SECWM1R_PRG_SECWM1_STRT_SHIFT)
#  define FLASH_SECWM1R_PRG_SECWM1_END_MASK   (0x7f << FLASH_SECWM1R_PRG_SECWM1_END_SHIFT)
#endif

#if defined(CONFIG_STM32H5_STM32H52XXX) || defined(CONFIG_STM32H5_STM32H53XXX)
#  define FLASH_SECWM1R_PRG_SECWM1_STRT_MASK  (0x1f << FLASH_SECWM1R_PRG_SECWM1_STRT_SHIFT)
#  define FLASH_SECWM1R_PRG_SECWM1_END_MASK   (0x1f << FLASH_SECWM1R_PRG_SECWM1_END_SHIFT)
#endif

/* Flash Data Sector Configuration Bank 1 (Current) Register (EDATA1R_CUR) */

#define FLASH_EDATA1R_CUR_EDATA1_STRT_SHIFT  (0)
#define FLASH_EDATA1R_CUR_EDATA1_STRT_MASK   (3 << FLASH_EDATA1R_CUR_EDATA1_STRT_SHIFT)
#define FLASH_EDATA1R_CUR_EDATA1_STRT(n)     ((n-1) << FLASH_EDATA1R_CUR_EDATA1_STRT_SHIFT) /* n = 1..8 */

#define FLASH_EDATA1R_CUR_EDATA1_EN          (1 << 15)

/* Flash Data Sector Configuration Bank 1 (Program) Register (EDATA1R_PRG) */

#define FLASH_EDATA1R_PRG_EDATA1_STRT_SHIFT  (0)
#define FLASH_EDATA1R_PRG_EDATA1_STRT_MASK   (3 << FLASH_EDATA1R_PRG_EDATA1_STRT_SHIFT)
#define FLASH_EDATA1R_PRG_EDATA1_STRT(n)     ((n-1) << FLASH_EDATA1R_PRG_EDATA1_STRT_SHIFT) /* n = 1..8 */

#define FLASH_EDATA1R_PRG_EDATA1_EN          (1 << 15)

/* Flash HDP Bank 1 Configuration (Current) Register (HDP1R_CUR) */

#define FLASH_HDP1R_CUR_HDP1_STRT_SHIFT  (0)
#define FLASH_HDP1R_CUR_HDP1_END_SHIFT   (0)

#if defined(CONFIG_STM32H5_STM32H56XXX) || defined(CONFIG_STM32H5_STM32H57XXX)
#  define FLASH_HDP1R_CUR_HDP1_STRT_MASK  (0x7f << FLASH_HDP1R_PRG_HDP1_STRT_SHIFT)
#  define FLASH_HDP1R_CUR_HDP1_END_MASK   (0x7f << FLASH_HDP1R_PRG_HDP1_END_SHIFT)
#endif

#if defined(CONFIG_STM32H5_STM32H52XXX) || defined(CONFIG_STM32H5_STM32H53XXX)
#  define FLASH_HDP1R_CUR_HDP1_STRT_MASK  (0x1f << FLASH_HDP1R_PRG_HDP1_STRT_SHIFT)
#  define FLASH_HDP1R_CUR_HDP1_END_MASK   (0x1f << FLASH_HDP1R_PRG_HDP1_END_SHIFT)
#endif

/* Flash HDP Bank 1 Configuration (Program) Register (HDP1R_PRG) */

#define FLASH_HDP1R_PRG_HDP1_STRT_SHIFT  (0)
#define FLASH_HDP1R_PRG_HDP1_END_SHIFT   (0)

#if defined(CONFIG_STM32H5_STM32H56XXX) || defined(CONFIG_STM32H5_STM32H57XXX)
#  define FLASH_HDP1R_PRG_HDP1_STRT_MASK  (0x7f << FLASH_HDP1R_PRG_HDP1_STRT_SHIFT)
#  define FLASH_HDP1R_PRG_HDP1_END_MASK   (0x7f << FLASH_HDP1R_PRG_HDP1_END_SHIFT)
#endif

#if defined(CONFIG_STM32H5_STM32H52XXX) || defined(CONFIG_STM32H5_STM32H53XXX)
#  define FLASH_HDP1R_PRG_HDP1_STRT_MASK  (0x1f << FLASH_HDP1R_PRG_HDP1_STRT_SHIFT)
#  define FLASH_HDP1R_PRG_HDP1_END_MASK   (0x1f << FLASH_HDP1R_PRG_HDP1_END_SHIFT)
#endif

/* Flash ECC Correction Register (ECCCORR) */

#define FLASH_ECCCORR_ADDR_ECC_SHIFT  (0)
#define FLASH_ECCCORR_ADDR_ECC_MASK   (0xffff << FLASH_ECCCORR_ADDR_ECC_SHIFT)

#define FLASH_ECCCORR_OBK_ECC    (1 << 20)
#define FLASH_ECCCORR_EDATA_ECC  (1 << 21)
#define FLASH_ECCCORR_BK_ECC     (1 << 22)
#define FLASH_ECCCORR_SYSF_ECC   (1 << 23)
#define FLASH_ECCCORR_OTP_ECC    (1 << 24)
#define FLASH_ECCCORR_ECCCIE     (1 << 25)
#define FLASH_ECCCORR_ECCC       (1 << 30)

/* Flash ECC Detection Register (ECCDETR) */

#define FLASH_ECCDETR_ADDR_ECC_SHIFT  (0)
#define FLASH_ECCDETR_ADDR_ECC_MASK   (0xffff << FLASH_ECCDETR_ADDR_ECC_SHIFT)

#define FLASH_ECCDETR_OBK_ECC    (1 << 20)
#define FLASH_ECCDETR_EDATA_ECC  (1 << 21)
#define FLASH_ECCDETR_BK_ECC     (1 << 22)
#define FLASH_ECCDETR_SYSF_ECC   (1 << 23)
#define FLASH_ECCDETR_OTP_ECC    (1 << 24)
#define FLASH_ECCDETR_ECCD       (1 << 31)

/* Flash ECC Data Register (ECCDR) */

#define FLASH_ECCDR_DATA_ECC_SHIFT  (0)
#define FLASH_ECCDR_DATA_ECC_MASK   (0xffff << FLASH_ECCDR_DATA_ECC_SHIFT)

/* Flash Security Watermark for Bank2 (Program) Register (SECWM2R_PRG) */

#define FLASH_SECWM2R_PRG_SECWM2_STRT_SHIFT  (0)
#define FLASH_SECWM2R_PRG_SECWM2_END_SHIFT   (16)

#if defined(CONFIG_STM32H5_STM32H56XXX) || defined(CONFIG_STM32H5_STM32H57XXX)
#  define FLASH_SECWM2R_PRG_SECWM2_STRT_MASK  (0x7f << FLASH_SECWM2R_PRG_SECWM2_STRT_SHIFT)
#  define FLASH_SECWM2R_PRG_SECWM2_END_MASK   (0x7f << FLASH_SECWM2R_PRG_SECWM2_END_SHIFT)
#endif

#if defined(CONFIG_STM32H5_STM32H52XXX) || defined(CONFIG_STM32H5_STM32H53XXX)
#  define FLASH_SECWM2R_PRG_SECWM2_STRT_MASK  (0x1f << FLASH_SECWM2R_PRG_SECWM2_STRT_SHIFT)
#  define FLASH_SECWM2R_PRG_SECWM2_END_MASK   (0x1f << FLASH_SECWM2R_PRG_SECWM2_END_SHIFT)
#endif

/* Flash Data Sector Configuration Bank 2 (Current) Register (EDATA2R_CUR) */

#define FLASH_EDATA2R_CUR_EDATA2_STRT_SHIFT  (0)
#define FLASH_EDATA2R_CUR_EDATA2_STRT_MASK   (3 << FLASH_EDATA2R_CUR_EDATA2_STRT_SHIFT)
#define FLASH_EDATA2R_CUR_EDATA2_STRT(n)     ((n-1) << FLASH_EDATA2R_CUR_EDATA2_STRT_SHIFT) /* n = 1..8 */

#define FLASH_EDATA2R_CUR_EDATA2_EN          (1 << 15)

/* Flash Data Sector Configuration Bank 2 (Program) Register (EDATA2R_PRG) */

#define FLASH_EDATA2R_PRG_EDATA2_STRT_SHIFT  (0)
#define FLASH_EDATA2R_PRG_EDATA2_STRT_MASK   (3 << FLASH_EDATA2R_PRG_EDATA2_STRT_SHIFT)
#define FLASH_EDATA2R_PRG_EDATA2_STRT(n)     ((n-1) << FLASH_EDATA2R_PRG_EDATA2_STRT_SHIFT) /* n = 1..8 */

#define FLASH_EDATA2R_PRG_EDATA2_EN          (1 << 15)

/* Flash HDP Bank 2 Configuration (Current) Register (HDP1R_CUR) */

#define FLASH_HDP2R_CUR_HDP2_STRT_SHIFT  (0)
#define FLASH_HDP2R_CUR_HDP2_END_SHIFT   (0)

#if defined(CONFIG_STM32H5_STM32H56XXX) || defined(CONFIG_STM32H5_STM32H57XXX)
#  define FLASH_HDP2R_CUR_HDP2_STRT_MASK  (0x7f << FLASH_HDP2R_PRG_HDP2_STRT_SHIFT)
#  define FLASH_HDP2R_CUR_HDP2_END_MASK   (0x7f << FLASH_HDP2R_PRG_HDP2_END_SHIFT)
#endif

#if defined(CONFIG_STM32H5_STM32H52XXX) || defined(CONFIG_STM32H5_STM32H53XXX)
#  define FLASH_HDP2R_CUR_HDP2_STRT_MASK  (0x1f << FLASH_HDP2R_PRG_HDP2_STRT_SHIFT)
#  define FLASH_HDP2R_CUR_HDP2_END_MASK   (0x1f << FLASH_HDP2R_PRG_HDP2_END_SHIFT)
#endif

/* Flash HDP Bank 2 Configuration (Program) Register (HDP2R_PRG) */

#define FLASH_HDP2R_PRG_HDP2_STRT_SHIFT  (0)
#define FLASH_HDP2R_PRG_HDP2_END_SHIFT   (0)

#if defined(CONFIG_STM32H5_STM32H56XXX) || defined(CONFIG_STM32H5_STM32H57XXX)
#  define FLASH_HDP2R_PRG_HDP2_STRT_MASK  (0x7f << FLASH_HDP2R_PRG_HDP2_STRT_SHIFT)
#  define FLASH_HDP2R_PRG_HDP2_END_MASK   (0x7f << FLASH_HDP2R_PRG_HDP2_END_SHIFT)
#endif

#if defined(CONFIG_STM32H5_STM32H52XXX) || defined(CONFIG_STM32H5_STM32H53XXX)
#  define FLASH_HDP2R_PRG_HDP2_STRT_MASK  (0x1f << FLASH_HDP2R_PRG_HDP2_STRT_SHIFT)
#  define FLASH_HDP2R_PRG_HDP2_END_MASK   (0x1f << FLASH_HDP2R_PRG_HDP2_END_SHIFT)
#endif

#endif /* __ARCH_ARM_SRC_STM32H5_HARDWARE_STM32H5XXX_FLASH_H */
