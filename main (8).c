#include<stdio.h>
int main(){
    int n;
    do{
        if(n%2==0){
            printf("%i é par ",n);
        }
        else{
            printf("%i é impar ",n);
            
        }
        n = n+1;
        
    }while(n<=20);

    return 0;
    
}