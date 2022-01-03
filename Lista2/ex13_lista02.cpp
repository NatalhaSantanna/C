#include <stdio.h>
#include <math.h>

int main(){

    float p1, p2, p3, p, a;

    printf("Digite as coordenadas dos pontos P1, P2 e P3: ");
    scanf("%f %f %f", &p1, &p2, &p3);

    p = (p1 + p2 + p3)/2;
    a = sqrt(p * (p - p1) * (p - p2) * (p - p3));

    if(p1 <= 0 || p2 <= 0 || p3 <= 0){
        puts("Os lados sao 0 ou negativos!");
    }
    else{
        if(p1 < p2 + p3 && p2 < p1 + p3 && p3 < p1 + p2){
            printf("O perimetro do triangulo e: %f", p);
            printf("A area do triangulo e de: %f", a);
        }
        else{
            puts("Nao e um triangulo!");
        }
    }

}
