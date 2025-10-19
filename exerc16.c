#include <stdio.h>
#include <math.h>

int verificacao_primo(int n){
    int x;
    x = sqrt(n);
    if(n < 2){
        return 0;
    }
    for(int i = 2;i <= x; i++){
        if(n % i == 0){
            return 0;  
        }
    }
    return 1;
}


int main(){
    int n;

    printf("Digite um numero inteiro positivo: \n");
    scanf("%d", &n);

    if(verificacao_primo(n) == 1){
        printf("%d Eh primo!", n);
    }else{
        printf("%d Nao Eh primo!", n);
    }

    return 0;



}