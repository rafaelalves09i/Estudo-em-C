/*Exercício 18: Escreva um programa que encontre o menor inteiro positivo n que satisfaça as seguintes condições:

n / 3 = x inteiros e resto 2
n / 5 = y inteiros e resto 3
n / 7 = z inteiros e resto 4*/
#include <stdio.h>

int main(){
    int i;
    for(i = 8; ;i++){
        if(i % 3 == 2 && i % 5 == 3 && i % 7 == 4){
            break;
        }

    }

     
    printf("O valor de n eh: %d", i);
    return 0;
}