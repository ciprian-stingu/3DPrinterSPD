/** 
 * 
 * 3DPrinterSPD
 * 
 * Copyright (C) 2021 Ciprian Stingu
 * ciprian dot stingu at gmail dot com
 * 
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation; either version 2 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program; if not, write to the Free Software
 * Foundation, Inc., 59 Temple Place, Suite 330, Boston, MA 02111 USA
 * or see <http://www.gnu.org/licenses/>
 *
 * File:   main.h
 * Author: Ciprian Stingu
 *
 * Created on March 13, 2021, 3:15 PM
 */

#ifndef MAIN_H
#define	MAIN_H

#include <xc.h>
#include <pic12f508.h>
#include <stdint.h>

#ifdef	__cplusplus
extern "C" {
#endif

// code protection off
#pragma config CP    = OFF
// WDT disabled    
#pragma config WDT  = OFF
// enable GP3
#pragma config MCLRE = OFF
// internal oscillator
#pragma config OSC  = IntRC

#define _XTAL_FREQ 4000000


#ifdef	__cplusplus
}
#endif

#endif	/* MAIN_H */

