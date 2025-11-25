#include <stdio.h>
#include <stdlib.h>

struct SalesRecord {
    char worker[50];
    float goal;
    float realSale;
};

int main() {
    int amount, idx;
    float totalBonus = 0.0;

    if (scanf("%d", &amount) != 1) return 1;
    if (amount < 1) {
        printf("Grand Total Commission: 0.00\n");
        return 0;
    }

    struct SalesRecord *box = malloc(sizeof(struct SalesRecord) * amount);
    if (!box) return 1;

    for (idx = 0; idx < amount; idx++) {
        float baseCash;

        if (scanf("%f %f %49s", &box[idx].goal, &box[idx].realSale, box[idx].worker) != 3) {
            free(box);
            return 1;
        }

        baseCash = box[idx].realSale * 0.10;

        if (box[idx].realSale >= box[idx].goal * 1.20)
            baseCash += 200.0;
        else if (box[idx].realSale >= box[idx].goal)
            baseCash += 50.0;
        else if (box[idx].realSale < box[idx].goal * 0.90)
            baseCash -= 100.0;

        totalBonus += baseCash;
    }

    printf("Grand Total Commission: %.2f\n", totalBonus);

    free(box);
    return 0;
}
