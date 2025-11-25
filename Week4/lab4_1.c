#include <stdio.h>

int main() {
    int amount, idx;
    if (scanf("%d", &amount) != 1) return 1;

    int vault[amount];

    for (idx = 0; idx < amount; idx++) {
        scanf("%d", &vault[idx]);
    }

    for (idx = amount - 1; idx >= 0; idx--) {
        printf("%d\n", vault[idx]);
    }

    return 0;
}
