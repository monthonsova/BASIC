#include <stdio.h>

#define FILENAME "profile.txt"

int main() {
    FILE *สมุดบันทึก;
    char ชื่อผู้ใช้[100];
    int อายุผู้ใช้;
    float คะแนนเฉลี่ย;

    printf("Enter your name: ");
    scanf("%99s", ชื่อผู้ใช้);

    printf("Enter your age: ");
    scanf("%d", &อายุผู้ใช้);

    printf("Enter your GPA: ");
    scanf("%f", &คะแนนเฉลี่ย);

    สมุดบันทึก = fopen(FILENAME, "w");

    if (สมุดบันทึก == NULL) {
        printf("ERROR: Could not create file %s\n", FILENAME);
        return 0;
    }

    fprintf(สมุดบันทึก, "%s\n", ชื่อผู้ใช้);
    fprintf(สมุดบันทึก, "%d\n", อายุผู้ใช้);
    fprintf(สมุดบันทึก, "%.2f\n", คะแนนเฉลี่ย);

    fclose(สมุดบันทึก);

    printf("\n--- PROFILE SAVING REPORT ---\n");
    printf("Profile saved successfully.\n");
    printf("Filename: %s\n", FILENAME);

    return 0;
}
