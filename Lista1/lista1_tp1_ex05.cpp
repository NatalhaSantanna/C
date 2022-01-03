#include <stdio.h>

int main(){
    float tempC, tempF;

    printf("Digite a temperatua em graus Celsius:");
    scanf("%f", &tempC);

    tempF = 32 + (212 - 32) / 100 * tempC;

    printf("Temperatura em Fahrenheit: %.1f", tempF);
}
