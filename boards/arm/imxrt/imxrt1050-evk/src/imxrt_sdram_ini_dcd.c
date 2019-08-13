/*****************************************************************************
 * boards/arm/imxrt/imxrt1050-evk/src/imxrt_sdram_ini_dcd.c
 *
 *   Copyright (C) 2017, NXP Semiconductors, Inc.
 *
 * Redistribution and use in source and binary forms, with or without
 * modification, are permitted provided that the following conditions
 * are met:
 *
 * 1. Redistributions of source code must retain the above copyright
 *    notice, this list of conditions and the following disclaimer.
 * 2. Redistributions in binary form must reproduce the above copyright
 *    notice, this list of conditions and the following disclaimer in
 *    the documentation and/or other materials provided with the
 *    distribution.
 * 3. Neither the name NuttX nor the names of its contributors may be
 *    used to endorse or promote products derived from this software
 *    without specific prior written permission.
 *
 * THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS
 * "AS IS" AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT
 * LIMITED TO, THE IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS
 * FOR A PARTICULAR PURPOSE ARE DISCLAIMED. IN NO EVENT SHALL THE
 * COPYRIGHT OWNER OR CONTRIBUTORS BE LIABLE FOR ANY DIRECT, INDIRECT,
 * INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES (INCLUDING,
 * BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES; LOSS
 * OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED
 * AND ON ANY THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT
 * LIABILITY, OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN
 * ANY WAY OUT OF THE USE OF THIS SOFTWARE, EVEN IF ADVISED OF THE
 * POSSIBILITY OF SUCH DAMAGE.
 ****************************************************************************/

#include "imxrt_flexspi_nor_boot.h"

__attribute__((section(".boot_hdr.dcd_data")))

/****************************************************************************
 * Public Data
 ****************************************************************************/

