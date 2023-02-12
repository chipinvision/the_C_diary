#include<stdio.h>

int main(){

    int i, n, isPrime;

    isPrime = 1; //True

    scanf("%d", &n);

    for(i=2; i<n; i++){
        if(n%i==0){
            isPrime = 0; //False
            break;
        }
    }

    if(isPrime){
        printf("%d is a prime number", n);
    }else{
        printf("%d is not a prime number", n);
    }

    return 0;
}