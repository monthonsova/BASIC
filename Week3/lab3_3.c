#include <stdio.h>

struct Student {
    char name[50];
    int studentId;
    float score;
};

int main() {

    int totalEntries;
    if (scanf("%d", &totalEntries) != 1) {
        return 1;
    }

    struct Student people[totalEntries];

    float pooledScore = 0.0;

    for (int i = 0; i < totalEntries; i++) {
        if (scanf("%d %f %s",
            &people[i].studentId,
            &people[i].score,
            people[i].name) != 3) {
            return 1;
        }
        pooledScore += people[i].score;
    }

    float avgScore = 0.0;
    if (totalEntries > 0) {
        avgScore = pooledScore / totalEntries;
    }

    printf("Average Score: %.2f\n", avgScore);

    return 0;
}
