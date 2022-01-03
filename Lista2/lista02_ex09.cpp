#include <stdio.h>

int main(){

    int pecas;
    float valor_desc, valor_peca, valor_total, valor_mod;

    printf("Digite a quantidade de pecas: ");
    scanf("%d", pecas);

    printf("Digite o valor de cada peca: ");
    scanf("%f", &valor_peca);

    valor_total = pecas * valor_peca;
    valor_desc = valor_total * 0.2;
    valor_mod = valor_total - valor_desc;

    if(valor_total > 200){
        printf("\nO total a pagar e: R$%.2f", valor_mod);
    }

    else{
        printf("\nO total a pagar e: R$%.2f", valor_total);
    }
}
