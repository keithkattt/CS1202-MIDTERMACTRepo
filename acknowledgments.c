#include <stdio.h>
#include <unistd.h> 
#include <windows.h>
#include <conio.h>
#include <stdlib.h>
#include "functions.h"

void acknowledgements(){
    system("cls");
    SetColorAndBackground(6, 0); 
    const char *header[] = {
        "     _        _                        _          _                                 _   ",
        "    / \\   ___| | ___ __   _____      _| | ___  __| | __ _  ___ _ __ ___   ___ _ __ | |_ ",
        "   / _ \\ / __| |/ / '_ \\ / _ \\ \\ /\\ / / |/ _ \\/ _` |/ _` |/ _ \\ '_ ` _ \\ / _ \\ '_ \\| __|",
        "  / ___ \\ (__|   <| | | | (_) \\ V  V /| |  __/ (_| | (_| |  __/ | | | | |  __/ | | | |_ ",
        " /_/   \\\\_\\___|_\\_\\_| |_|\\___/ \\_/\\_/ |_|\\___|\\__,_|\\__, |\\___|_| |_| |_|\\___|_| |_|\\__|\n",
        "                                                    |___/                                "
    };

    int headerSize = sizeof(header) / sizeof(header[0]);
    int headerHeight = 0;

    for (int i = 0; i < headerSize; i++) {
        gotoxy(30, headerHeight++);
        printf("%s\n", header[i]); // Print the current line
        usleep(200000);            // 200 milliseconds delay between lines
        
    }
    ResetColor();

    
    const char *acknowledgement[] = {
        " __________________________________________________________________________________________", 
        "|  Menus, Acknowledgements, Create/Display Activity B by:                                  |",
        "|  Keith Arwil Umali || 0961 279 8645 || keith110606@gmail.com || BSCS-DS-1A               |",
        "|__________________________________________________________________________________________|",
        "|  Create/Search Activity A by:                                                            |",  
        "|  Allyn Castanales Tubice || 0963 352 2935 || allyntubics526@gmail.com || BSCS-DS-1A      |",   
        "|__________________________________________________________________________________________|",
        "|  Create/Display Activity C by:                                                           |",
        "|  Lance Aclan || 0967 276 0722 || lancemercadoaclan@gmail.com || BSCS-DS-1A               |",
        "|__________________________________________________________________________________________|",
        "|  Create/Search Activity B by:                                                            |",
        "|  Angelie Joy Macabuhay || 0905 316 4853 || angeliejoymacabuhay@gmail.com BSCS-DS-1A      |",
        "|__________________________________________________________________________________________|",  
        "|  Create/Display Activity A by:                                                           |",
        "|  Hannah Kim Tominez || 0962 793 0143 || tominezhannah800@gmail.com || BSCS-DS-1A         |",
        "|__________________________________________________________________________________________|",
    };
    
    int acknowledgementSize = sizeof(acknowledgement) / sizeof(acknowledgement[0]);
    int acknowledgementHeight = 6;

      // Print each line with a small delay
    for (int i = 0; i < acknowledgementSize; i++) {
        gotoxy(28, acknowledgementHeight++);
        printf("%s\n", acknowledgement[i]); // Print the current line 
        usleep(200000);            // 200 milliseconds delay between lines
    }
        gotoxy(54, 23); 
        printf("Thank you for using our program"); usleep(1000000); printf("."); usleep(1000000); printf("."); usleep(1000000); printf(".");  
        usleep(1000000); printf("\n"); printf("\033[F\033[K");


    for (int i = 0; i < acknowledgementSize; i++) {
        printf("\033[F\033[K"); // ANSI escape codes to move cursor up and clear line
        fflush(stdout);         // Ensure output is updated immediately
        usleep(200000);          // 200 milliseconds delay between lines
    }

    for (int i = 0; i <= headerSize; i++) {
      
        printf("\033[F\033[K"); // ANSI escape codes to move cursor up and clear line
        fflush(stdout);         // Ensure output is updated immediately
        usleep(200000);          // 200 milliseconds delay between lines
    }
    
    
}
