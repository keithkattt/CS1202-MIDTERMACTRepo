#include <stdio.h>
#include <unistd.h>
#include <conio.h>
#include <windows.h>
#include "functions.h"
#include "GroupArray.c"
#include "acknowledgments.c"
#include "AclanArray1C.c"
#include "AclanSplash.c"
#include "MacabuhayArray2B.c"
#include "MacabuhaySplash.c"
#include "TominezArray1A.c"
#include "TominezSplash.c"
#include "TubiceArray2A.c"
#include "TubiceSplash.c"
#include "UmaliArray1B.c"
#include "UmaliSplash.c"

#define ENTER_KEY 13
#define UP_ARROW 72
#define DOWN_ARROW 80

void displayMainMenu(int option);
void mainMenu();
void displaySplashMenu(int option);
void splashMenu();
void displayActivitiesMenu(int option);
void activitiesMenu();
void displayActivitiesSubMenu1(int option);
void activitiesSubMenu1();
void displayActivitiesSubmenu2(int option);
void activitiesSubMenu2();

int main(){
    mainSplash();
    mainMenu();
    acknowledgements();
}

void displayMainMenu(int option) { 
    system("cls");
    
    //ASCII art Main Menu
    SetColorAndBackground(6, 0);
    gotoxy(45, 1);
    printf("  __  __       _         __  __                  ");
    gotoxy(45, 2);
    printf(" |  \\/  |     (_)       |  \\/  |                 ");
    gotoxy(45, 3);
    printf(" | \\  / | __ _ _ _ __   | \\  / | ___ _ __  _   _ ");
    gotoxy(45, 4);
    printf(" | |\\/| |/ _` | | '_ \\  | |\\/| |/ _ \\ '_ \\| | | |");
    gotoxy(45, 5);
    printf(" | |  | | (_| | | | | | | |  | |  __/ | | | |_| |");
    gotoxy(45, 6);
    printf(" |_|  |_|\\__,_|_|_| |_| |_|  |_|\\___|_| |_|\\__,_|");
    gotoxy(45, 7);
    printf("                                                 ");
    gotoxy(45, 8);
    printf("                                                 ");
    SetColorAndBackground(15, 0);

    if (option == 1) {
        gotoxy(55, 9);
        SetColorAndBackground(14, 0);
        printf("-> 1. Group Members Splash");
        SetColorAndBackground(15, 0);
    } else {
        gotoxy(55, 9);
        printf("   1. Group Members Splash");
    } 
    
    if (option == 2) {
        gotoxy(55, 10);
        SetColorAndBackground(14, 0);
        printf("-> 2. Activities");
        SetColorAndBackground(15, 0);
    } else {
        gotoxy(55, 10);
        printf("   2. Activities\n");
    }

    if (option == 3) {
        gotoxy(55, 11);
        SetColorAndBackground(14, 0);
        printf("-> 3. Exit");
        SetColorAndBackground(15, 0);
    } else {
        gotoxy(55, 11);
        printf("   3. Exit");
    }

}

void mainMenu() {
    int option = 1; // Initially highlight the first option
    char *choices[] = {"Group Members Splash", "Activities", "Exit"};
    char key;

    while (1) {
        displayMainMenu(option);
        
        key = _getch(); // Wait for key press

        if (key == UP_ARROW) {
                option--;
            if (option < 1){
                option = 3;
            } 
        } else if (key == DOWN_ARROW) {
            option++;

            if (option > 3){
                option = 1;
            }
        } else if (key == ENTER_KEY) {
            if (option == 3) {
                gotoxy(60, 14);
                printf("Exiting program"); usleep(300000); printf(".");  usleep(300000); printf("."); usleep(300000); printf(".");   
                usleep(1000000); 
                system("cls");
                break;
            }

            if (option == 1){
                gotoxy(55, 14);
                printf("Starting: %s", choices[option - 1]); usleep(300000); printf(".");  usleep(300000); printf("."); usleep(300000); printf(".");   
                splashMenu();
            }

            if (option == 2){
                gotoxy(60, 14);
                printf("Starting: %s", choices[option - 1]); usleep(300000); printf(".");  usleep(300000); printf("."); usleep(300000); printf(".");   
                activitiesMenu();
            }
        }
    }
}

