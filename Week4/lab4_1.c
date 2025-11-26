#include <stdio.h>

int main() {

    int N;
    int i;

    if (scanf("%d", &N) != 1) {
        return 1;
    }

    int values[N];

    for (i = 0; i < N; i++) {
        if (scanf("%d", &values[i]) != 1) {
            return 1;
        }
    }

    for (i = N - 1; i >= 0; i--) {
        printf("%d\n", values[i]);
    }

    return 0;
}
