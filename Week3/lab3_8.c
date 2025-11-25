#include <stdio.h>

struct Campaign {
    char name[50];
    float productPrice;
    int salesCount;
    float adSpend;
};

int main() {
    int totalCases, idx;

    if (scanf("%d", &totalCases) != 1) {
        return 1;
    }

    struct Campaign pack[totalCases];

    for (idx = 0; idx < totalCases; idx++) {
        float rateUsed;
        float revenue;
        float finalCommission;
        float netResult;

        if (scanf("%s %f %d %f",
                  pack[idx].name,
                  &pack[idx].productPrice,
                  &pack[idx].salesCount,
                  &pack[idx].adSpend) != 4) {
            return 1;
        }

        revenue = pack[idx].salesCount * pack[idx].productPrice;

        if (pack[idx].salesCount >= 20) {
            rateUsed = 0.20;
        } else if (pack[idx].salesCount >= 10) {
            rateUsed = 0.15;
        } else {
            rateUsed = 0.10;
        }

        finalCommission = revenue * rateUsed;
        netResult = finalCommission - pack[idx].adSpend;

        printf("--- Campaign: %s ---\n", pack[idx].name);
        printf("Sales: %d, Ad Spend: %.2f\n", pack[idx].salesCount, pack[idx].adSpend);
        printf("Rate Used: %.0f%%\n", rateUsed * 100);
        printf("Calculation: (%.2f * %.0f%%) - %.2f = %.2f\n",
               revenue, rateUsed * 100, pack[idx].adSpend, netResult);
        printf("Net Result: %.2f\n", netResult);
    }

    return 0;
}
