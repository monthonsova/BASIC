#include <stdio.h>

int calculate_change_amount(int cost, int paid);
int count_denomination(int *change_remaining, int denomination);

int main() {
    int total_cost, amount_paid, change_amount, remaining;
    int c1000, c500, c100, c50, c20, c10, c5, c2, c1;

    printf("Enter Total Cost (integer): ");
    scanf("%d", &total_cost);

    printf("Enter Amount Paid (integer): ");
    scanf("%d", &amount_paid);

    change_amount = calculate_change_amount(total_cost, amount_paid);

    if (change_amount == -1) {
        printf("\nERROR: Amount Paid is less than Total Cost.\n");
        return 1;
    }

    remaining = change_amount;

    c1000 = count_denomination(&remaining, 1000);
    c500  = count_denomination(&remaining, 500);
    c100  = count_denomination(&remaining, 100);
    c50   = count_denomination(&remaining, 50);
    c20   = count_denomination(&remaining, 20);
    c10   = count_denomination(&remaining, 10);
    c5    = count_denomination(&remaining, 5);
    c2    = count_denomination(&remaining, 2);
    c1    = count_denomination(&remaining, 1);

    printf("\n--- CHANGE CALCULATION REPORT ---\n");
    printf("Total Cost: %d\n", total_cost);
    printf("Amount Paid: %d\n", amount_paid);
    printf("Change Amount: %d\n", change_amount);

    printf("\nDenomination Breakdown:\n");

    if (c1000 > 0) printf("1000 Baht: %d\n", c1000);
    if (c500  > 0) printf("500 Baht: %d\n", c500);
    if (c100  > 0) printf("100 Baht: %d\n", c100);
    if (c50   > 0) printf("50 Baht: %d\n", c50);
    if (c20   > 0) printf("20 Baht: %d\n", c20);
    if (c10   > 0) printf("10 Baht: %d\n", c10);
    if (c5    > 0) printf("5 Baht: %d\n", c5);
    if (c2    > 0) printf("2 Baht: %d\n", c2);
    if (c1    > 0) printf("1 Baht: %d\n", c1);

    return 0;
}

int calculate_change_amount(int cost, int paid) {
    if (paid >= cost) return paid - cost;
    return -1;
}

int count_denomination(int *change_remaining, int denomination) {
    int count = *change_remaining / denomination;
    *change_remaining %= denomination;
    return count;
}
