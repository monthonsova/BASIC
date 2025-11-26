#include <stdio.h>

#define ROWS 3
#define COLS 3

int main() {

    int grid[ROWS][COLS];
    int r, c;

    printf("Enter %d integer numbers for the 3x3 array:\n", ROWS * COLS);

    for (r = 0; r < ROWS; r++) {
        for (c = 0; c < COLS; c++) {
            printf("Enter element for Row %d, Col %d: ", r, c);
            scanf("%d", &grid[r][c]);
        }
    }

    printf("\n--- TWO-DIMENSIONAL ARRAY REPORT ---\n");
    printf("Array Size: %d Rows x %d Columns\n", ROWS, COLS);
    printf("Content (Table Format):\n");

    for (r = 0; r < ROWS; r++) {
        for (c = 0; c < COLS; c++) {
            printf("%d", grid[r][c]);
            if (c < COLS - 1) {
                printf(" ");
            }
        }
        printf("\n");
    }

    return 0;
}
