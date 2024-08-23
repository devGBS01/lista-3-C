#include<stdio.h>

int main(){
    int n;
    for(n == 1;n <= 20; n+1){
        if(n%2==0){
            printf("%i o número é par ",n);
        }
        else{
            printf("%i é impar ",n);
        }
        n = n+1;
    }
    return 0;
}