#include <stdio.h>

int main(){

    int nota;

    printf("Digite a nota do aluno:");
    scanf("%d", &nota);

    if(nota == 10 || nota == 9){
        puts("\nNota com conceito A");
    }
    else if(nota == 7 || nota == 8){
        puts("\nNota com conceito B");
    }
    else if(nota == 5 || nota == 6){
        puts("\nNota com conceito C");
    }
    else if(nota < 5){
        puts("\nNota com conceito D");
    }
    else{
        puts("Nota invalida");
    }
}
