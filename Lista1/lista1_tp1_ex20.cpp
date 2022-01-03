#include <stdio.h>

int main()
{
    int numero, parte_1, parte_2, soma, multiplicacao;

    printf("Escreva um numero com 4 digitos: ", numero);
    scanf("%d", &numero);

    parte_1 = numero / 100;

    parte_2 = numero % 100;

    //para somar as duas partes do numero
    soma = parte_1 + parte_2;

    //para multiplicar a soma 2 vezes
    multiplicacao = soma * soma;

    //para imprimir os resultados da soma e multiplicacao
    printf("Primeira parte:%d\nSegunda parte:%d\nMultiplicacao das partes:%d", parte_1, parte_2, multiplicacao);

}