void displaySplashMenu(int option) { 
    system("cls");
    
    //ASCII art Main Menu
    SetColorAndBackground(6, 0);
    gotoxy(40, 1);
    printf("   _____       _           _       __  __                  \n");
    gotoxy(40, 2);
    printf("  / ____|     | |         | |     |  \\/  |                 \n");
    gotoxy(40, 3);
    printf(" | (___  _ __ | | __ _ ___| |__   | \\  / | ___ _ __  _   _ \n");
    gotoxy(40, 4);
    printf("  \\___ \\| '_ \\| |/ _` / __| '_ \\  | |\\/| |/ _ \\ '_ \\| | | |\n");
    gotoxy(40, 5);
    printf("  ____) | |_) | | (_| \\__ \\ | | | | |  | |  __/ | | | |_| |\n");
    gotoxy(40, 6);
    printf(" |_____/| .__/|_|\\__,_|___/_| |_| |_|  |_|\\___|_| |_|\\__,_|\n");
    gotoxy(40, 7);
    printf("        | |                                                \n");
    gotoxy(40, 8);
    printf("        |_|                                                \n");
    SetColorAndBackground(15, 0);

    if (option == 1) {
        gotoxy(52, 9);
        SetColorAndBackground(14, 0);
        printf("-> 1. Lance Aclan");
        SetColorAndBackground(15, 0);
    } else {
        gotoxy(52, 9);
        printf("   1. Lance Aclan");
    } 
    
    if (option == 2) {
        gotoxy(52, 10);
        SetColorAndBackground(14, 0);
        printf("-> 2. Angelie Macabuhay");
        SetColorAndBackground(15, 0);
    } else {
        gotoxy(52, 10);
        printf("   2. Angelie Macabuhay");
    }

    if (option == 3) {
        gotoxy(52, 11);
        SetColorAndBackground(14, 0);
        printf("-> 3. Hannah Tominez");
        SetColorAndBackground(15, 0);
    } else {
        gotoxy(52, 11);
        printf("   3. Hannah Tominez");
    }

    if (option == 4) {
        gotoxy(52, 12);
        SetColorAndBackground(14, 0);
        printf("-> 4. Allyn Tubice");
        SetColorAndBackground(15, 0);
    } else {
        gotoxy(52, 12);
        printf("   4. Allyn Tubice");
    }

    if (option == 5) {
        gotoxy(52, 13);
        SetColorAndBackground(14, 0);
        printf("-> 5. Keith Umali");
        SetColorAndBackground(15, 0);
    } else {
        gotoxy(52, 13);
        printf("   5. Keith Umali");
    }

    if (option == 6) {
        gotoxy(52, 14);
        SetColorAndBackground(14, 0);
        printf("-> 6. Return to Main Menu");
        SetColorAndBackground(15, 0);
    } else {
        gotoxy(52, 14);
        printf("   6. Return to Main Menu");
    }

}

void splashMenu() {
    int option = 1; // Initially highlight the first option
    char *choices[] = {"Lance Aclan", "Angelie Macabuhay", "Hannah Tominez", "Allyn Tubice", "Keith Umali", "Exit"};
    char key;

    while (1) {
        displaySplashMenu(option);
        
        key = _getch(); // Wait for key press

        if (key == UP_ARROW) {
                option--;
            if (option < 1){
                option = 6;
            } 
        } else if (key == DOWN_ARROW) {
            option++;

            if (option > 6){
                option = 1;
            }
        } else if (key == ENTER_KEY) {
            if (option == 6) {
                gotoxy(55, 16);
                printf("Returning to Main Menu"); usleep(300000); printf(".");  usleep(300000); printf("."); usleep(300000); printf(".");   
                usleep(1000000); 
                system("cls");
                return;
            }

            if (option == 1){
                gotoxy(55, 16);
                printf("Starting: %s", choices[option - 1]); usleep(300000); printf(".");  usleep(300000); printf("."); usleep(300000); printf(".");   
                mainSplashAclan();
            }

            if (option == 2){
                gotoxy(55, 16);
                printf("Starting: %s", choices[option - 1]); usleep(300000); printf(".");  usleep(300000); printf("."); usleep(300000); printf(".");   
                mainSplashMacabuhay();
            }

            if (option == 3){
                gotoxy(55, 16);
                printf("Starting: %s", choices[option - 1]); usleep(300000); printf(".");  usleep(300000); printf("."); usleep(300000); printf(".");   
                mainSplashTominez();
            }

            if (option == 4){
                gotoxy(55, 16);
                printf("Starting: %s", choices[option - 1]); usleep(300000); printf(".");  usleep(300000); printf("."); usleep(300000); printf(".");   
                mainSplashTubice();
            }

            if (option == 5){
                gotoxy(55, 16);
                printf("Starting: %s", choices[option - 1]); usleep(300000); printf(".");  usleep(300000); printf("."); usleep(300000); printf(".");   
                mainSplashUmali();
            }

        }
    }
}

