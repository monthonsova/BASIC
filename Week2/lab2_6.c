#include <stdio.h>

int main() {

    int months, m, successCount = 0;
    float dailyDeposit, monthlyBag;

    if (scanf("%d", &months) != 1) {
        return 1;
    }

    for (m = 1; m <= months; m++) {

        monthlyBag = 0.0f;

        if (scanf("%f", &dailyDeposit) != 1) {
            break;
        }

        while (dailyDeposit != 0.00f) {

            monthlyBag += dailyDeposit;

            if (scanf("%f", &dailyDeposit) != 1) {
                break;
            }
        }

        if (monthlyBag >= 500.00f) {
            successCount++;
        }

        printf("Month %d Total: %.2f\n", m, monthlyBag);
    }

    printf("Success Count: %d\n", successCount);

    return 0;
}
