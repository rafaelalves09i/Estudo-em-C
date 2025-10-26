#include <stdio.h>

int main(){
    int numb1, numb2;

    printf("Digite o primeiro numero:\n");
    scanf("%d", &numb1);
    printf("Digite o segundo numero:\n");
    scanf("%d", &numb2);

    if(numb1 > numb2){
        printf("O numero %d eh maior que o numero %d.\n", numb1, numb2);
    }
        if(numb2 > numb1){
        printf("O numero %d eh maior que o numero %d.\n", numb2, numb1);
    }
        if(numb1 == numb2){
        printf("Os numeros sao iguais.\n");
    }

    return 0;

}