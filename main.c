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
 * Created on March 13, 2021, 3:16 PM
 */


#include "main.h"

void main(void) 
{
    // Prescaler assigned to Timer0
    // Prescaler Rate 1:32 (0.000256 * 32)s
    // Enable Wake-up on Pin Change bit
    // Timer0 Clock Source FOSC/4
    // Weak Pull-ups disabled
    OPTION = PS2 | nGPPU | nGPWU;
    // maximum frequency    
    CAL0 = 1;
    CAL1 = 1;
    CAL2 = 1;
    CAL3 = 1;
    CAL4 = 1;
    CAL5 = 1;
    CAL6 = 0;
    // GP0 - in NC
    // GP1 - in
    // GP2 - in NC
    // GP3 - in NC
    // GP4 - out
    // GP5 - in NC
    TRIS = 0b101111;
    GPIO = 0;
    TMR0 = 0;
    
    while(1)
    {
        if(TMR0 == 0xFF)
        {
            GPIO = 0b010000;
            __delay_us(1000);
            GPIO = 0;
            TMR0 = 0;
        }
        else if(GP1 == 1) {
            TMR0 = 0;
        }
        asm("nop");
    }
}
