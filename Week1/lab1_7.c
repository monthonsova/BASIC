#include <stdio.h>

int main() {

    int type;
    float kwh, bill = 0.0;

    if (scanf("%d %f", &type, &kwh) != 2) return 1;

    if (type == 1) {
        bill = (kwh <= 100 ? kwh * 3.0 : kwh * 4.0);
        printf("%.2f\n", bill);
    }
    else if (type == 2) {
        bill = (kwh <= 500 ? kwh * 5.0 : kwh * 6.5);
        printf("%.2f\n", bill);
    }
    else {
        printf("Invalid Customer Type\n");
    }

    return 0;
}
