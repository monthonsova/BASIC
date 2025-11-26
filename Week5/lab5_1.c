#include <stdio.h>

int calculate_area(int length, int width) {
    return length * width;
}

int main() {
    int len_user;
    int wid_user;
    int area_outcome;

    printf("Enter rectangle length (integer): ");
    scanf("%d", &len_user);

    printf("Enter rectangle width (integer): ");
    scanf("%d", &wid_user);

    area_outcome = calculate_area(len_user, wid_user);

    printf("\n--- RECTANGLE AREA REPORT ---\n");
    printf("Length: %d\n", len_user);
    printf("Width: %d\n", wid_user);
    printf("Calculated Area: %d\n", area_outcome);

    return 0;
}
