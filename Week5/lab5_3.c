#include <stdio.h>

#define SIZE 5

int calculate_sum(int array[], int size);

int main() {
    int numbers[SIZE];
    int total_sum;
    float avg_value;
    int idx;

    printf("Enter %d integer numbers:\n", SIZE);
    for (idx = 0; idx < SIZE; idx++) {
        printf("Number %d: ", idx + 1);
        scanf("%d", &numbers[idx]);
    }

    total_sum = calculate_sum(numbers, SIZE);
    avg_value = (float)total_sum / SIZE;

    printf("\n--- ARRAY AVERAGE REPORT ---\n");
    printf("Recorded Numbers: ");
    for (idx = 0; idx < SIZE; idx++) {
        printf("%d ", numbers[idx]);
    }
    printf("\n");
    printf("Total Sum: %d\n", total_sum);
    printf("Average: %.2f\n", avg_value);

    return 0;
}

int calculate_sum(int array[], int size) {
    int sum_box = 0;
    int j;
    for (j = 0; j < size; j++) {
        sum_box += array[j];
    }
    return sum_box;
}
