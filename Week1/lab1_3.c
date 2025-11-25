#include <stdio.h>

int main() {

    int lhs, rhs;
    int opCode;
    int answer = 0;

    if (scanf("%d %d %d", &lhs, &rhs, &opCode) != 3) {
        return 1;
    }

    switch (opCode) {
        case 1:
            answer = lhs + rhs;
            printf("%d\n", answer);
            break;

        case 2:
            answer = lhs - rhs;
            printf("%d\n", answer);
            break;

        case 3:
            answer = lhs * rhs;
            printf("%d\n", answer);
            break;

        case 4:
            answer = lhs / rhs;
            printf("%d\n", answer);
            break;

        default:
            printf("Invalid Operation\n");
            break;
    }

    return 0;
}
