/*Exercício 20: Escreva um programa que crie um numero aleatório x por meio da função rand(). O programa deve solicitar um numero n ao usuário e compará-lo com x. 
Se n for menor do que x, o programa devera imprimir "Muito Pequeno" e solicitar novamente um numero para o usuário; se n for maior do que x, o programa devera imprimir "Muito Grande" e solicitar numero para o usuário.
O programa terminara quando o usuário adivinhar o numero x, tomado aleatoriamente, e devera imprimir "Correto" e o numero de tentativas ate o acerto.*/
#include <stdio.h>
#include <stdlib.h>

int main(){
    int n, x, t = 0;
    x = rand();

    printf("Digite um numero: \n");


    while(1){

        scanf("%d", &n);
        t++;

        if(n < x ){
            printf("Muito Pequeno, digite novamente um numero: \n");

        }else if(n > x){
            printf("Muito Grande, digite novamente um numero: \n");

        }else{
            break;
        }


    }

    printf("O numero %d eh Correto e numero de tentativas eh %d.\n", n, t);

    return 0;


}