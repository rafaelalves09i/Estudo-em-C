#include <stdio.h>

int main() {
    float X;
    float N[100];

    scanf("%f", &X);

    N[0] = X;

    for (int i = 1; i < 100; i++) {
        N[i] = N[i - 1] / 2;
    }

    for (int i = 0; i < 100; i++) {
        printf("N[%d] = %.4f\n", i, N[i]);
    }

    return 0;
}