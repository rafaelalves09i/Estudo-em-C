#include <stdio.h>

int main(){
    int an = 999, r = 2, a1 = 1;
    int Sn, n;

    n = ((an - a1) / r) + 1;
    Sn = ((a1 + an)*n)/2;

    printf("Resultado: %d\n", Sn);

    return 0;
}