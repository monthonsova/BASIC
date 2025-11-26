#include <stdio.h>

void swap_values(int *a, int *b) {
    int tempBox = *a;
    *a = *b;
    *b = tempBox;
}

int main() {
    int leftNum, rightNum;

    printf("Enter value for Num1: ");
    scanf("%d", &leftNum);

    printf("Enter value for Num2: ");
    scanf("%d", &rightNum);

    printf("\n--- SWAPPING REPORT ---\n");
    printf("Before Swap - Num1: %d, Num2: %d\n", leftNum, rightNum);

    swap_values(&leftNum, &rightNum);

    printf("After Swap - Num1: %d, Num2: %d\n", leftNum, rightNum);

    return 0;
}
