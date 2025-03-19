#include <stdio.h>
#include <unistd.h> // For usleep function
#include <windows.h>
#include <conio.h>
#include <stdlib.h>

void SetColorAndBackground(int ForgC, int BackC);
void ResetColor();

int main() {
     const char *splash[] = {
     	
        "\t\t   /////////////////////////////////////////////////////////////////////////////////////////////////////////////////",
        "\t\t    //888b     d888        d8888  .d8888b.        d8888 888888b.   888     888 888    888        d8888 Y88b   d88P//",
        "\t\t    //8888b   d8888       d88888 d88P  Y88b      d88888 888  88b   888     888 888    888       d88888  Y88b d88P //",
        "\t\t    //88888b.d88888      d88P888 888    888     d88P888 888  .88P  888     888 888    888      d88P888   Y88o88P  //",
        "\t\t    //888Y88888P888     d88P 888 888           d88P 888 8888888K.  888     888 8888888888     d88P 888    Y888P   //",
        "\t\t    //888 Y888P 888    d88P  888 888          d88P  888 888  Y88b  888     888 888    888    d88P  888     888    //",
        "\t\t    //888  Y8P  888   d88P   888 888    888  d88P   888 888    888 888     888 888    888   d88P   888     888    //",
        "\t\t    //888       888  d8888888888 Y88b  d88P d8888888888 888   d88P Y88b. .d88P 888    888  d8888888888     888    //",
        "\t\t    //888       888 d88P     888  Y8888P   d88P     888 8888888P   Y88888P888  888    d88 P888     888     888    //",
        "\t\t    ////////////////////////////////////////////////////////////////////////////////////////////////////////////////",
};

    int splashSize = sizeof(splash) / sizeof(splash[0]);

    system("cls"); // Clear the screen
    
    SetColorAndBackground(14, 0); // Set text color to yellow and background to black
    

    // Print each line with a small delay
    for (int i = 0; i < splashSize; i++) {
        printf("%s\n", splash[i]); // Print the current line
        fflush(stdout);           // Ensure the output is displayed immediately
        usleep(90000);            // 50 milliseconds delay between lines
    }

    printf("\n\t\tPress any key to continue...");
    getch(); // Wait for a key press
    system("cls"); // Clear the screen

    for (int i = 0; i < sizeof(splash) / sizeof(splash[0]); i++) {
        printf("%s\n", splash[i]);
    }

    usleep(40000); // Wait for 2 seconds
    for (int i = 0; i < splashSize; i++) {
      
        printf("\033[F\033[K"); // ANSI escape codes to move cursor up and clear line
        fflush(stdout);         // Ensure output is updated immediately
        usleep(90000);          // 50 milliseconds delay between lines
    }

    
    system("cls"); // Clear the screen
    ResetColor(); // Reset text color to white and background to black
    return 0;
}

void SetColorAndBackground(int ForgC, int BackC) {
    WORD wColor = ((BackC & 0x0F) << 4) + (ForgC & 0x0F);
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), wColor);
}

void ResetColor() {
    SetColorAndBackground(15, 0); // Reset text color to white and background to black
}
