#include <stdio.h>
#include <math.h>

int main(){
    float V, n, k, T, P;

    printf("Digite o valor a ser parcelado:");
    scanf("%f", &V);

    printf("\nQuantidade de prestações que deseja parcelar:");
    scanf("%f",&n);

    printf("\nDigite a porcentagem de juros:");
    scanf("%f", &k);

    T = (pow((1 + k), n) - 1) / (k * (pow((1 + k), n)));
    P = V / T;

    printf("\nO valor da prestacao sera: %.2f", P);
}