void displayActivitiesMenu(int option){
    system("cls");
    
    //ASCII art Main Menu
    SetColorAndBackground(6, 0);
    gotoxy(38, 1);
    printf("               _   _       _ _   _             __  __                  \n");
    gotoxy(38, 2);
    printf("     /\\       | | (_)     (_) | (_)           |  \\/  |                 \n");
    gotoxy(38, 3);
    printf("    /  \\   ___| |_ ___   ___| |_ _  ___  ___  | \\  / | ___ _ __  _   _ \n");
    gotoxy(38, 4);
    printf("   / /\\ \\ / __| __| \\ \\ / / | __| |/ _ \\/ __| | |\\/| |/ _ \\ '_ \\| | | |\n");
    gotoxy(38, 5);
    printf("  / ____ \\ (__| |_| |\\ V /| | |_| |  __/\\__ \\ | |  | |  __/ | | | |_| |\n");
    gotoxy(38, 6);
    printf(" /_/    \\_\\___|\\__|_| \\_/ |_|\\__|_|\\___||___/ |_|  |_|\\___|_| |_|\\__,_|\n");
    SetColorAndBackground(15, 0);

    if (option == 1) {
        gotoxy(52, 9);
        SetColorAndBackground(14, 0);
        printf("-> 1. Create/Display Activities");
        SetColorAndBackground(15, 0);
    } else {
        gotoxy(52, 9);
        printf("   1. Create/Display Activities");
    } 
    
    if (option == 2) {
        gotoxy(52, 10);
        SetColorAndBackground(14, 0);
        printf("-> 2. Create/Search Activities");
        SetColorAndBackground(15, 0);
    } else {
        gotoxy(52, 10);
        printf("   2. Create/Search Activities");
    }

    if (option == 3) {
        gotoxy(52, 11);
        SetColorAndBackground(14, 0);
        printf("-> 3. Return to Main Menu");
        SetColorAndBackground(15, 0);
    } else {
        gotoxy(52, 11);
        printf("   3. Return to Main Menu");
    }
}

void activitiesMenu(){
    int option = 1; // Initially highlight the first option
    char *choices[] = {"Create/Display Activities Sub Menu", "Create/Search Activities Sub Menu", "Exit"};
    char key;

    while (1) {
        displayActivitiesMenu(option);
        
        key = _getch(); // Wait for key press

        if (key == UP_ARROW) {
                option--;
            if (option < 1){
                option = 3;
            } 
        } else if (key == DOWN_ARROW) {
            option++;

            if (option > 3){
                option = 1;
            }
        } else if (key == ENTER_KEY) {
            if (option == 3) {
                gotoxy(55, 13);
                printf("Returning to Main Menu"); usleep(300000); printf(".");  usleep(300000); printf("."); usleep(300000); printf(".");   
                usleep(1000000); 
                system("cls");
                return;
            }

            if (option == 1){
                gotoxy(52, 13);
                printf("Starting: %s", choices[option - 1]); usleep(300000); printf(".");  usleep(300000); printf("."); usleep(300000); printf(".");   
                activitiesSubMenu1();
            }

            if (option == 2){
                gotoxy(52, 13);
                printf("Starting: %s", choices[option - 1]); usleep(300000); printf(".");  usleep(300000); printf("."); usleep(300000); printf(".");   
                activitiesSubMenu2();
            }
        }
    }
}

