#include <stdio.h>

int main (){
    float km, milhas;

    printf("Conversao de Km em milhas");
    printf("\nDigite a quantidade de km: ");
    scanf("%f", km);

    milhas = km * 0.621371;

    printf("Em milhas = %f", milhas);
}
