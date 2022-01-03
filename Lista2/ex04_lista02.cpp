#include <stdio.h>

int main()
{
    int n, k;

    printf("Digite o primeiro numero: ");
    scanf("%d", &n);

    printf("Digite o segundo numero: ");
    scanf("%d", &k);

    if(n % k == 0)
    {
        printf("O numero %d e divisivel por %d.", n, k);
    }
    else{
        printf("%d NAO e divisivel por %d", n, k);
    }
}
