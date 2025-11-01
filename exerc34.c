#include <stdio.h>

int main(){
    float S = 0;
    int j = 1;
    int k = 1;

    for(int i = 1; i <= 20; i++){

        S += (float)j/k;
        j += 2;
        k *= 2;
    }
    printf("%.2f", S);
    return 0;
}