#include <stdio.h>

// ANSI escape codes for color
#define RESET "\033[0m"   // Reset color to default
#define RED "\033[31m"     // Red color
#define GREEN "\033[32m"   // Green color
#define YELLOW "\033[33m"  // Yellow color
#define BLUE "\033[34m"    // Blue color
#define MAGENTA "\033[35m" // Magenta color
#define CYAN "\033[36m"    // Cyan color
#define WHITE "\033[37m"   // White color

int main() {
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
    printf(YELLOW "         " RESET);
    for (j = 0; j < 6; j++) {
        printf(YELLOW "[Col %d]" RESET, j);
    }
    printf("\n");

    // Display the array elements in the specified format
    for (i = 0; i < 5; i++) {
        printf(CYAN "Row[%d]" RESET, i); // Print row labels in cyan
        for (j = 0; j < 6; j++) {
            printf(GREEN "%7d" RESET, myArray[i][j]); // Print numbers in green with proper alignment
        }
        printf("\n"); // Newline after each row
    }

    return 0; 
}
