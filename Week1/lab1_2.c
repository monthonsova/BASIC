#include <stdio.h>

int main() {

    int testScore;

    if (scanf("%d", &testScore) != 1) {
        return 1;
    }

    if (testScore >= 80) {
        printf("Grade A\n");
    }
    else if (testScore >= 70) {
        printf("Grade B\n");
    }
    else if (testScore >= 60) {
        printf("Grade C\n");
    }
    else if (testScore >= 50) {
        printf("Grade D\n");
    }
    else {
        printf("Grade F\n");
    }

    return 0;
}
