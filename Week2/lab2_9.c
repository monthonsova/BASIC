#include <stdio.h>

int main() {

    int initialStock, txnCount, cmdCode, qty;
    float feePenalty;
    int liveStock;
    float penaltyBucket = 0.0f;

    if (scanf("%d %f %d", &initialStock, &feePenalty, &txnCount) != 3) {
        return 1;
    }

    liveStock = initialStock;

    for (int idx = 0; idx < txnCount; idx++) {

        if (scanf("%d %d", &cmdCode, &qty) != 2) {
            break;
        }

        switch (cmdCode) {

            case 1:
                liveStock += qty;
                printf("Received %d units.\n", qty);
                break;

            case 2:
                if (qty <= 0) {
                    printf("Error: Quantity must be positive.\n");
                }
                else if (qty <= liveStock) {
                    liveStock -= qty;
                    printf("Shipped %d units.\n", qty);
                }
                else {
                    penaltyBucket += feePenalty;
                    printf("FAILURE: Insufficient stock. PENALTY %.2f added.\n", feePenalty);
                }
                break;

            case 3:
                printf("Current Stock: %d\n", liveStock);
                printf("Total Penalties: %.2f\n", penaltyBucket);
                break;

            default:
                printf("Error: Invalid Command.\n");
                break;
        }
    }

    return 0;
}
