#ifndef FUNCTIONS_H
#define FUNCTIONS_H

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <conio.h>
#include <windows.h>
#include <process.h>
#include <unistd.h>
#include <ctype.h>
   
void PrintEffect(const char *str, int delay){
    for(int i = 0; str[i] != '\0'; i++){
        printf("%c", str[i]);
        Sleep(delay);
    }
}

void SetColorAndBackground(int ForgC, int BackC){
     WORD wColor = ((BackC & 0x0F) << 4) + (ForgC & 0x0F);
     SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), wColor);
     return;
}

void resetColor() {
    SetColorAndBackground(15, 0);
}

void ResetColor(){
    SetColorAndBackground(15, 0);
}

void gotoxy(int x, int y){
            COORD xyPos = {0, 0};   //initialization cursor position
            xyPos.X = x;   xyPos.Y =  y;  //assign coordinates

            SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE),xyPos);
            return;
}

void decreaseFontSize(){ 
    
    // Simulate pressing Ctrl
   keybd_event(VK_CONTROL, 0, 0, 0);

   // Simulate pressing '-' (minus key)
   keybd_event(VK_OEM_MINUS, 0, 0, 0);

   // Release '-' key
   keybd_event(VK_OEM_MINUS, 0, KEYEVENTF_KEYUP, 0);

   // Release Ctrl key
   keybd_event(VK_CONTROL, 0, KEYEVENTF_KEYUP, 0);

}

void increaseFontSize(){
    // Simulate pressing CTRL
    keybd_event(VK_CONTROL, 0, 0, 0);

    // Simulate pressing '+'
    keybd_event(VK_OEM_PLUS, 0, 0, 0);

    // Release '+'
    keybd_event(VK_OEM_PLUS, 0, KEYEVENTF_KEYUP, 0);

    // Release CTRL
    keybd_event(VK_CONTROL, 0, KEYEVENTF_KEYUP, 0);

}

#endif