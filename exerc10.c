/*Exercício 18: Escreva um programa que solicite um número entre 3 e 18 e calcule a probabilidade que esse número tem de sair ao se jogar três dados ao mesmo tempo. A probabilidade e calculada por meio da seguinte fórmula:

P = (n1 / n2) * 100.0

em que n1 é o numero no qual a soma dos dados é igual ao número de dado pelo usuario, e n2 é o numero total de casos possíveis. Por exemplo, se o  número inserido for 6, o programa imprimira:

"A probabilidade de sair 6 e de 4.63%"*/
#include <stdio.h>

int main(){
    int numero, n1 = 0;
    const float n2 = 216.0;
    int d1, d2, d3;
    float P;

    printf("Digite um numero entre 3 e 18:\n");
    scanf("%d", &numero);

    if(numero < 3 || numero > 18){
        printf("Numero invalido");
        return 1;
    }

    for(d1 = 1; d1 <= 6; d1++){
        for(d2 = 1; d2 <= 6; d2 ++){
            for(d3 = 1; d3 <= 6; d3 ++){
                if(d1 + d2 + d3 == numero){
                    n1++;
                }
            }
        }
    }
    P = (n1 / n2) * 100.0;

    printf("A probabilidade de sair %d eh: %.2f", numero, P);


    return 0;

}