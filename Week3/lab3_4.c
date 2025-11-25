#include <stdio.h>
#include <stdlib.h>

struct Student {
    char nickname[50];
    int codeId;
    float examScore;
};

int main() {
    int total, idx;
    int passed = 0, failed = 0;

    if (scanf("%d", &total) != 1) return 1;
    if (total < 1) {
        printf("Pass Count: 0\nFail Count: 0\n");
        return 0;
    }

    struct Student *classroom = malloc(sizeof(struct Student) * total);
    if (!classroom) return 1;

    for (idx = 0; idx < total; idx++) {
        if (scanf("%d %f %s",
                  &classroom[idx].codeId,
                  &classroom[idx].examScore,
                  classroom[idx].nickname) != 3) {
            free(classroom);
            return 1;
        }
    }

    for (idx = 0; idx < total; idx++) {
        if (classroom[idx].examScore >= 60.0)
            passed++;
        else
            failed++;
    }

    printf("Pass Count: %d\n", passed);
    printf("Fail Count: %d\n", failed);

    free(classroom);
    return 0;
}
