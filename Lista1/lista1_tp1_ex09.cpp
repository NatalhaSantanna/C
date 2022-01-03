#include <stdio.h>

int main (){

    float altura, volume, raio;

    printf("Digite o raio do cilindro: ");
    scanf("%f", &raio);

    printf("\nDigite a altura do cilindro: ");
    scanf("%f", &altura);

    volume = 3.1416 * raio * raio * altura;

    printf("\nO volume do cilindro e de: %f", volume);
}
