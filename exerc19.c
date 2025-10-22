#include <stdio.h>

int main(){
    int data_juliana, ano, mes, dia;
    
    printf("Digite um dia, mes e ano qualquer para ser tranformado em data juliana:\n");
    scanf("%d%d%d", &dia, &mes, &ano);

    data_juliana =  (1461 * (ano + 4800 + (mes - 14) / 12)) / 4 + (367 * (mes - 2 - 12 * ((mes - 14) / 12))) / 12 - (3 * ((ano + 4900 + (mes - 14) / 12) / 100)) / 4 + dia - 32075;

    printf("A data juliana eh: %d", data_juliana);

    return 0;



}