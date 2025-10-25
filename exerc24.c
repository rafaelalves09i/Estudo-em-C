#include <stdio.h>
#include <math.h>

int main(){
    float a, b, c;
    float temp;

    scanf("%f%f%f",&a, &b, &c);

    if (b > a){
        temp = b;
        b = a;
        a = temp;
    }
    if( c > a){
        temp = c;
        c = a;
        a = temp;
    }
    if( c > b){
        temp = c;
        c = b;
        b = temp;
    }

    if( a >= b + c){
        printf("NAO FORMA TRIANGULO\n");
    
    }else if(pow(a,2) == pow(b,2) + pow(c,2)){
        printf("TRIANGULO RETANGULO\n");
        
    }else if(pow(a,2) > pow(b,2) + pow(c,2)){
        printf("TRIANGULO OBTUSANGULO\n");

    }else if(pow(a,2) < pow(b,2) + pow(c,2)){
        printf("TRIANGULO ACUTANGULO\n");
    
    }

    if(a == b && a == c){
        printf("TRIANGULO EQUILATERO\n");
        
    }else if(a == b || a == c || b == c){
        printf("TRIANGULO ISOSCELES\n");
    }

    return 0;


}