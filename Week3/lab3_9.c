#include <stdio.h>

int main() {
    int totalDays, day;
    float startBudget;
    float leftBudget;
    float spendToday;

    if (scanf("%f %d", &startBudget, &totalDays) != 2) {
        return 1;
    }

    leftBudget = startBudget;

    printf("Day | Spend | Remaining\n");
    printf("---------------------------\n");

    for (day = 1; day <= totalDays; day++) {
        spendToday = 0.0;

        if (leftBudget >= 500.00) {
            spendToday = 100.00;
        } else if (leftBudget >= 100.00) {
            spendToday = 50.00;
        } else if (leftBudget > 0.0) {
            spendToday = 20.00;
        } else {
            spendToday = 0.0;
        }

        if (spendToday > leftBudget) {
            spendToday = leftBudget;
        }

        leftBudget -= spendToday;

        printf("%d | %.2f | %.2f\n", day, spendToday, leftBudget);
    }

    printf("---------------------------\n");
    printf("Final Budget: %.2f\n", leftBudget);

    return 0;
}
