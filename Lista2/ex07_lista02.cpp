#include <stdio.h>

int main()
{
    float altura;
    int idade;

    printf("Digite a altura do atleta: ");
    scanf("%f", &altura);

    printf("Digite a idade: ", idade);
    scanf("%d", &idade);

    if(altura > 1.8 && idade < 18)
    {
        printf("Selecionado");
    }
    else
    {
        printf("NAO Selecionado");
    }
}
