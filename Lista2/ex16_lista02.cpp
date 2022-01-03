#include <stdio.h>

int main(){

    float nota;

    printf("Digite a nota do aluno:");
    scanf("%f", &nota);

    if(nota <= 10 && nota >= 9){

        puts("\nNota com conceito A");
    }
    else if(nota >= 7 && nota <= 8.9){
        puts("\nNota com conceito B");
    }
    else if(nota >= 5 && nota <= 6.9){
        puts("\nNota com conceito C");
    }
    else if(nota <= 5 && nota > 0){
        puts("\nNota com conceito D");
    }
    else{
        puts("Nota invalida");
    }
}
