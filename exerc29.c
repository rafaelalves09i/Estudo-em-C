#include <stdio.h>
#include <math.h>

int main(){
    float x1, x2, y1, y2;
    float Distancia;

    scanf("%f%f", &x1, &y1);
    scanf("%f%f", &x2, &y2);

    Distancia = pow(pow(x2 - x1, 2) + pow(y2 -y1, 2), 0.5);

    printf("%.4f\n", Distancia);

    return 0;
}