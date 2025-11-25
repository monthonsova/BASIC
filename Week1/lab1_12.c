#include <stdio.h>

int main() {

    int planCode;
    float dataUsage_GB;
    float totalBill = 0.0;

    if (scanf("%d %f", &planCode, &dataUsage_GB) != 2) {
        return 1;
    }

    if (planCode == 1) {
        totalBill = 299;
        if (dataUsage_GB > 10)
            totalBill += 10 * (dataUsage_GB - 10);

        printf("%.2f\n", totalBill);
    }
    else if (planCode == 2) {
        totalBill = 599;
        if (dataUsage_GB > 20)
            totalBill += 50 + 5 * (dataUsage_GB - 20);

        printf("%.2f\n", totalBill);
    }
    else {
        printf("Invalid Plan Code\n");
    }

    return 0;
}
