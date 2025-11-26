#include <stdio.h>

int main() {
    int pack[6];
    int total = 0;
    int i;

    for (i = 0; i < 6; i++) {
        scanf("%d", &pack[i]);
        total += pack[i];
    }

    printf("--- SUMMATION REPORT ---\n");
    printf("Recorded Numbers: ");
    for (i = 0; i < 6; i++) printf("%d ", pack[i]);
    printf("\nTotal Sum of Numbers: %d\n", total);

    return 0;
}