const uint8_t g_dcd_data[] =
{
  /* 0000 */ DCD_TAG_HEADER,
  0x04,
  0x30,
  0x41,
  0xcc,
  0x03,
  0xac,
  0x04,
  0x40,
  0x0f,
  0xc0,
  0x68,
  0xff,
  0xff,
  0xff,
  0xff,
  /* 0010 */ 0x40,
  0x0f,
  0xc0,
  0x6c,
  0xff,
  0xff,
  0xff,
  0xff,
  0x40,
  0x0f,
  0xc0,
  0x70,
  0xff,
  0xff,
  0xff,
  0xff,
  /* 0020 */ 0x40,
  0x0f,
  0xc0,
  0x74,
  0xff,
  0xff,
  0xff,
  0xff,
  0x40,
  0x0f,
  0xc0,
  0x78,
  0xff,
  0xff,
  0xff,
  0xff,
  /* 0030 */ 0x40,
  0x0f,
  0xc0,
  0x7c,
  0xff,
  0xff,
  0xff,
  0xff,
  0x40,
  0x0f,
  0xc0,
  0x80,
  0xff,
  0xff,
  0xff,
  0xff,
  /* 0040 */ 0x40,
  0x0d,
  0x80,
  0x30,
  0x00,
  0x00,
  0x20,
  0x01,
  0x40,
  0x0d,
  0x81,
  0x00,
  0x00,
  0x1d,
  0x00,
  0x00,
  /* 0050 */ 0x40,
  0x0f,
  0xc0,
  0x14,
  0x00,
  0x01,
  0x0d,
  0x40,
  0x40,
  0x1f,
  0x80,
  0x14,
  0x00,
  0x00,
  0x00,
  0x00,
  /* 0060 */ 0x40,
  0x1f,
  0x80,
  0x18,
  0x00,
  0x00,
  0x00,
  0x00,
  0x40,
  0x1f,
  0x80,
  0x1c,
  0x00,
  0x00,
  0x00,
  0x00,
  /* 0070 */ 0x40,
  0x1f,
  0x80,
  0x20,
  0x00,
  0x00,
  0x00,
  0x00,
  0x40,
  0x1f,
  0x80,
  0x24,
  0x00,
  0x00,
  0x00,
  0x00,
  /* 0080 */ 0x40,
  0x1f,
  0x80,
  0x28,
  0x00,
  0x00,
  0x00,
  0x00,
  0x40,
  0x1f,
  0x80,
  0x2c,
  0x00,
  0x00,
  0x00,
  0x00,
  /* 0090 */ 0x40,
  0x1f,
  0x80,
  0x30,
  0x00,
  0x00,
  0x00,
  0x00,
  0x40,
  0x1f,
  0x80,
  0x34,
  0x00,
  0x00,
  0x00,
  0x00,
  /* 00a0 */ 0x40,
  0x1f,
  0x80,
  0x38,
  0x00,
  0x00,
  0x00,
  0x00,
  0x40,
  0x1f,
  0x80,
  0x3c,
  0x00,
  0x00,
  0x00,
  0x00,
  /* 00b0 */ 0x40,
  0x1f,
  0x80,
  0x40,
  0x00,
  0x00,
  0x00,
  0x00,
  0x40,
  0x1f,
  0x80,
  0x44,
  0x00,
  0x00,
  0x00,
  0x00,
  /* 00c0 */ 0x40,
  0x1f,
  0x80,
  0x48,
  0x00,
  0x00,
  0x00,
  0x00,
  0x40,
  0x1f,
  0x80,
  0x4c,
  0x00,
  0x00,
  0x00,
  0x00,
  /* 00d0 */ 0x40,
  0x1f,
  0x80,
  0x50,
  0x00,
  0x00,
  0x00,
  0x00,
  0x40,
  0x1f,
  0x80,
  0x54,
  0x00,
  0x00,
  0x00,
  0x00,
  /* 00e0 */ 0x40,
  0x1f,
  0x80,
  0x58,
  0x00,
  0x00,
  0x00,
  0x00,
  0x40,
  0x1f,
  0x80,
  0x5c,
  0x00,
  0x00,
  0x00,
  0x00,
  /* 00f0 */ 0x40,
  0x1f,
  0x80,
  0x60,
  0x00,
  0x00,
  0x00,
  0x00,
  0x40,
  0x1f,
  0x80,
  0x64,
  0x00,
  0x00,
  0x00,
  0x00,
  /* 0100 */ 0x40,
  0x1f,
  0x80,
  0x68,
  0x00,
  0x00,
  0x00,
  0x00,
  0x40,
  0x1f,
  0x80,
  0x6c,
  0x00,
  0x00,
  0x00,
  0x00,
  /* 0110 */ 0x40,
  0x1f,
  0x80,
  0x70,
  0x00,
  0x00,
  0x00,
  0x00,
  0x40,
  0x1f,
  0x80,
  0x74,
  0x00,
  0x00,
  0x00,
  0x00,
  /* 0120 */ 0x40,
  0x1f,
  0x80,
  0x78,
  0x00,
  0x00,
  0x00,
  0x00,
  0x40,
  0x1f,
  0x80,
  0x7c,
  0x00,
  0x00,
  0x00,
  0x00,
  /* 0130 */ 0x40,
  0x1f,
  0x80,
  0x80,
  0x00,
  0x00,
  0x00,
  0x00,
  0x40,
  0x1f,
  0x80,
  0x84,
  0x00,
  0x00,
  0x00,
  0x00,
  /* 0140 */ 0x40,
  0x1f,
  0x80,
  0x88,
  0x00,
  0x00,
  0x00,
  0x00,
  0x40,
  0x1f,
  0x80,
  0x8c,
  0x00,
  0x00,
  0x00,
  0x00,
  /* 0150 */ 0x40,
  0x1f,
  0x80,
  0x90,
  0x00,
  0x00,
  0x00,
  0x00,
  0x40,
  0x1f,
  0x80,
  0x94,
  0x00,
  0x00,
  0x00,
  0x00,
  /* 0160 */ 0x40,
  0x1f,
  0x80,
  0x98,
  0x00,
  0x00,
  0x00,
  0x00,
  0x40,
  0x1f,
  0x80,
  0x9c,
  0x00,
  0x00,
  0x00,
  0x00,
  /* 0170 */ 0x40,
  0x1f,
  0x80,
  0xa0,
  0x00,
  0x00,
  0x00,
  0x00,
  0x40,
  0x1f,
  0x80,
  0xa4,
  0x00,
  0x00,
  0x00,
  0x00,
  /* 0180 */ 0x40,
  0x1f,
  0x80,
  0xa8,
  0x00,
  0x00,
  0x00,
  0x00,
  0x40,
  0x1f,
  0x80,
  0xac,
  0x00,
  0x00,
  0x00,
  0x00,
  /* 0190 */ 0x40,
  0x1f,
  0x80,
  0xb0,
  0x00,
  0x00,
  0x00,
  0x10,
  0x40,
  0x1f,
  0x80,
  0xb4,
  0x00,
  0x00,
  0x00,
  0x00,
  /* 01a0 */ 0x40,
  0x1f,
  0x80,
  0xb8,
  0x00,
  0x00,
  0x00,
  0x00,
  0x40,
  0x1f,
  0x82,
  0x04,
  0x00,
  0x01,
  0x10,
  0xf9,
  /* 01b0 */ 0x40,
  0x1f,
  0x82,
  0x08,
  0x00,
  0x01,
  0x10,
  0xf9,
  0x40,
  0x1f,
  0x82,
  0x0c,
  0x00,
  0x01,
  0x10,
  0xf9,
  /* 01c0 */ 0x40,
  0x1f,
  0x82,
  0x10,
  0x00,
  0x01,
  0x10,
  0xf9,
  0x40,
  0x1f,
  0x82,
  0x14,
  0x00,
  0x01,
  0x10,
  0xf9,
  /* 01d0 */ 0x40,
  0x1f,
  0x82,
  0x18,
  0x00,
  0x01,
  0x10,
  0xf9,
  0x40,
  0x1f,
  0x82,
  0x1c,
  0x00,
  0x01,
  0x10,
  0xf9,
  /* 01e0 */ 0x40,
  0x1f,
  0x82,
  0x20,
  0x00,
  0x01,
  0x10,
  0xf9,
  0x40,
  0x1f,
  0x82,
  0x24,
  0x00,
  0x01,
  0x10,
  0xf9,
  /* 01f0 */ 0x40,
  0x1f,
  0x82,
  0x28,
  0x00,
  0x01,
  0x10,
  0xf9,
  0x40,
  0x1f,
  0x82,
  0x2c,
  0x00,
  0x01,
  0x10,
  0xf9,
  /* 0200 */ 0x40,
  0x1f,
  0x82,
  0x30,
  0x00,
  0x01,
  0x10,
  0xf9,
  0x40,
  0x1f,
  0x82,
  0x34,
  0x00,
  0x01,
  0x10,
  0xf9,
  /* 0210 */ 0x40,
  0x1f,
  0x82,
  0x38,
  0x00,
  0x01,
  0x10,
  0xf9,
  0x40,
  0x1f,
  0x82,
  0x3c,
  0x00,
  0x01,
  0x10,
  0xf9,
  /* 0220 */ 0x40,
  0x1f,
  0x82,
  0x40,
  0x00,
  0x01,
  0x10,
  0xf9,
  0x40,
  0x1f,
  0x82,
  0x44,
  0x00,
  0x01,
  0x10,
  0xf9,
  /* 0230 */ 0x40,
  0x1f,
  0x82,
  0x48,
  0x00,
  0x01,
  0x10,
  0xf9,
  0x40,
  0x1f,
  0x82,
  0x4c,
  0x00,
  0x01,
  0x10,
  0xf9,
  /* 0240 */ 0x40,
  0x1f,
  0x82,
  0x50,
  0x00,
  0x01,
  0x10,
  0xf9,
  0x40,
  0x1f,
  0x82,
  0x54,
  0x00,
  0x01,
  0x10,
  0xf9,
  /* 0250 */ 0x40,
  0x1f,
  0x82,
  0x58,
  0x00,
  0x01,
  0x10,
  0xf9,
  0x40,
  0x1f,
  0x82,
  0x5c,
  0x00,
  0x01,
  0x10,
  0xf9,
  /* 0260 */ 0x40,
  0x1f,
  0x82,
  0x60,
  0x00,
  0x01,
  0x10,
  0xf9,
  0x40,
  0x1f,
  0x82,
  0x64,
  0x00,
  0x01,
  0x10,
  0xf9,
  /* 0270 */ 0x40,
  0x1f,
  0x82,
  0x68,
  0x00,
  0x01,
  0x10,
  0xf9,
  0x40,
  0x1f,
  0x82,
  0x6c,
  0x00,
  0x01,
  0x10,
  0xf9,
  /* 0280 */ 0x40,
  0x1f,
  0x82,
  0x70,
  0x00,
  0x01,
  0x10,
  0xf9,
  0x40,
  0x1f,
  0x82,
  0x74,
  0x00,
  0x01,
  0x10,
  0xf9,
  /* 0290 */ 0x40,
  0x1f,
  0x82,
  0x78,
  0x00,
  0x01,
  0x10,
  0xf9,
  0x40,
  0x1f,
  0x82,
  0x7c,
  0x00,
  0x01,
  0x10,
  0xf9,
  /* 02a0 */ 0x40,
  0x1f,
  0x82,
  0x80,
  0x00,
  0x01,
  0x10,
  0xf9,
  0x40,
  0x1f,
  0x82,
  0x84,
  0x00,
  0x01,
  0x10,
  0xf9,
  /* 02b0 */ 0x40,
  0x1f,
  0x82,
  0x88,
  0x00,
  0x01,
  0x10,
  0xf9,
  0x40,
  0x1f,
  0x82,
  0x8c,
  0x00,
  0x01,
  0x10,
  0xf9,
  /* 02c0 */ 0x40,
  0x1f,
  0x82,
  0x90,
  0x00,
  0x01,
  0x10,
  0xf9,
  0x40,
  0x1f,
  0x82,
  0x94,
  0x00,
  0x01,
  0x10,
  0xf9,
  /* 02d0 */ 0x40,
  0x1f,
  0x82,
  0x98,
  0x00,
  0x01,
  0x10,
  0xf9,
  0x40,
  0x1f,
  0x82,
  0x9c,
  0x00,
  0x01,
  0x10,
  0xf9,
  /* 02e0 */ 0x40,
  0x1f,
  0x82,
  0xa0,
  0x00,
  0x01,
  0x10,
  0xf9,
  0x40,
  0x1f,
  0x82,
  0xa4,
  0x00,
  0x01,
  0x10,
  0xf9,
  /* 02f0 */ 0x40,
  0x1f,
  0x82,
  0xa8,
  0x00,
  0x01,
  0x10,
  0xf9,
  0x40,
  0x2f,
  0x00,
  0x00,
  0x10,
  0x00,
  0x00,
  0x04,
  /* 0300 */ 0x40,
  0x2f,
  0x00,
  0x08,
  0x00,
  0x03,
  0x05,
  0x24,
  0x40,
  0x2f,
  0x00,
  0x0c,
  0x06,
  0x03,
  0x05,
  0x24,
  /* 0310 */ 0x40,
  0x2f,
  0x00,
  0x10,
  0x80,
  0x00,
  0x00,
  0x1b,
  0x40,
  0x2f,
  0x00,
  0x14,
  0x82,
  0x00,
  0x00,
  0x1b,
  /* 0320 */ 0x40,
  0x2f,
  0x00,
  0x18,
  0x84,
  0x00,
  0x00,
  0x1b,
  0x40,
  0x2f,
  0x00,
  0x1c,
  0x86,
  0x00,
  0x00,
  0x1b,
  /* 0330 */ 0x40,
  0x2f,
  0x00,
  0x20,
  0x90,
  0x00,
  0x00,
  0x21,
  0x40,
  0x2f,
  0x00,
  0x24,
  0xa0,
  0x00,
  0x00,
  0x19,
  /*  0340 */ 0x40,
  0x2f,
  0x00,
  0x28,
  0xa8,
  0x00,
  0x00,
  0x17,
  0x40,
  0x2f,
  0x00,
  0x2c,
  0xa9,
  0x00,
  0x00,
  0x1b,
  /*  0350 */ 0x40,
  0x2f,
  0x00,
  0x30,
  0x00,
  0x00,
  0x00,
  0x21,
  0x40,
  0x2f,
  0x00,
  0x04,
  0x00,
  0x00,
  0x79,
  0xa8,
  /* 0360  */ 0x40,
  0x2f,
  0x00,
  0x40,
  0x00,
  0x00,
  0x0f,
  0x31,
  0x40,
  0x2f,
  0x00,
  0x44,
  0x00,
  0x65,
  0x29,
  0x22,
  /* 0370  */ 0x40,
  0x2f,
  0x00,
  0x48,
  0x00,
  0x01,
  0x09,
  0x20,
  0x40,
  0x2f,
  0x00,
  0x4c,
  0x50,
  0x21,
  0x0a,
  0x08,
  /* 0380  */ 0x40,
  0x2f,
  0x00,
  0x80,
  0x00,
  0x00,
  0x00,
  0x21,
  0x40,
  0x2f,
  0x00,
  0x84,
  0x00,
  0x88,
  0x88,
  0x88,
  /* 0390  */ 0x40,
  0x2f,
  0x00,
  0x94,
  0x00,
  0x00,
  0x00,
  0x02,
  0x40,
  0x2f,
  0x00,
  0x98,
  0x00,
  0x00,
  0x00,
  0x00,
  /* 03a0  */ 0x40,
  0x2f,
  0x00,
  0x90,
  0x80,
  0x00,
  0x00,
  0x00,
  0x40,
  0x2f,
  0x00,
  0x9c,
  0xa5,
  0x5a,
  0x00,
  0x0f,
  /* 03b0 */ 0xcf,
  0x00,
  0x0c,
  0x1c,
  0x40,
  0x2f,
  0x00,
  0x3c,
  0x00,
  0x00,
  0x00,
  0x01,
  0xcc,
  0x00,
  0x14,
  0x04,
  /* 03c0 */ 0x40,
  0x2f,
  0x00,
  0x90,
  0x80,
  0x00,
  0x00,
  0x00,
  0x40,
  0x2f,
  0x00,
  0x9c,
  0xa5,
  0x5a,
  0x00,
  0x0c,
  /* 03d0 */ 0xcf,
  0x00,
  0x0c,
  0x1c,
  0x40,
  0x2f,
  0x00,
  0x3c,
  0x00,
  0x00,
  0x00,
  0x01,
  0xcc,
  0x00,
  0x14,
  0x04,
  /* 03e0 */ 0x40,
  0x2f,
  0x00,
  0x90,
  0x80,
  0x00,
  0x00,
  0x00,
  0x40,
  0x2f,
  0x00,
  0x9c,
  0xa5,
  0x5a,
  0x00,
  0x0c,
  /* 03f0 */ 0xcf,
  0x00,
  0x0c,
  0x1c,
  0x40,
  0x2f,
  0x00,
  0x3c,
  0x00,
  0x00,
  0x00,
  0x01,
  0xcc,
  0x00,
  0x1c,
  0x04,
  /* 0400 */ 0x40,
  0x2f,
  0x00,
  0xa0,
  0x00,
  0x00,
  0x00,
  0x33,
  0x40,
  0x2f,
  0x00,
  0x90,
  0x80,
  0x00,
  0x00,
  0x00,
  /* 0410 */ 0x40,
  0x2f,
  0x00,
  0x9c,
  0xa5,
  0x5a,
  0x00,
  0x0a,
  0xcf,
  0x00,
  0x0c,
  0x1c,
  0x40,
  0x2f,
  0x00,
  0x3c,
  /* 0420 */ 0x00,
  0x00,
  0x00,
  0x01,
  0xcc,
  0x00,
  0x0c,
  0x04,
  0x40,
  0x2f,
  0x00,
  0x4c,
  0x50,
  0x21,
  0x0a,
  0x09,
};