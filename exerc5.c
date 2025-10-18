#include <stdio.h>

int main(){
    int pes, cabecas, coelho, pato;
    printf("Qual eh o total de pes e o total de cabecas?\n");
    scanf("%d%d", &pes, &cabecas);
    if (pes < 2 * cabecas || pes > 4 * cabecas){
        printf("Valores impossiveis");
        return 1;
    }
    coelho = (pes - 2*cabecas) / 2;
    pato = cabecas - coelho;

    printf("coelhos = %d , patos = %d \n", coelho, pato);
    return 0;


}
