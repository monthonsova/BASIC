#include <stdio.h>

int main() {

    float currentDebt, monthlyPay, interestGain;
    int monthTick = 0;

    const float RATE = 0.01f;
    const float OVERDUE_FEE = 10.0f;

    if (scanf("%f %f", &currentDebt, &monthlyPay) != 2) {
        return 1;
    }

    while (currentDebt > 0.0f) {

        interestGain = currentDebt * RATE;
        currentDebt += interestGain;

        if (monthlyPay < interestGain) {
            currentDebt += OVERDUE_FEE;
        }

        currentDebt -= monthlyPay;

        monthTick++;

        printf("Month %d: Remaining %.2f\n", monthTick, currentDebt);

        if (monthTick == 10 && currentDebt > 0.0f) {
            printf("Loan settled in 10+ months.\n");
            return 0;
        }
    }

    printf("Loan settled in %d months.\n", monthTick);

    return 0;
}
