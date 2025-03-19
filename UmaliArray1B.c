#include <stdio.h>
#include "functions.h"


void mainArrayUmali() {
    int array[10];
    int i;

    printf("Input the first number of the array: ");
    scanf("%d", &array[0]);

    for (i = 1; i < 10; i++) {
        array[i] = array[i - 1] * 3;
    }

    for (i = 0; i < 10; i++) {
        SetColorAndBackground(i + 1, 0); // Change color for each array element
        printf("array[%d] = %d\n", i, array[i]);
    }
    SetColorAndBackground(15, 0); // Reset to default color


    printf("\nPress any key to exit...");
    getch(); // Wait for key press before closing
    
    return;
}