/*
 * i2c_lcd.h
 *
 *  Created on: Apr 2, 2024
 *      Author: Yugandhar
 */

#ifndef I2C_LCD_H_
#define I2C_LCD_H_

#include "i2c.h"


#define LCD_SLAVE_ADDR_W	0x4E

#define LCD_SLAVE_ADDR_R	(LCD_SLAVE_ADDR_W | 0x01)

#define LCD_CLEAR		0x01
#define LCD_FN_SET_8BIT	0x30
#define LCD_FN_SET_4BIT	0x20
#define LCD_FN_SET_4BIT_2LINES	0x28
#define LCD_DISP_CTRL	0x08
#define LCD_DISP_ON		0x0C
#define LCD_ENTRY_MODE	0x06
#define LCD_LINE1		0x80
#define LCD_LINE2		0xC0

#define LCD_RS	0
#define LCD_RW	1
#define LCD_EN	2
#define LCD_BL	3

#define LCD_CMD		0x80
#define LCD_DATA	1


int LcdInit(void);
void LcdWrite(uint8_t rs, uint8_t val);
void LcdPuts(uint8_t line, char str[]);

#endif /* I2C_LCD_H_ */
