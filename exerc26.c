#include <stdio.h>

int main(){
    int matriz[3][3];

    for(int i = 0; i < 3; i++){
        for(int j = 0; j < 3; j++){
            printf("Digite o termo %dx%d da matriz.\n", i, j);
            scanf("%d", &matriz[i][j]);
        }

    }

    printf("\nMatriz digitada:\n");
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            printf("%d\t", matriz[i][j]);  // \t = tabulação para alinhar
        }
        printf("\n");  // pula para a próxima linha
    }

    return 0;


}