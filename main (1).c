#include <stdio.h>

int main(){
    int n;
    n = 20;
    while(n >1){
        if(n%2==0){
            printf("%i ", n);
        }
        n = n - 1;
    }
    return 0;
}
