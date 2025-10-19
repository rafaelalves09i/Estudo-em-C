/*Exercício 20: A sequencia de números de Fibonacci é a seguinte: os dois primeiros termos tem o valor 1 e cada termo seguinte é igual a soma dos dois anteriores.

 1, 1, 2, 3, 5, 8, 13, 21, ...

Escreva um programa que solicite ao usuário o numero do termo da sequência de Fibonacci e calcule o valor desse termo. Por exemplo, se o numero fornecido pelo usuário for 7, o programa devera encontrar e imprimir o valor 13
*/
#include <stdio.h>


int sequencia_Fib(int numero){
    int i = 1, j = 1, Fib;

    for(int t = 3; t <= numero; t++){
        Fib = i + j;
        i = j;
        j = Fib;

    }
    return j;

}




int main(){
    int numero;

    printf("Digite um numero do termo da sequencia de Fibonacci: \n");
    scanf("%d", &numero);

    sequencia_Fib(numero);

    if (numero <= 0){
        printf("ERRO!");
        return 1;
    
    }else if(numero <= 2){
        printf("O termo %d da sequencia de Fibonacci eh: 1\n", numero);

    }else{
        int Resultado = sequencia_Fib(numero);
        printf("O termo %d da sequencia de Fibonacci eh: %d\n", numero, Resultado);
    }

    return 0;


}