#include <stdio.h>

int main()
{
    int a, b, contaC, c, contaD, d, e;

    printf("Escreva um numero com 4 digitos: ", a);
    scanf("%d", &a);

    b = a / 1000;
    c = a / 100 % 10;
    d = a / 10 % 10;
    e = a % 10;

    printf("Imprimindo o numero ao contrario: %d%d%d%d", e, d, c, b);
}
