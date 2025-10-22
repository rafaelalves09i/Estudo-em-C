#include <stdio.h>
#include <stdlib.h>

void Array_numeros(int *p, int Q){
    for(int i = 0; i < Q; i++){
        printf("Digite um numero inteiro para o Array: \n");
        scanf("%d", &p[i]);

    }
    printf("Numeros do vetor:");
    for (int i = 0; i < Q; i++){
        printf(" %d", p[i]);
    }
     printf("\n");

}

int main(){
    int Q;

    printf("Quantos numeros voce quer armazenar: \n");
    scanf("%d", &Q);

    int *p = (int *) malloc(Q * sizeof(int));

    if(p == NULL){
        printf("Erro na alocacao de memoria\n");
    }

    Array_numeros(p, Q);

    free(p);
    return 0;

}