/* 
 * File:   LCD_NHD.h
 * Author: Vincent G.
 *
 * Created on 12 octobre 2022, 13:58
 */

#ifndef LCD_NHD_H
#define	LCD_NHD_H
#include <xc.h>
#include <stdint.h>
#include <stdbool.h>
#include <stdio.h>



#ifdef	__cplusplus
extern "C" {
#endif

void displayOn(void);             //0x41
void displayOff(void);            //0x42

void clearScreen(void);           //0x51

/*      Column 1  Column 20
Line 1  0x00      0x13
Line 2  0x40      0x53
Line 3  0x14      0x27
Line 4  0x54      0x67*/
void setCursor(uint8_t byte);     //0x45
void cursorLeft(void);            //0x49
void cursorRight(void);           //0x4A
void displayLeft(void);           //0x55

void displayRight(void);          //0x56
void cursorHome(void);            //0x46

void underlineOn(void);           //0x47
void underlineOff(void);          //0x48
void blinkOn(void);               //0x4B
void blinkOff(void);              //0x4C

void backspace(void);             //0x4E

/*between 1 and 50 - default 40*/
void setContrast(uint8_t contrast);      //0x52
/*between 1 and 8 - default 8*/
void setBrightness(uint8_t brightness);  //0x53
/*adresse between 0 and 7
  character 8 by 8 binary*/
void loadCustomChar(uint8_t adresse, uint64_t character); //0x54





#ifdef	__cplusplus
}
#endif

#endif	/* LCD_NHD_H */

