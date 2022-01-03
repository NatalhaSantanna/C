#include <stdio.h>

int main(){

    //Problema "soma_linhas"
    //Fazer um programa para ler dois números inteiros M e N (máximo = 10). Em seguida, ler uma matriz
    //de M linhas e N colunas contendo números reais. Gerar um vetor de modo que cada elemento do vetor
    //seja a soma dos elementos da linha correspondente da matriz. Mostrar o vetor gerado.

    int m, n, somaLinha;

    printf("Qual a quantidade de linhas da matriz?");
    scanf("%d", &m);

    printf("Qual a quantidade de colunas da matriz?");
    scanf("%d", &n);

    double matriz[m][n], vet[m];

    for(int i = 0; i < m; i++){
        printf("Digite os elementos da %da linha: ", i+1);
        for(int j = 0; j < n; j++){
            scanf("%lf", &matriz[i][j]);
        }
    }

    printf("VETOR GERADO:\n");
    for(int i = 0; i < m; i++){
        somaLinha = 0;
        for(int j = 0; j < n; j++){
            somaLinha = somaLinha + matriz[i][j];
        }
        vet[i] = somaLinha;
        printf("%.1lf\n", vet[i]);
    }
}
