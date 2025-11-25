#include <stdio.h>

int main() {

    int userVal;
    int stashEven = 0;
    int stashOdd  = 0;

    if (scanf("%d", &userVal) != 1) {
        return 1;
    }

    while (userVal != 0) {

        if (userVal % 2 == 0)
            stashEven += userVal;
        else
            stashOdd += userVal;

        if (scanf("%d", &userVal) != 1) {
            break;
        }
    }

    printf("Even Sum: %d\n", stashEven);
    printf("Odd Sum: %d\n", stashOdd);

    return 0;
}
