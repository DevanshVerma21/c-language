#include <stdio.h>
#include <stdlib.h>  // For malloc and free

int main() {
    int *ptr;
    
    // Allocate memory for one integer
    ptr = (int*)malloc(sizeof(int));
    
    if (ptr == NULL) {
        printf("Memory allocation failed!\n");
        return 1;
    }

    // Assign a value to the allocated memory
    *ptr = 100;
    
    printf("Value: %d\n", *ptr);

    // Free the allocated memory
    free(ptr);

    return 0;
}
