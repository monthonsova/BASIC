#include <stdio.h>

struct Transaction {
    char detail[50];
    float amount;
};

int main() {

    int n, i;
    float totalIncome = 0.0f;
    float totalExpense = 0.0f;
    float netBalance = 0.0f;

    if (scanf("%d", &n) != 1) {
        return 1;
    }

    struct Transaction record[n];

    for (i = 0; i < n; i++) {
        if (scanf("%f %49s", &record[i].amount, record[i].detail) != 2) {
            return 1;
        }

        if (record[i].amount >= 0.0f) {
            totalIncome += record[i].amount;
        } else {
            totalExpense += -record[i].amount;
        }
    }

    netBalance = totalIncome - totalExpense;

    printf("Total Income: %.2f\n", totalIncome);
    printf("Total Expense: %.2f\n", totalExpense);
    printf("Net Balance: %.2f\n", netBalance);

    return 0;
}
