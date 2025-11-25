#include <stdio.h>

struct Product {
    char name[50];
    int productId;
    float price;
};

int main() {

    struct Product shelfItem;

    if (scanf("%d %f %s", &shelfItem.productId, &shelfItem.price, shelfItem.name) != 3) {
        return 1;
    }

    printf("ID: %d, Price: %.2f, Name: %s\n",
           shelfItem.productId, shelfItem.price, shelfItem.name);

    return 0;
}
