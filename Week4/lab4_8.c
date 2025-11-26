#include <stdio.h>

int main() {
    int arr[10], tag[10];
    int n, i, j, freq;

    for (i = 0; i < 10; i++) tag[i] = 0;

    scanf("%d", &n);
    if (n < 1 || n > 10) n = 10;

    for (i = 0; i < n; i++) scanf("%d", &arr[i]);

    printf("--- FREQUENCY ANALYSIS REPORT ---\n");
    printf("Total elements recorded (N): %d\n", n);
    printf("Recorded Numbers: ");
    for (i = 0; i < n; i++) printf("%d ", arr[i]);
    printf("\n--- FREQUENCY TABLE ---\n");
    printf("Number | Frequency\n");
    printf("-------|----------\n");

    for (i = 0; i < n; i++) {
        if (!tag[i]) {
            freq = 1;
            for (j = i + 1; j < n; j++) {
                if (arr[j] == arr[i]) {
                    freq++;
                    tag[j] = 1;
                }
            }
            printf("%d      | %d\n", arr[i], freq);
        }
    }

    return 0;
}
