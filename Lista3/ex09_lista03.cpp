#include <stdio.h>

int main(){
    float n = 1;

    for(int i = 1; i <= 20; i++){
        printf("Polegada %d     Centimetro %.2f\n", i, n++ * 2.54);
    }
}
