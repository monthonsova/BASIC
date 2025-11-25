#include <stdio.h>

int main() {

    int termCode;
    float investAmount, aprRate = 0.0f;

    if (scanf("%d %f", &termCode, &investAmount) != 2) {
        return 1;
    }

    switch (termCode) {
        case 1:
            aprRate = (investAmount < 5000 ? 0.03f : 0.04f);
            break;

        case 2:
            aprRate = (investAmount < 10000 ? 0.05f : 0.065f);
            break;

        case 3:
            aprRate = 0.08f;
            break;

        default:
            printf("Invalid Term Code\n");
            return 0;
    }

    float interestEarned = investAmount * aprRate;
    printf("%.2f\n", interestEarned);

    return 0;
}
