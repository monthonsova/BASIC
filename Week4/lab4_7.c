#include <stdio.h>

int main() {
    int box[10];
    int n, target, count = 0, i;

    scanf("%d", &n);
    if (n < 1 || n > 10) n = 10;

    for (i = 0; i < n; i++) scanf("%d", &box[i]);

    scanf("%d", &target);

    for (i = 0; i < n; i++) if (box[i] == target) count++;

    printf("--- FREQUENCY ANALYSIS REPORT ---\n");
    printf("Total elements recorded (N): %d\n", n);
    printf("Recorded Numbers: ");
    for (i = 0; i < n; i++) printf("%d ", box[i]);
    printf("\nSearch Value: %d\n", target);
    printf("Frequency Count: %d\n", count);

    return 0;
}
