#include <stdio.h>

int main(){
    int a, b, c, soma = 0;
    
    printf("Digite os valores de a, b e c: \n");
    scanf("%d%d%d", &a, &b, &c);



    while(a == 1){
        printf("Digite um valor de a > 1");
        scanf("%d", &a);
    }
    
    int i;
    for(i = b + 1; i < c; i++){
        if(i % a == 0){
            soma += i;
        }

    }

    printf("Valor da soma dos numeros divisiveis por a e que estao entre b e c: %d", soma);


    return 0;
}