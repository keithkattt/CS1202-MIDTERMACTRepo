#include <stdio.h>

#define ROWS 3
#define COLS 4

void search_element(int arr[ROWS][COLS], int search) {
    for (int i = 0; i < ROWS; i++) {
        for (int j = 0; j < COLS; j++) {
            if (arr[i][j] == search) {
                printf("Row Position of the element: %d\n", i + 1);
                printf("Col Position of the element: %d\n", j + 1);
                printf("Index of the element: array_name[%d][%d]\n", i, j);
                return;
            }
        }
    }
    printf("Element not found in the array.\n");
}

void mainArrayMacabuhay() {
    int array_name[ROWS][COLS] = {
        {1, 2, 3, 4},
        {5, 6, 7, 8},
        {9, 10, 11, 12}
    };
    int search;
    printf("Input the element to search: ");
    scanf("%d", &search);
    
    search_element(array_name, search);
    
    printf("\nPress any key to exit...");
    getch(); // Wait for key press before closing
    
    return;
}
