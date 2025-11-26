#include <stdio.h>
#define SIZE 5

int calculate_net_balance(int *trans_array, int size, int *status_ptr) {
    int netSum = 0;

    for (int i = 0; i < size; i++) {
        netSum += *(trans_array + i);
    }

    if (netSum >= 0) {
        *status_ptr = 1;
    } else {
        *status_ptr = 0;
    }

    return netSum;
}

int main() {
    int transactions[SIZE];
    int finalBalance;
    int financeStatus;
    int i;

    printf("Enter %d transactions (Income +, Expense -):\n", SIZE);
    for (i = 0; i < SIZE; i++) {
        printf("Transaction %d: ", i + 1);
        scanf("%d", &transactions[i]);
    }

    finalBalance = calculate_net_balance(transactions, SIZE, &financeStatus);

    printf("\n--- PERSONAL FINANCE REPORT ---\n");
    printf("Transactions Recorded: ");
    for (i = 0; i < SIZE; i++) {
        printf("%d ", transactions[i]);
    }
    printf("\n");

    printf("Net Balance: %d\n", finalBalance);
    printf("Status: ");

    if (financeStatus == 1) {
        printf("PROFIT\n");
    } else {
        printf("LOSS\n");
    }

    return 0;
}
