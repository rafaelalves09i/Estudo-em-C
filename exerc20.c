#include <stdio.h>
#include <stdlib.h>

void alocacao_dinamica(int *p){
    printf("valor: %d", *p);


}

int main(){
    int *p;
    p = (int *) malloc(sizeof(int));

    if(p == NULL){
        printf("Erro ao alocar memória \n");
    }


    printf("Digite um numero inteiro qualquer: \n");
    scanf("%d", p);

    alocacao_dinamica(p);

    free(p);

    return 0;

}