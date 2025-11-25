#include <stdio.h>

int main() {

    int score;
    int gradeA = 0, gradeB = 0, gradeC = 0, gradeD = 0, gradeF = 0;

    if (scanf("%d", &score) != 1) {
        return 1;
    }

    while (score != -1) {

        if (score >= 80) gradeA++;
        else if (score >= 70) gradeB++;
        else if (score >= 60) gradeC++;
        else if (score >= 50) gradeD++;
        else gradeF++;

        if (scanf("%d", &score) != 1) {
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
