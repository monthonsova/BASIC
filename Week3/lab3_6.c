#include <stdio.h>
#include <stdlib.h>

struct Transaction {
    char info[50];
    float cashFlow;
};

int main() {
    int entries, p;
    float incomeSum = 0.0;
    float expenseSum = 0.0;
    float netFinal = 0.0;

    if (scanf("%d", &entries) != 1) return 1;
    if (entries < 1) {
        printf("Total Income: 0.00\n");
        printf("Total Expense: 0.00\n");
        printf("Net Balance: 0.00\n");
        return 0;
    }

    struct Transaction *ledger = malloc(sizeof(struct Transaction) * entries);
    if (!ledger) return 1;

    for (p = 0; p < entries; p++) {
        if (scanf("%f %49s", &ledger[p].cashFlow, ledger[p].info) != 2) {
            free(ledger);
            return 1;
        }

        if (ledger[p].cashFlow >= 0.0)
            incomeSum += ledger[p].cashFlow;
        else
            expenseSum += -ledger[p].cashFlow;
    }

    netFinal = incomeSum - expenseSum;

    printf("Total Income: %.2f\n", incomeSum);
    printf("Total Expense: %.2f\n", expenseSum);
    printf("Net Balance: %.2f\n", netFinal);

    free(ledger);
    return 0;
}
