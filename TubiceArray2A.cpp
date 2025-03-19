#include <stdio.h>

int main() {
    int array[5];
    int smallest;
    int position;
    int index;

    // Input the array elements
    printf("Input the array elements: ");
    for (int i = 0; i < 5; i++) {
        scanf("%d", &array[i]);
    }

    // Initialize smallest and position
    smallest = array[0];
    position = 1;
    index = 0;

    // Find the smallest element
    for (int i = 1; i < 5; i++) {
        if (array[i] < smallest) {
            smallest = array[i];
            position = i + 1;
            index = i;
        }
    }

    // Display the results
    printf("Smallest Value: %d\n", smallest);
    printf("Position of the element: %d\n", position);
    printf("Index of the element: array_name[%d]\n", index);

    return 0;
}
