#include <stdio.h>

int main(){
    float latao, zinco, cobre, k;
    printf("Quantos kilos de latao voce quer produzir?\n");
    scanf("%f", &latao);

    k = latao / 10;
    zinco = k * 7;
    cobre = k * 3;

    printf("quantidade de zinco necessaria = %.2f\nquantidade de cobre necessaria = %.2f", zinco, cobre);
    return 0;

}