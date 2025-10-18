#include <stdio.h>

int main(){
    float raio, altura, Volume;

    scanf("%f%f", &raio, &altura);

    Volume = 3.141592 * raio * raio * altura;
    printf("Volume = %.6f", Volume);
    return 0;
}