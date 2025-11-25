#include <stdio.h>

struct Student {
    char name[50];
    int studentId;
    float score;
};

int main() {

    int totalStudents;
    if (scanf("%d", &totalStudents) != 1) {
        return 1;
    }

    struct Student roster[totalStudents];

    for (int idx = 0; idx < totalStudents; idx++) {
        if (scanf("%d %f %s", 
            &roster[idx].studentId,
            &roster[idx].score,
            roster[idx].name) != 3) {
            return 1;
        }
    }

    for (int k = 0; k < totalStudents; k++) {
        printf("ID: %d, Name: %s, Score: %.2f\n",
               roster[k].studentId,
               roster[k].name,
               roster[k].score);
    }

    return 0;
}
