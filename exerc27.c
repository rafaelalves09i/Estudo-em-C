#include <stdio.h>

int main(){
    int X;
    int matriz[3][3];
    int encontrado = 0;

//Aqui o usuário vai montar as matrizes:
    for(int i = 0; i < 3; i++){
        for(int j = 0; j < 3; j++){
            printf("Digite o termo %dx%d da matriz.\n", i, j); // i --> linhas j --> colunas
            scanf("%d", &matriz[i][j]);
        }

    }
// Aqui ele vai digitar um valor e o programa vai verificar se está contido na matriz esse valor.
    printf("Digite o valor da da chave X\n");
    scanf("%d", &X);

    for(int i = 0; i < 3; i++){
        for(int j = 0; j < 3; j++){
            if(matriz[i][j] == X){
                printf("linha %d e coluna %d\n", i, j);
                encontrado += 1;
            }
        }

    }

    if( encontrado == 0){
        printf("Chave nao encontrada na matriz.\n");
    }




    return 0;


}