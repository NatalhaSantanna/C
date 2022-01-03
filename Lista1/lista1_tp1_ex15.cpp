#include <stdio.h>

int main()
{
    int a, b, c, troca_a, troca_b, troca_c;

    printf("Insira o valor de a: ");
    scanf("%d", &a);

    printf("Insira o valor de b: ");
    scanf("%d", &b);

    printf("Insira o valor de c: ");
    scanf("%d", &c);

    troca_b = a;
    troca_a = c;
    troca_c = b;

    b = troca_b;
    a = troca_a;
    c = troca_c;

    printf("No rodizio de variaveis os valores trocam: a= %d, b= %d e c= %d", a, b, c);
}
