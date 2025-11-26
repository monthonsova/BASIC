#include <stdio.h>

#define SIZE 5

void sort_array_ascending(int array[], int size);
void print_array(int array[], int size);

int main() {
    int numbers[SIZE];
    int backup[SIZE];
    int i;

    printf("Enter %d integer numbers for sorting:\n", SIZE);
    for (i = 0; i < SIZE; i++) {
        printf("Element %d: ", i + 1);
        scanf("%d", &numbers[i]);
        backup[i] = numbers[i];
    }

    sort_array_ascending(numbers, SIZE);

    printf("\n--- ARRAY SORTING REPORT ---\n");
    printf("Original Array: ");
    print_array(backup, SIZE);
    printf("Sorted Array (Ascending): ");
    print_array(numbers, SIZE);

    return 0;
}

void sort_array_ascending(int array[], int size) {
    int a, b, temp;
    for (a = 0; a < size - 1; a++) {
        for (b = a + 1; b < size; b++) {
            if (array[b] < array[a]) {
                temp = array[a];
                array[a] = array[b];
                array[b] = temp;
            }
        }
    }
}

void print_array(int array[], int size) {
    int k;
    for (k = 0; k < size; k++) {
        printf("%d ", array[k]);
    }
    printf("\n");
}
