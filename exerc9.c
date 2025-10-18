/*Exercício 24 - Faça um programa que solicite um caractere por meio da função getch(). Se for uma letra minuscula, imprima-a em maiúsculo, caso contrario imprima o próprio caractere. Use uma expressão condicional.*/
#include <stdio.h>
#include <ctype.h>
#include <conio.h>

int main(){
    char caractere;

    printf("Digite um caractere: \n");
    caractere = getch();

    if (caractere >= 'a' && caractere <= 'z') {
        printf("\n%c\n", toupper(caractere));

    } else {
        printf("\n%c\n", caractere);
    }

    return 0;
}

