#include <stdio.h>

int main() {
    int total, k;
    int sumPass = 0;
    int flop = 0;

    scanf("%d", &total);
    int pile[total];

    for (k = 0; k < total; k++) {
        scanf("%d", &pile[k]);
        if (pile[k] >= 50) sumPass += pile[k];
        else flop++;
    }

    printf("Passing Scores Sum: %d\n", sumPass);
    printf("Failing Students Count: %d\n", flop);
    return 0;
}
