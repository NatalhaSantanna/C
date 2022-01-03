#include <stdio.h>

int main()
{
    int numero, centena, dezena, un, soma;

    printf("Insira um numero de 100 a 999: ");
    scanf("%d", &numero);

    centena = numero / 100;
    dezena = numero / 10 % 10;
    un = numero % 10;

    soma = centena + dezena + un;

    printf("Soma dos numeros = %d",soma);

}
