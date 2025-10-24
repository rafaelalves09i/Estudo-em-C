#include <stdio.h>

int main() {
    int a, b, c, temp;
    int n1, n2, n3;

    printf("Digite tres numeros inteiros:\n");
    scanf("%d%d%d", &a, &b, &c);

    // números na ordem que foram digitados pelo usuário.
    n1 = a;
    n2 = b;
    n3 = c;

    // Se a > b, troca
    if (a > b) {
        temp = a;
        a = b;
        b = temp;
    }

    // Se b > c, troca
    if (b > c) {
        temp = b;
        b = c;
        c = temp;
    }

    // Verifica novamente a > b (pois a e b podem ter mudado)
    if (a > b) {
        temp = a;
        a = b;
        b = temp;
    }

    printf("%d\n", a);
    printf("%d\n", b);
    printf("%d\n", c);
    printf("\n");
    printf("%d\n", n1);
    printf("%d\n", n2);
    printf("%d\n", n3);

    return 0;

}