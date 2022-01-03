#include <stdio.h>

int main(){
    int horas;
    float valor_hr, sal_bruto, sal_liq;

    printf("Digite a quantidade de horas trabalhadas:");
    scanf("%d", &horas);

    printf("Digite o valor da hora:R$ ");
    scanf("%f", &valor_hr);

    sal_bruto = horas * valor_hr;

    if(sal_bruto > 1900 && sal_bruto <= 4300){
        sal_liq = sal_bruto - (sal_bruto * 0.1);
        printf("Salario Bruto: %.2f\nSalario Liquido: %.2f", sal_bruto, sal_liq);

    }
    else if(sal_bruto > 4300 && sal_bruto <= 5800){
        sal_liq = sal_bruto - (sal_bruto * 0.15);
        printf("Salario Bruto: %.2f\nSalario Liquuido: %.2f", sal_bruto, sal_liq);
    }
    else if(sal_bruto > 5800){
        sal_liq = sal_bruto - (sal_bruto * 0.27);
        printf("Salario Bruto: %.2f\nSalario Liquuido: %.2f", sal_bruto, sal_liq);
    }
    else{
        printf("Salario: %.2f. Nao tem desconto.", sal_bruto);
    }
}
