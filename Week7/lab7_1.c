#include <stdio.h>

#define FILENAME "output_data.txt"

int main() {
    FILE *หมึกเขียนไฟล์;
    int ค่าปีอ้างอิง = 2025;

    หมึกเขียนไฟล์ = fopen(FILENAME, "w");

    if (หมึกเขียนไฟล์ == NULL) {
        printf("ERROR: Could not open file %s for writing.\n", FILENAME);
        return 0;
    }

    printf("--- FILE WRITING PROCESS ---\n");
    printf("Writing data to %s...\n", FILENAME);

    fprintf(หมึกเขียนไฟล์, "Hello, C File Handling is easy.\n");
    fprintf(หมึกเขียนไฟล์, "%d\n", ค่าปีอ้างอิง);

    fclose(หมึกเขียนไฟล์);

    printf("File writing complete.\n");
    printf("\n--- FILE OPERATION REPORT ---\n");
    printf("Action: File created and data written successfully.\n");
    printf("Filename: %s\n", FILENAME);

    return 0;
}
