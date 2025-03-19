#include <stdio.h>

// ANSI escape codes for color
#define RESET "\033[0m"   // Reset color to default
#define REDD "\033[31m"     // Red color
#define GREENN "\033[32m"   // Green color
#define YELLOWW "\033[33m"  // Yellow color
#define BLUEE "\033[34m"    // Blue color
#define MAGENTAA "\033[35m" // Magenta color
#define CYANN "\033[36m"    // Cyan color
#define WHITEE "\033[37m"   // White color

void mainArrayAclan() {
    // Declare a 2D array of size 5x6
    int myArray[5][6];
    int i, j;

    // Initialize the array elements according to the pattern (row index + 1) * (column index + 1)
    for (i = 0; i < 5; i++) {
        for (j = 0; j < 6; j++) {
            myArray[i][j] = (i + 1) * (j + 1); // Multiplication pattern for values
        }
    }

    // Display the column headers using a loop
    printf(YELLOWW "         " RESET);
    for (j = 0; j < 6; j++) {
        printf(YELLOWW "[Col %d]" RESET, j);
    }
    printf("\n");

    // Display the array elements in the specified format
    for (i = 0; i < 5; i++) {
        printf(CYANN "Row[%d]" RESET, i); // Print row labels in cyan
        for (j = 0; j < 6; j++) {
            printf(GREENN "%7d" RESET, myArray[i][j]); // Print numbers in green with proper alignment
        }
        printf("\n"); // Newline after each row
    }

    printf("\nPress any key to exit...");
    getch(); // Wait for key press before closing
    
    return;
}
