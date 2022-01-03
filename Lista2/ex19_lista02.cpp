#include <stdio.h>

int main(){
    int ano_nasc, ano_atual, idade;

    printf("Digite o ano em que nasceu:");
    scanf("%d", &ano_nasc);

    printf("Digite o ano atual:");
    scanf("%d", &ano_atual);

    idade = ano_atual - ano_nasc;

    printf("A idade da pessoa e/sera em %d: %d", ano_atual, idade);

    if(idade <= 3 && idade > 0){
        puts("\nE um bebe.");
    }
    else if(idade > 4 && idade <= 10){
        puts("\nE uma crianca.");
    }
    else if(idade >= 11 && idade <= 18){
        puts("\nE um adolescente");
    }
    else if(idade >= 19 && idade <= 60){
        puts("\nE um adulto.");
    }
    else{
        puts("\nE uma pessoa idosa.");
    }
}
