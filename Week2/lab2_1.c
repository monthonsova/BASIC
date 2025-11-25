#include <stdio.h>

int main() {

    int loopsWanted;

    if (scanf("%d", &loopsWanted) != 1) {
        return 1;
    }

    if (loopsWanted <= 0) {
        printf("Error\n");
        return 0;
    }

    for (int lineCounter = 0; lineCounter < loopsWanted; lineCounter++) {
        printf("Hello Loop!\n");
    }

    return 0;
}
