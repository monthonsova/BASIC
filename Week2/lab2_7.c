#include <stdio.h>

int main() {

    int limitN;
    int fizzBuzzCount = 0, fizzCount = 0, buzzCount = 0, otherCount = 0;

    if (scanf("%d", &limitN) != 1) {
        return 1;
    }

    for (int num = 1; num <= limitN; num++) {

        if (num % 15 == 0) {
            fizzBuzzCount++;
        }
        else if (num % 3 == 0) {
            fizzCount++;
        }
        else if (num % 5 == 0) {
            buzzCount++;
        }
        else {
            otherCount++;
        }
    }

    printf("Count FizzBuzz (by 15): %d\n", fizzBuzzCount);
    printf("Count Fizz (by 3 only): %d\n", fizzCount);
    printf("Count Buzz (by 5 only): %d\n", buzzCount);
    printf("Count Other: %d\n", otherCount);

    return 0;
}
