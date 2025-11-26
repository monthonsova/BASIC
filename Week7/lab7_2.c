#include <stdio.h>
#include <stdlib.h>

#define FILENAME "input_data.csv"

int main() {
    FILE *fileGate;
    int a1, a2, a3, a4, a5;
    int totalPack;

    fileGate = fopen(FILENAME, "r");

    if (fileGate == NULL) {
        printf("ERROR: Could not open file %s for reading. Make sure the file exists.\n", FILENAME);
        exit(1);
    }

    fscanf(fileGate, "%d,%d,%d,%d,%d", &a1, &a2, &a3, &a4, &a5);

    fclose(fileGate);

    totalPack = a1 + a2 + a3 + a4 + a5;

    printf("--- FILE READING PROCESS ---\n");
    printf("Reading data from %s...\n", FILENAME);
    printf("File reading complete.\n");
    printf("\n--- DATA ANALYSIS REPORT ---\n");
    printf("Data read: %d, %d, %d, %d, %d\n", a1, a2, a3, a4, a5);
    printf("Total Sum: %d\n", totalPack);

    return 0;
}
