#ifndef LCD_H
  #define LCD_H
#define clear_display     0x01
#define returnHome        0x02
#define moveCursorRight   0x06
#define moveCursorLeft    0x08
#define shiftDisplayRight 0x1C
#define shiftDisplayLeft  0x18
#define cursorBlink       0x0F
#define cursorOff         0x0C
#define cursorOn          0x0E
#define Function_set_4bit 0x28
#define Function_set_8bit 0x38
#define Entry_mode        0x06
#define Function_8_bit    0x32
#define Set5x7FontSize    0x20
#define FirstRow          0x80
#include "types.h"


void LCD_init(void);
void LCD_Write(uint8 data, uint8 command);
void LCD_Cmd(uint8 command);
void LCD_Write_Data(uint8 data);
void delayMs(int n);
void delayUs(int n);
void LCD_Write_String(uint8_ptr str);


#endif