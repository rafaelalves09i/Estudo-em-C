#include <stdio.h>

int main(){
    int i;
    for(i = 8; ;i++){
        if(i % 3 == 2 && i % 5 == 3 && i % 7 == 4){
            break;
        }

    }

        

    printf("O valor de n eh: %d", i);
    return 0;
}