#include <stdio.h>

int main(){
    int n;

    for(n = 5; n <= 100; n++){
        if(n % 5 == 0){
            printf("%d ", n);
        }
    }
}
