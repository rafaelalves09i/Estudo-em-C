/*Exercício 21 - A importância de R$ 780.000,00 será dividida entre os três primeiros colocados de um concurso, em partes diretamente proporcionais aos pontos conseguidos por eles. Construa um programa que solicite o número de pontos dos três primeiros colocados e imprima a importância que caberá a cada um.*/
#include <stdio.h>

int main(){
    float p1, p2, p3, imp1, imp2, imp3, k;
    const int impt = 780000;

    printf("Quais sao as notas?\n");
    scanf("%f%f%f", &p1, &p2, &p3);
    
    k = impt / (p1 + p2 + p3);
    imp1 = k * p1;
    imp2 = k * p2;
    imp3 = k * p3;

    printf("importancia do primeiro colocado = %.2f\nimportancia do segundo colocado = %.2f\nimportancia do terceiro colocado = %.2f", imp1, imp2, imp3);
    return 0;
    

}