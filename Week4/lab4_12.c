#include <stdio.h>

#define A_ROWS 2
#define A_COLS 3

#define B_ROWS 2
#define B_COLS 3

#define BT_ROWS 3
#define BT_COLS 2

#define C_ROWS 2
#define C_COLS 2

void print_matrix(int rows, int cols, int matrix[rows][cols]) {
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            printf("%4d ", matrix[i][j]);
        }
        printf("\n");
    }
}

int main() {

    int gridA[A_ROWS][A_COLS];
    int gridB[B_ROWS][B_COLS];
    int gridBT[BT_ROWS][BT_COLS];
    int resultBox[C_ROWS][C_COLS];

    int i, j, k;

    printf("Enter elements for Matrix A (2x3):\n");
    for (i = 0; i < A_ROWS; i++) {
        for (j = 0; j < A_COLS; j++) {
            printf("A[%d][%d]: ", i, j);
            scanf("%d", &gridA[i][j]);
        }
    }

    printf("\nEnter elements for Matrix B (2x3):\n");
    for (i = 0; i < B_ROWS; i++) {
        for (j = 0; j < B_COLS; j++) {
            printf("B[%d][%d]: ", i, j);
            scanf("%d", &gridB[i][j]);
        }
    }

    // Transpose B → gridBT
    for (i = 0; i < BT_ROWS; i++) {
        for (j = 0; j < BT_COLS; j++) {
            gridBT[i][j] = gridB[j][i];
        }
    }

    // Multiply A × BT → resultBox
    for (i = 0; i < C_ROWS; i++) {
        for (j = 0; j < C_COLS; j++) {
            int sumCell = 0;
            for (k = 0; k < A_COLS; k++) {
                sumCell += gridA[i][k] * gridBT[k][j];
            }
            resultBox[i][j] = sumCell;
        }
    }

    printf("\n--- MATRIX MULTIPLICATION REPORT ---\n");

    printf("\nMatrix A (2x3):\n");
    print_matrix(A_ROWS, A_COLS, gridA);

    printf("\nMatrix B (2x3):\n");
    print_matrix(B_ROWS, B_COLS, gridB);

    printf("\nMatrix B Transposed (BT, 3x2):\n");
    print_matrix(BT_ROWS, BT_COLS, gridBT);

    printf("\nResult Matrix C (A x BT, 2x2):\n");
    print_matrix(C_ROWS, C_COLS, resultBox);

    return 0;
}
