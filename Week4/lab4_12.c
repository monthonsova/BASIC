#include <stdio.h>

int main() {
    int A[2][3], B[2][3], BT[3][2], C[2][2];
    int i, j, k;

    for (i = 0; i < 2; i++)
        for (j = 0; j < 3; j++)
            scanf("%d", &A[i][j]);

    for (i = 0; i < 2; i++)
        for (j = 0; j < 3; j++)
            scanf("%d", &B[i][j]);

    for (i = 0; i < 3; i++)
        for (j = 0; j < 2; j++)
            BT[i][j] = B[j % 2][i];

    for (i = 0; i < 2; i++) {
        for (j = 0; j < 2; j++) {
            C[i][j] = 0;
            for (k = 0; k < 3; k++)
                C[i][j] += A[i][k] * BT[k][j];
        }
    }

    printf("--- MATRIX MULTIPLICATION REPORT ---\n");

    printf("\nMatrix A (2x3):\n");
    for (i = 0; i < 2; i++) {
        for (j = 0; j < 3; j++) printf("%4d ", A[i][j]);
        printf("\n");
    }

    printf("\nMatrix B (2x3):\n");
    for (i = 0; i < 2; i++) {
        for (j = 0; j < 3; j++) printf("%4d ", B[i][j]);
        printf("\n");
    }

    printf("\nMatrix B Transposed (BT, 3x2):\n");
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 2; j++) printf("%4d ", BT[i][j]);
        printf("\n");
    }

    printf("\nResult Matrix C (A x BT, 2x2):\n");
    for (i = 0; i < 2; i++) {
        for (j = 0; j < 2; j++) printf("%4d ", C[i][j]);
        printf("\n");
    }

    return 0;
}
