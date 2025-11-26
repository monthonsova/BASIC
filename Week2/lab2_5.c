#include <stdio.h>

int main() {

    int scoreBox;
    int gradeA = 0, gradeB = 0, gradeC = 0, gradeD = 0, gradeF = 0;

    if (scanf("%d", &scoreBox) != 1) {
        return 1;
    }

    while (scoreBox != -1) {

        if (scoreBox >= 80) {
            gradeA++;
        } else if (scoreBox >= 70) {
            gradeB++;
        } else if (scoreBox >= 60) {
            gradeC++;
        } else if (scoreBox >= 50) {
            gradeD++;
        } else {
            gradeF++;
        }

        if (scanf("%d", &scoreBox) != 1) {
            break;
        }
    }

    printf("Grade A Count: %d\n", gradeA);
    printf("Grade B Count: %d\n", gradeB);
    printf("Grade C Count: %d\n", gradeC);
    printf("Grade D Count: %d\n", gradeD);
    printf("Grade F Count: %d\n", gradeF);

    return 0;
}
