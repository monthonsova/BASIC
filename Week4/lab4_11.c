#include <stdio.h>

int main() {
    int mat[2][4];
    int r, c, sum = 0;

    for (r = 0; r < 2; r++)
        for (c = 0; c < 4; c++) {
            scanf("%d", &mat[r][c]);
            sum += mat[r][c];
        }

    printf("--- 2D ARRAY SUMMATION REPORT ---\n");
    printf("Recorded Matrix (2x4):\n");

    for (r = 0; r < 2; r++) {
        for (c = 0; c < 4; c++) printf("%4d ", mat[r][c]);
        printf("\n");
    }

    printf("Total Sum of all elements: %d\n", sum);

    return 0;
}
