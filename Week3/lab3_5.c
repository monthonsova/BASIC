#include <stdio.h>
#include <stdlib.h>

struct Order {
    int itemKey;
    float tagPrice;
    int pieces;
};

int main() {
    int amount, k;
    float grandTotal = 0.0;
    const float SHIPPING_FEE = 50.0;

    if (scanf("%d", &amount) != 1) return 1;
    if (amount < 1) {
        printf("Grand Total: 0.00\n");
        return 0;
    }

    struct Order *cart = malloc(sizeof(struct Order) * amount);
    if (!cart) return 1;

    for (k = 0; k < amount; k++) {
        float itemTotal;

        if (scanf("%d %f %d",
                  &cart[k].itemKey,
                  &cart[k].tagPrice,
                  &cart[k].pieces) != 3) {
            free(cart);
            return 1;
        }

        itemTotal = (cart[k].tagPrice * cart[k].pieces) + SHIPPING_FEE;

        if (itemTotal >= 500.0)
            itemTotal *= 0.90;

        grandTotal += itemTotal;
    }

    printf("Grand Total: %.2f\n", grandTotal);

    free(cart);
    return 0;
}
