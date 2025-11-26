#include <stdio.h>

int main() {

    int n;
    int i;
    int passTotal = 0;
    int failTotal = 0;

    if (scanf("%d", &n) != 1) {
        return 1;
    }

    int scoreList[n];

    for (i = 0; i < n; i++) {
        if (scanf("%d", &scoreList[i]) != 1) {
            return 1;
        }

        if (scoreList[i] >= 50) {
            passTotal += scoreList[i];
        } else {
            failTotal++;
        }
    }

    printf("Passing Scores Sum: %d\n", passTotal);
    printf("Failing Students Count: %d\n", failTotal);

    return 0;
}
