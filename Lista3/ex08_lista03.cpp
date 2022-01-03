#include <stdio.h>

int main(){

    int n, cont_dentro = 0, cont_fora = 0;

    for(int i = 1; i <=10; i++){
       printf("Digite o numero %d: ", i);
       scanf("%d", &n);

       if(n >= 10 && n <= 20){
            cont_dentro++;
       }
       else{
            cont_fora++;
       }
    }
    printf("Quantidade de numeros dentro do intervalo de 10 a 20: %d\n", cont_dentro);
    printf("Quantidade de numeros fora do intervalo de 10 a 20: %d", cont_fora);
}
