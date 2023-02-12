// C PROGRAM TO FIND ARMSTRONG NUMBER

#include<stdio.h>

int main(){
    
    int num, r, sum =0, temp;
    printf("Number: ");
    scanf("%d", &num);
    temp = num;
    while(num>0){
        r = num%10;
        sum = sum + (r*r*r);
        num = num/10;
    }
    if(temp==sum){
        printf("ARMSTRONG");
    }else{
        printf("NOT ARMSTRONG");
    }

    return 0;
}