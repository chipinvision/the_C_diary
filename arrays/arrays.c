#include<stdio.h>

int main(){

    int numbers[5];

    printf("Enter 5 numbers:\n");

    for(int i=0; i<5; ++i){
        scanf("%d", &numbers[i]);
    }
    
    printf("Displaying Array:\n");

    for(int i=0; i<5; i++){
        printf("Element[%d]: %d\n", i, numbers[i]);
    }

    return 0;
}