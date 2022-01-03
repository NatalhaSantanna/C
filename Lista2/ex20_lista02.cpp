#include <stdio.h>

int main(){

    float p1, p2, nota_trab, media;
    int faltas;

    printf("Digite a nota da P1, da P2 e do Trabalho:");
    scanf("%f %f %f", &p1, &p2, &nota_trab);

    printf("Digite a quantidade de faltas do aluno:");
    scanf("%d", &faltas);

    media = ((p1 * 3) + (p2 * 5) + (nota_trab * 2))/ 10;

    printf("\nMedia: %.1f", media);

    if(faltas > 15){
        puts("\nAluno reprovado por faltas!");
    }
    else if(media <= 4){
        puts("\nAluno reprovado. Media inferior a 4.");
    }
    else if(media >= 7 && faltas <= 15){
        puts("\nAluno aprovado!");
    }
    else{
        puts("\nO aluno devera fazer Prova Final.");
    }
}
