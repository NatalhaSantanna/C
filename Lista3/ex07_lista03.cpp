#include <stdio.h>

int main(){

   int n, cont = 0;

   for(int i = 1; i <=10; i++){
       printf("Digite o numero %d: ", i);
       scanf("%d", &n);

       if((n % 3 == 0 || n % 5 == 0)&& n % 2 > 0){
           cont++;
       }
   }
   printf("sao divisiveis por 3 ou 5, mas nao sao pares: %d numeros", cont);
}
