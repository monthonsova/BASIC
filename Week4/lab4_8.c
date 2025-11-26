#include <stdio.h>

#define MAX_SIZE 10
#define UNVISITED 0
#define COUNTED -1

int main() {

    int data[MAX_SIZE];
    int status[MAX_SIZE];
    int N;
    int i, j;

    for (i = 0; i < MAX_SIZE; i++) {
        status[i] = UNVISITED;
    }

    scanf("%d", &N);
    if (N > MAX_SIZE || N < 1) {
        N = MAX_SIZE;
    }

    for (i = 0; i < N; i++) {
        scanf("%d", &data[i]);
    }

    printf("\n--- FREQUENCY ANALYSIS REPORT ---\n");
    printf("Total elements recorded (N): %d\n", N);

    printf("Recorded Numbers: ");
    for (i = 0; i < N; i++) {
        printf("%d ", data[i]);
    }
    printf("\n");

    printf("--- FREQUENCY TABLE ---\n");
    printf("Number | Frequency\n");
    printf("-------|----------\n");

    for (i = 0; i < N; i++) {

        if (status[i] == COUNTED) {
            continue;
        }

        int freqCount = 1;

        for (j = i + 1; j < N; j++) {
            if (data[j] == data[i] && status[j] != COUNTED) {
                freqCount++;
                status[j] = COUNTED;
            }
        }

        status[i] = COUNTED;

        printf("%-6d | %d\n", data[i], freqCount);
    }

    return 0;
}
