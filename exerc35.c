#include <stdio.h>

int main(){
    int operacao, c;
    float x, y, resultado = 0;



    do{
        printf("Digite o numero referente a operacao desejada: 1 - soma, 2 - multiplicacao, 3 - divisao, 4 - subtracao. Qual voce deseja realizar?\n");
        scanf("%d", &operacao);

        printf("Digite o primeiro numero\n");
        scanf("%f", &x);
        printf("Digite o segundo numero\n");
        scanf("%f", &y);

        switch(operacao){
            case 1:
            resultado = x + y;

            break;

            case 2:
            resultado = x * y;
            break;

            case 3:
            resultado = x / y;
            break;

            case 4:
            resultado = x - y;
            break;

            default:
                printf("\n");
                break;



        }

        printf("O resultado eh: %.2f\n", resultado);
        printf("Digite 1 para continuar\n");
        scanf("%d", &c);


    }while(c == 1);

    return 0;

}