#include <stdio.h>

int main(){

    for(int n = 1000; n <= 1999; n++){
        if(n % 11 == 5){
            printf("%d ", n);
        }
    }
}
