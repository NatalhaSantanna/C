#include <stdio.h>

int main (){

    float nota_1, nota_2, nota_3, media;
    int peso_1, peso_2, peso_3;

    printf("Nota 1: ");
    scanf("%f", &nota_1);

    printf("Peso nota 1: ");
    scanf("%d", &peso_1);

    printf("Nota 2: ");
    scanf("%f", &nota_2);

    printf("Peso nota 2: ");
    scanf("%d", &peso_2);

    printf("Nota 3: ");
    scanf("%f", &nota_3);

    printf("Peso nota 3: ");
    scanf("%d", &peso_3);

    media = ((peso_1 * nota_1) + (peso_2 * nota_2) + (peso_3 * nota_3)) / (peso_1 + peso_2 + peso_3);

    printf("Media ponderada = %.1f", media);
}
