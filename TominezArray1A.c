#include <stdio.h>

void mainArrayTominez () {
    int arrA[5];

    // Input values
    printf("Input the 5 numbers of the array:\n");
    for (int i = 0; i < 5; i++) {
        scanf("%d", &arrA[i]);
    }

    // Display original array
    printf("\nOriginal array:\n");
    for (int i = 0; i < 5; i++) {
        printf("arrA[%d] = %d\n", i, arrA[i]);
    }

    // Print modified array (Reversed order)
    printf("\nModified array:\n");
    for (int i = 4; i >= 0; i--) {  
        printf("arrA[%d] = %d\n", i, arrA[i]);
    }

    printf("\nPress any key to exit...");
    getch(); // Wait for key press before closing
    
    return;
}

	
