/*Exercício 19: O numero de combinações de n objetos diferentes, em que r objetos são escolhidos de cada vez, é dado pela seguinte formula:

 nCr = fatorial de n / (fatorial de r * fatorial de (n-r))

Escreva um programa que calcule o numero de combinações de n objetos tomados r de cada vez. Os valores n e r devem ser solicitados ao usuário.*/
#include <stdio.h>

int main(){
    int n, r, v;
    float ncr, fn = 1, fr = 1, fv = 1;
    
    printf("Digite os valores de n e r:\n");
    scanf("%d%d", &n, &r);

    if (n < 0 || r < 0 || r > n) {
        printf("Erro: Valores inválidos! n deve ser >= r e ambos >= 0\n");
        return 1;
    }

    v = n - r;

    for(int i = 2;i <= n; i++){
        fn *= i;
    }
    for(int i = 2;i <= r; i++){
        fr *= i;
    }
    for(int i = 2;i <= v; i++){
        fv *= i;
    }
    ncr = fn / (fr * fv);

    printf("O numero de combinacoes de %d objetos tomados %d de cada vez eh: %.2f", n, r, ncr);

    return 0;

}