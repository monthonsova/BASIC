#include <stdio.h>
#define SIZE 3

int main() {
    int data[SIZE];
    int *ptr;
    int k;

    printf("Enter %d integer elements for the array:\n", SIZE);
    for (k = 0; k < SIZE; k++) {
        printf("Element %d: ", k);
        scanf("%d", &data[k]);
    }

    ptr = data;

    printf("\n--- ARRAY AND POINTER REPORT ---\n");
    printf("Index | Value (Direct) | Value (via Pointer) | Address\n");
    printf("--------------------------------------------------\n");

    for (k = 0; k < SIZE; k++) {
        printf("%5d | %14d | %19d | %p\n",
               k,
               data[k],
               *(ptr + k),
               (ptr + k));
    }

    return 0;
}
