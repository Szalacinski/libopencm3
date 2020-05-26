/** @defgroup flashaccel_file Flash Accelerator API
 * @brief LPC17xx Flash Accelerator API.
 * @ingroup LPC17xx
 * LGPL License Terms @ref lgpl_license
 * @author @htmlonly &copy; @endhtmlonly 2020
 * Caleb Szalacinski <contact@skiboy.net>
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
 #include <libopencm3/lpc17xx/flashaccel.h>

 void flashaccel_flashtim(uint8_t clk)
 {
	 clk &= FLASHACCEL_FLASHCFG_FLASHTIM_MASK;
	 uint32_t tmp_reg = FLASHACCEL_FLASHCFG;
	 tmp_reg &= ~(FLASHACCEL_FLASHCFG_FLASHTIM_MASK << FLASHACCEL_FLASHCFG_FLASHTIM_SHIFT);
	 FLASHACCEL_FLASHCFG = tmp_reg | (clk << FLASHACCEL_FLASHCFG_FLASHTIM_SHIFT);
 }
