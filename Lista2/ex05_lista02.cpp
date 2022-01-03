#include <stdio.h>

int main()
{
    int a, b, c, min, max;

    printf("Digite o valor de a: ");
    scanf("%d", &a);

    printf("Digite o valor de b: ");
    scanf("%d", &b);

    printf("Digite o valor de c: ");
    scanf("%d", &c);

    if(a > b)
    {
        max = a;
        min = b;
    }
    else
    {
        max = b;
        min = a;
    }
    if (c > max)
    {
        max = c;
    }
    else if (c < min)
    {
        min = c;
    }
        printf("O maior valor e: %d\nO menor valor e: %d", max, min);
}
