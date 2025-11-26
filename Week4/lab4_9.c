#include <stdio.h>

int main() {
    int gross;
    float rate, tax, net;

    scanf("%d", &gross);

    if (gross < 20000) rate = 0.0;
    else if (gross < 50000) rate = 0.05;
    else rate = 0.10;

    tax = gross * rate;
    net = gross - tax;

    printf("--- SALARY CALCULATION REPORT ---\n");
    printf("Gross Salary: %d THB\n", gross);
    printf("Tax Rate Applied: %.0f%%\n", rate * 100);
    printf("Tax Amount Deducted: %.2f THB\n", tax);
    printf("Net Salary: %.2f THB\n", net);

    return 0;
}
