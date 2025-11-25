#include <stdio.h>

int main() {

    float beginBalance, penaltyFee, amount, rateUsed, monthlyInterest;
    float runningBalance, penaltyPocket = 0.0f;
    int periodCount, cmdCode;

    if (scanf("%f %f %d", &beginBalance, &penaltyFee, &periodCount) != 3) {
        return 1;
    }

    runningBalance = beginBalance;

    printf("Starting Balance: %.2f\n", beginBalance);

    for (int month = 1; month <= periodCount; month++) {

        if (scanf("%d %f", &cmdCode, &amount) != 2) {
            break;
        }

        printf("--- Month %d ---\n", month);

        switch (cmdCode) {

            case 1:
                runningBalance += amount;
                printf("Deposit: %.2f\n", amount);
                break;

            case 2:
                if (amount <= runningBalance) {
                    runningBalance -= amount;
                    printf("Withdrawal: %.2f\n", amount);
                } else {
                    penaltyPocket += penaltyFee;
                    printf("WITHDRAWAL FAILED. Penalty %.2f applied.\n", penaltyFee);
                }
                break;

            case 3:
                if (runningBalance < 1000.0f) {
                    rateUsed = 1.0f;
                } else {
                    rateUsed = 2.5f;
                }

                monthlyInterest = runningBalance * (rateUsed / 100.0f) / 12.0f;
                runningBalance += monthlyInterest;

                printf("Interest: %.2f (Rate: %.2f%%)\n", monthlyInterest, rateUsed);
                break;

            default:
                printf("Error: Invalid Command.\n");
                break;
        }
    }

    printf("Final Balance: %.2f\n", runningBalance);
    printf("Total Penalties: %.2f\n", penaltyPocket);

    return 0;
}
