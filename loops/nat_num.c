// PRINT ALL NATURAL NUMBER FROM 1 TO n
#include<stdio.h>

int main(){
    int num;

    printf("Set a Limit: ");
    scanf("%d", &num);

    for(int i=1; i<=num; ++i){
        printf("%d\n",i);
    }
    
    return 0;
}