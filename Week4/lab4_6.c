#include <stdio.h>

int main() {
    int score[5];
    int total = 0;
    float avg;
    int above = 0, i;

    for (i = 0; i < 5; i++) {
        scanf("%d", &score[i]);
        total += score[i];
    }

    avg = (float)total / 5;

    for (i = 0; i < 5; i++) {
        if (score[i] > avg) above++;
    }

    printf("--- STUDENT SCORE ANALYSIS REPORT ---\n");
    printf("Recorded Scores: ");
    for (i = 0; i < 5; i++) printf("%d ", score[i]);
    printf("\nTotal Sum: %d\n", total);
    printf("Average Score: %.2f\n", avg);
    printf("Number of Scores Above Average: %d\n", above);

    return 0;
}
