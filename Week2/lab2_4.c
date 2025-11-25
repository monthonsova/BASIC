#include <stdio.h>

int main() {

    float startingDebt, monthlyPay, monthlyInterest;
    int monthTracker = 0;

    const float INT_RATE = 0.01f;
    const float FIXED_PENALTY = 10.0f;

    if (scanf("%f %f", &startingDebt, &monthlyPay) != 2) {
        return 1;
    }

    float currentDebt = startingDebt;

    while (currentDebt > 0) {

        monthTracker++;

        monthlyInterest = currentDebt * INT_RATE;
        currentDebt += monthlyInterest;

        if (monthlyPay < monthlyInterest) {
            currentDebt += FIXED_PENALTY;
        }

        currentDebt -= monthlyPay;

        printf("Month %d: Remaining %.2f\n", monthTracker, currentDebt);

        if (monthTracker >= 10 && currentDebt > 0 && monthlyPay < monthlyInterest) {
            break;
        }
    }

    if (currentDebt <= 0) {
        printf("Loan settled in %d months.\n", monthTracker);
    } else {
        printf("Loan settled in 10+ months.\n");
    }

    return 0;
}
