#include <stdio.h>

int main() {
    int grid[3][3];
    int r, c;

    for (r = 0; r < 3; r++)
        for (c = 0; c < 3; c++)
            scanf("%d", &grid[r][c]);

    printf("--- TWO-DIMENSIONAL ARRAY REPORT ---\n");
    printf("Array Size: 3 Rows x 3 Columns\n");
    printf("Content (Table Format):\n");

    for (r = 0; r < 3; r++) {
        for (c = 0; c < 3; c++) printf("%d ", grid[r][c]);
        printf("\n");
    }

    return 0;
}