void displayActivitiesSubMenu1(int option){
    system("cls");
    
    //ASCII art Main Menu
    SetColorAndBackground(6, 0);
    gotoxy(5, 0);
    printf("   _____                _           _______  _           _                            _   _       _ _   _             __  __                  \n");
    gotoxy(5, 1);
    printf("  / ____|              | |         / /  __ \\(_)         | |                 /\\       | | (_)     (_) | (_)           |  \\/  |                 \n");
    gotoxy(5, 2);
    printf(" | |     _ __ ___  __ _| |_ ___   / /| |  | |_ ___ _ __ | | __ _ _   _     /  \\   ___| |_ ___   ___| |_ _  ___  ___  | \\  / | ___ _ __  _   _ \n");
    gotoxy(5, 3);
    printf(" | |    | '__/ _ \\/ _` | __/ _ \\ / / | |  | | / __| '_ \\| |/ _` | | | |   / /\\ \\ / __| __| \\ \\ / / | __| |/ _ \\/ __| | |\\/| |/ _ \\ '_ \\| | | |\n");
    gotoxy(5, 4);
    printf(" | |____| | |  __/ (_| | ||  __// /  | |__| | \\__ \\ |_) | | (_| | |_| |  / ____ \\ (__| |_| |\\ V /| | |_| |  __/\\__ \\ | |  | |  __/ | | | |_| |\n");
    gotoxy(5, 5);
    printf("  \\_____|_|  \\___|\\__,_|\\__\\___/_/   |_____/|_|___/ .__/|_|\\__,_|\\__, | /_/    \\_\\___|\\__|_| \\_/ |_|\\__|_|\\___||___/ |_|  |_|\\___|_| |_|\\__,_|\n");
    gotoxy(5, 6);
    printf("                                                  | |             __/ |                                                                       \n");
    gotoxy(5, 7);
    printf("                                                  |_|            |___/                                                                        \n");
    SetColorAndBackground(15, 0);

    if (option == 1) {
        gotoxy(52, 9);
        SetColorAndBackground(14, 0);
        printf("-> 1. Activity A");
        SetColorAndBackground(15, 0);
    } else {
        gotoxy(52, 9);
        printf("   1. Activity A");
    } 
    
    if (option == 2) {
        gotoxy(52, 10);
        SetColorAndBackground(14, 0);
        printf("-> 2. Activity B");
        SetColorAndBackground(15, 0);
    } else {
        gotoxy(52, 10);
        printf("   2. Activity B");
    }

    if (option == 3) {
        gotoxy(52, 11);
        SetColorAndBackground(14, 0);
        printf("-> 3. Activity C");
        SetColorAndBackground(15, 0);
    } else {
        gotoxy(52, 11);
        printf("   3. Activity C");
    }

    if (option == 4) {
        gotoxy(52, 12);
        SetColorAndBackground(14, 0);
        printf("-> 4. Return to Activities Menu");
        SetColorAndBackground(15, 0);
    } else {
        gotoxy(52, 12);
        printf("   4. Return to Activities Menu");
    }
}

void activitiesSubMenu1(){
    int option = 1; // Initially highlight the first option
    char *choices[] = {"Activity A", "Activity B", "Activity C", "Exit"};
    char key;

    while (1) {
        displayActivitiesSubMenu1(option);
        
        key = _getch(); // Wait for key press

        if (key == UP_ARROW) {
                option--;
            if (option < 1){
                option = 4;
            } 
        } else if (key == DOWN_ARROW) {
            option++;

            if (option > 4){
                option = 1;
            }
        } else if (key == ENTER_KEY) {
            if (option == 4) {
                gotoxy(55, 14);
                printf("Returning to Activities Menu"); usleep(300000); printf(".");  usleep(300000); printf("."); usleep(300000); printf(".");   
                usleep(1000000); 
                system("cls");
                return;
            }

            if (option == 1){
                gotoxy(55, 14);
                printf("Starting: %s", choices[option - 1]); usleep(300000); printf(".");  usleep(300000); printf("."); usleep(300000); printf(".");   
                system("cls");
                mainArrayTominez();
            }

            if (option == 2){
                gotoxy(55, 14);
                printf("Starting: %s", choices[option - 1]); usleep(300000); printf(".");  usleep(300000); printf("."); usleep(300000); printf(".");   
                system("cls");
                mainArrayUmali();
            }

            if (option == 3){
                gotoxy(55, 14);
                printf("Starting: %s", choices[option - 1]); usleep(300000); printf(".");  usleep(300000); printf("."); usleep(300000); printf(".");   
                system("cls");
                mainArrayAclan();
            }
        }
    }
}

