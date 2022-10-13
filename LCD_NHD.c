
#include "LCD_NHD.h"
#include "mcc_generated_files/eusart1.h"
#include <xc.h>
#include <stdint.h>
#include <stdbool.h>
#include <stdio.h>

void displayOn(void){//0x41
    EUSART1_Write(0xFE);
    EUSART1_Write(0x41);
}             

void displayOff(void){//0x42
    EUSART1_Write(0xFE);
    EUSART1_Write(0x42);
}            

void setCursor(uint8_t byte){//0x45
    /*      Column 1  Column 20
    Line 1  0x00      0x13
    Line 2  0x40      0x53
    Line 3  0x14      0x27
    Line 4  0x54      0x67*/
    EUSART1_Write(0xFE);
    EUSART1_Write(0x45);
    EUSART1_Write(byte);
    
} 

void cursorHome(void){//0x46
    EUSART1_Write(0xFE);
    EUSART1_Write(0x46);
}

void underlineOn(void){//0x47
    EUSART1_Write(0xFE);
    EUSART1_Write(0x47);
}

void underlineOff(void){//0x48
    EUSART1_Write(0xFE);
    EUSART1_Write(0x48);
}          

void cursorLeft(void){//0x49
    EUSART1_Write(0xFE);
    EUSART1_Write(0x49);
}            

void cursorRight(void){//0x4A
    EUSART1_Write(0xFE);
    EUSART1_Write(0x4A);
}           

void blinkOn(void){//0x4B
    EUSART1_Write(0xFE);
    EUSART1_Write(0x4B);
}               

void blinkOff(void){//0x4C
    EUSART1_Write(0xFE);
    EUSART1_Write(0x4C);
}              

void backspace(void){//0x4E
    EUSART1_Write(0xFE);
    EUSART1_Write(0x4E);
}             

void clearScreen(void){//0x51
    EUSART1_Write(0xFE);
    EUSART1_Write(0x51);
}           

void setContrast(uint8_t contrast){//0x52
    if(contrast >= 1 && contrast <= 50){
        EUSART1_Write(0xFE);
        EUSART1_Write(0x52);
        EUSART1_Write(contrast);
    }
    else{}
}     

void setBrightness(uint8_t brightness){//0x53
    if(brightness >= 1 && brightness <= 8){
        EUSART1_Write(0xFE);
        EUSART1_Write(0x53);
        EUSART1_Write(brightness);
    }
    else{}
} 

void loadCustomChar(uint8_t adresse, uint64_t character){//0x54
    if(adresse >= 0 && adresse <= 7){
        EUSART1_Write(0xFE);
        EUSART1_Write(0x54);
        EUSART1_Write(adresse);
        EUSART1_Write(character);
    }
    else{}
}

void displayLeft(void){//0x55
    EUSART1_Write(0xFE);
    EUSART1_Write(0x55);
}           

void displayRight(void){//0x56
    EUSART1_Write(0xFE);
    EUSART1_Write(0x56);
}