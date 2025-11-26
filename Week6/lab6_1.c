#include <stdio.h>

void increase_value(int *number_ptr) {
    *number_ptr = *number_ptr + 10;
}

int main() {
    int coreData;

    printf("Enter initial integer value: ");
    scanf("%d", &coreData);

    printf("\n--- POINTER MODIFICATION REPORT ---\n");
    printf("1. Value BEFORE function call: %d\n", coreData);

    increase_value(&coreData);

    printf("2. Value AFTER function call: %d\n", coreData);

    return 0;
}