void displayActivitiesSubMenu2(int option){
    system("cls");
    
    //ASCII art Main Menu
    SetColorAndBackground(6, 0);
    gotoxy(5, 0);
    printf("   _____                _           _______                     _                    _   _       _ _   _             __  __                  \n");
    gotoxy(5, 1);
    printf("  / ____|              | |         / / ____|                   | |         /\\       | | (_)     (_) | (_)           |  \\/  |                 \n");
    gotoxy(5, 2);
    printf(" | |     _ __ ___  __ _| |_ ___   / / (___   ___  __ _ _ __ ___| |__      /  \\   ___| |_ ___   ___| |_ _  ___  ___  | \\  / | ___ _ __  _   _ \n");
    gotoxy(5, 3);
    printf(" | |    | '__/ _ \\/ _` | __/ _ \\ / / \\___ \\ / _ \\/ _` | '__/ __| '_ \\    / /\\ \\ / __| __| \\ \\ / / | __| |/ _ \\/ __| | |\\/| |/ _ \\ '_ \\| | | |\n");
    gotoxy(5, 4);
    printf(" | |____| | |  __/ (_| | ||  __// /  ____) |  __/ (_| | | | (__| | | |  / ____ \\ (__| |_| |\\ V /| | |_| |  __/\\__ \\ | |  | |  __/ | | | |_| |\n");
    gotoxy(5, 5);
    printf("  \\_____|_|  \\___|\\__,_|\\__\\___/_/  |_____/ \\___|\\__,_|_|  \\___|_| |_| /_/    \\_\\___|\\__|_| \\_/ |_|\\__|_|\\___||___/ |_|  |_|\\___|_| |_|\\__,_|\n");
    SetColorAndBackground(15, 0);

    if (option == 1) {
        gotoxy(52, 9);
        SetColorAndBackground(14, 0);
        printf("-> 1. Activity A");
        SetColorAndBackground(15, 0);
    } else {
        gotoxy(52, 9);
        printf("   1. Activity A");
    } 
    
    if (option == 2) {
        gotoxy(52, 10);
        SetColorAndBackground(14, 0);
        printf("-> 2. Activity B");
        SetColorAndBackground(15, 0);
    } else {
        gotoxy(52, 10);
        printf("   2. Activity B");
    }

    if (option == 3) {
        gotoxy(52, 11);
        SetColorAndBackground(14, 0);
        printf("-> 3. Return to Activities Menu");
        SetColorAndBackground(15, 0);
    } else {
        gotoxy(52, 11);
        printf("   3. Return to Activities Menu");
    }
}

void activitiesSubMenu2(){
    int option = 1; // Initially highlight the first option
    char *choices[] = {"Activity A", "Activity B", "Exit"};
    char key;

    while (1) {
        displayActivitiesSubMenu2(option);
        
        key = _getch(); // Wait for key press

        if (key == UP_ARROW) {
                option--;
            if (option < 1){
                option = 3;
            } 
        } else if (key == DOWN_ARROW) {
            option++;

            if (option > 3){
                option = 1;
            }
        } else if (key == ENTER_KEY) {
            if (option == 3) {
                gotoxy(55, 14);
                printf("Returning to Activities Menu"); usleep(300000); printf(".");  usleep(300000); printf("."); usleep(300000); printf(".");   
                usleep(1000000); 
                system("cls");
                return;
            }

            if (option == 1){
                gotoxy(55, 13);
                printf("Starting: %s", choices[option - 1]); usleep(300000); printf(".");  usleep(300000); printf("."); usleep(300000); printf(".");   
                system("cls");
                mainArrayTubice();
            }

            if (option == 2){
                gotoxy(55, 13);
                printf("Starting: %s", choices[option - 1]); usleep(300000); printf(".");  usleep(300000); printf("."); usleep(300000); printf(".");   
                system("cls");
                mainArrayMacabuhay();
            }
        }
    }
}
