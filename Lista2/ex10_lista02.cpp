#include <stdio.h>
#include <math.h>

int main()
{
    float n;

    printf("Digite um numero:");
    scanf("%f", &n);

    if(n < 0){
        printf("A potenciacao e igual a: %.1f", pow(n, 2));
    }
    else{
        printf("A raiz quadrada e: %.1f", sqrt(n));
    }
}
