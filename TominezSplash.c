#include <stdio.h>
#include <stdlib.h>
#include <windows.h> 
#include <conio.h>  

// Function to set cursor position
void gotoXY(int x, int y) {
    COORD coord;
    coord.X = x;
    coord.Y = y;
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coord);
}

// Function to set text color
void setColor(int color) {
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), color);
}

// Function to create a delay effect
void delay(int milliseconds) {
    Sleep(milliseconds);
}

// Function to print text with a typing effect
void printEffect(const char *text, int delayTime) {
    while (*text) {
        printf("%c", *text);
        fflush(stdout);
        Sleep(delayTime);
        text++;
    }
}

void mainSplashTominez() {
    system("cls");
    setColor(7); // Set text color gray
    printf("\n\n");
    
    setColor(11); // Set color for border
    gotoXY(35, 2);  printEffect("  _____                                                              _____  \n", 5);
    gotoXY(35, 3);  printEffect(" ( ___ )------------------------------------------------------------( ___ ) \n", 5);
    gotoXY(35, 4);  printEffect("  |   |                                                              |   |  \n", 5);
    gotoXY(35, 5);  printEffect("  |   |", 5); setColor(7); printEffect("  _______  _______  __   __  ___   __    _  _______  _______  ", 5); setColor(11); printEffect("|   |  \n", 5);
    gotoXY(35, 6);  printEffect("  |   |", 5); setColor(7); printEffect(" |       ||       ||  |_|  ||   | |  |  | ||       ||       | ", 5); setColor(11); printEffect("|   |  \n", 5);
    gotoXY(35, 7);  printEffect("  |   |", 5); setColor(7); printEffect(" |_     _||   _   ||       ||   | |   |_| ||    ___||____   | ", 5); setColor(11); printEffect("|   |  \n", 5);
    gotoXY(35, 8);  printEffect("  |   |", 5); setColor(7); printEffect("   |   |  |  | |  ||       ||   | |       ||   |___  ____|  | ", 5); setColor(11); printEffect("|   |  \n", 5);
    gotoXY(35, 9);  printEffect("  |   |", 5); setColor(7); printEffect("   |   |  |  |_|  ||       ||   | |  _    ||    ___|| ______| ", 5); setColor(11); printEffect("|   |  \n", 5);
    gotoXY(35, 10); printEffect("  |   |", 5); setColor(7); printEffect("   |   |  |       || ||_|| ||   | | | |   ||   |___ | |_____  ", 5); setColor(11); printEffect("|   |  \n", 5);
    gotoXY(35, 11); printEffect("  |   |", 5); setColor(7); printEffect("   |___|  |_______||_|   |_||___| |_|  |__||_______||_______| ", 5); setColor(11); printEffect("|   |  \n", 5);
    gotoXY(35, 12); printEffect("  |___|                                                              |___|  \n", 5);
    gotoXY(35, 13); printEffect(" (_____)------------------------------------------------------------(_____)  \n", 5);
    setColor(7); // Reset text color

    

    gotoXY(30,16); printEffect("\nPress any key to continue...", 50);
    getch(); // Wait for key press before closing

    setColor(7); // Reset text color to default
   
    return;
}



