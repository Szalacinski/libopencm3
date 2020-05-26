/** @defgroup flashaccel_defines Flash Accelerator Defines
 *
 * @brief <b>Defined Constants and Types for the LPC17xx Flash Accelerator</b>
 *
 * @ingroup LPC17xx_defines
 *
 * LGPL License Terms @ref lgpl_license
 */
/*
 * This file is part of the libopencm3 project.
 *
 * Copyright (C) 2020 Caleb Szalacinski <contact@skiboy.net>
 *
 * This library is free software: you can redistribute it and/or modify
 * it under the terms of the GNU Lesser General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.
 *
 * This library is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU Lesser General Public License for more details.
 *
 * You should have received a copy of the GNU Lesser General Public License
 * along with this library.  If not, see <http://www.gnu.org/licenses/>.
 */
/**@{*/
#ifndef LPC17xx_FLASHACCEL_H
#define LPC17xx_FLASHACCEL_H

#include <libopencm3/cm3/common.h>
#include <libopencm3/lpc17xx/memorymap.h>

#define FLASHACCEL_FLASHCFG MMIO32(0x400FC000)
#define FLASHACCEL_FLASHCFG_FLASHTIM_SHIFT 12
#define FLASHACCEL_FLASHCFG_FLASHTIM_MASK 0xF


BEGIN_DECLS

void flashaccel_flashtim(uint8_t clk);

END_DECLS

#endif
/**@}*/
