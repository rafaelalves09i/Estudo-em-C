#include <stdio.h>

int main(){
    int ano;
    printf("Digite o ano para saber se eh bissexto:\n");
    scanf("%d",&ano);

    if((ano%4 == 0 && ano/100 != 0) || (ano/400 == 0)){
        printf("1\n");/*é bissexto*/
    }else{
        printf("0\n");/*ñ é bissexto*/
    }

return 0;
}