#include <stdio.h>

int main() {
    int dayTemp[7];
    int apex;
    int d;

    for (d = 0; d < 7; d++) scanf("%d", &dayTemp[d]);

    apex = dayTemp[0];
    for (d = 1; d < 7; d++) if (dayTemp[d] > apex) apex = dayTemp[d];

    printf("--- DAILY TEMPERATURE REPORT ---\n");
    printf("Recorded Temperatures (C): ");
    for (d = 0; d < 7; d++) printf("%d ", dayTemp[d]);
    printf("\n");
    printf("Maximum Temperature Found: %d C\n", apex);

    if (apex >= 35) printf("Weather is HOT!\n");
    else printf("Weather is MODERATE.\n");
    return 0;
}
