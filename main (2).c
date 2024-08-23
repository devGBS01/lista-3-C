#include <stdio.h>nt

int main(){
    int n;
    n = 1;
    while(n <=20){
        if(n%2==0){
            printf("%d é par ", n);
        }
        else{
            printf("%d é impar  ", n);
        }
        n = n + 1;
    }
    return 0;
}