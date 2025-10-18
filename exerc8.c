/*Exercício 23 - Uma empresa contrata um encanador a R$ 20,00 por dia. Crie um programa que solicite o número de dias trabalhados pelo encanador e imprima o valor líquido a ser pago, sabendo que são descontados 8% de imposto de renda.*/
#include <stdio.h>
int main(){
    int dias;
    float salario_liquido;
    const float vp = 20.00; /*valor por dia*/
    
    printf("Quantos dias o encanador trabalhou?\n");
    scanf("%d", &dias);

    salario_liquido = (dias * vp) * 0.92;

    printf("Valor liquido a ser pago ao encanador = %.2f\n", salario_liquido);
    return 0;


}