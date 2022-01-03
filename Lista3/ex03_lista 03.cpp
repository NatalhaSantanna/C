#include <stdio.h>

int main(){
    int n;

    printf("Numeros pares ate 50, exceto o 0: ");

    for(n = 1; n <= 50; n++){
        if(n % 2 == 0){
        printf("%d ", n);
        }
    }
}
