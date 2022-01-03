#include <stdio.h>

const int CINCO = 5;
const int DUZENTOS = 200;
const int QUATROCENTOS = 400;

int main()
{
    int n;

    printf("Digite um numero qualquer: ");
    scanf("%d", &n);

    if(n == CINCO || n == DUZENTOS || n == QUATROCENTOS){
        printf("O numero e igual a %d", n);
    }
    else if(n > 500 && n < 1000){
        printf("ele esta no intervalo de 500 a 1000");
    }
    else{
        printf("ele nao obedece a nenhuma dessas regras");
    }
}
