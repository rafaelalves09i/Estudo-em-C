#include <stdio.h>

int bissexto(int ano){
    if ((ano % 4 == 0 && ano % 100 != 0) || ano % 400 == 0){
        return 1;
    }else{
        return 0;
    }


}

int main (){
    int ano, resultado;
    printf("Digite um ano qualquer: \n");
    scanf("%d", &ano);

    resultado = bissexto(ano);

    if (resultado == 1){
        printf("O ano que voce digitou eh bissexto\n");

    }else{
        printf("O ano que voce digitou nao eh bissexto\n");
    }

    return 0;

}