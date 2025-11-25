#include <stdio.h>

int main() {

    int loopCount;
    
    if (scanf("%d", &loopCount) != 1) {
        return 1;
    }

    if (loopCount <= 0) {
        printf("Error\n");
        return 0;
    }

    for (int rounder = 0; rounder < loopCount; rounder++) {
        printf("Hello Loop!\n");
    }

    return 0;
}
