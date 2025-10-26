#include <stdio.h>

int main(){
    int X, Y;
    int soma = 0;
    int temp;

    scanf("%d", &X);
    scanf("%d", &Y);

    if(X > Y){
        temp = X;
        X = Y;
        Y = temp;
    }

    for(int i = X + 1; i < Y; i++){
        if(i % 2 != 0){
            soma += i;
        }
    }

    printf("%d\n", soma);

    return 0;
}