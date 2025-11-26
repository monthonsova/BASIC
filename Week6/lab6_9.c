#include <stdio.h>
#define MONTHS 3

int analyze_profitability(int *rev_ptr, int *exp_ptr, int size, int *status_ptr) {
    int totalRev = 0;
    int totalExp = 0;

    for (int i = 0; i < size; i++) {
        totalRev += *(rev_ptr + i);
        totalExp += *(exp_ptr + i);
    }

    int netProfit = totalRev - totalExp;

    if (netProfit >= 0) {
        *status_ptr = 1;
    } else {
        *status_ptr = 0;
    }

    return netProfit;
}

void get_monthly_data(int array[], int size, const char *type) {
    printf("\nEnter %d months of %s values:\n", size, type);
    for (int i = 0; i < size; i++) {
        printf("Month %d %s: ", i + 1, type);
        scanf("%d", &array[i]);
    }
}

void print_monthly_data(int array[], int size, const char *type) {
    long total = 0;
    for (int i = 0; i < size; i++) {
        total += array[i];
    }
    printf("TOTAL %s: %ld\n", type, total);
}

int main() {
    int monthly_revenue[MONTHS];
    int monthly_expense[MONTHS];
    int business_status;
    int net_profit;

    get_monthly_data(monthly_revenue, MONTHS, "REVENUE");
    get_monthly_data(monthly_expense, MONTHS, "EXPENSE");

    net_profit = analyze_profitability(monthly_revenue, monthly_expense, MONTHS, &business_status);

    printf("\n--- 3 MONTH FINANCIAL ANALYSIS REPORT ---\n");
    print_monthly_data(monthly_revenue, MONTHS, "REVENUE");
    print_monthly_data(monthly_expense, MONTHS, "EXPENSE");

    printf("\nNET PROFIT: %d\n", net_profit);
    printf("BUSINESS STATUS: ");

    if (business_status == 1) {
        printf("PROJECT IS PROFITABLE\n");
    } else {
        printf("PROJECT IS UNPROFITABLE\n");
    }

    return 0;
}
