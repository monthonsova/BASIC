#include <stdio.h>

int main() {
    int bundle[5];
    int even = 0, odd = 0;
    int i;

    for (i = 0; i < 5; i++) scanf("%d", &bundle[i]);

    for (i = 0; i < 5; i++) {
        if (bundle[i] % 2 == 0) even++;
        else odd++;
    }

    printf("--- NUMBER CLASSIFICATION REPORT ---\n");
    printf("Recorded Numbers: ");
    for (i = 0; i < 5; i++) printf("%d ", bundle[i]);
    printf("\n");
    printf("Total Even Numbers Found: %d\n", even);
    printf("Total Odd Numbers Found: %d\n", odd);

    return 0;
}
