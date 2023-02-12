#include<stdio.h>
int main(){

    int n1,n2,i,lcm,max;
    printf("Enter first Number: ");
    scanf("%d", &n1);
    printf("Enter second Number: ");
    scanf("%d", &n2);
    max = (n1>n2) ? n1:n2;
    for(i=max; i<=n1*n2; i++){
        if(i%n1==0 && i%n2==0){
            lcm = i;
            break;
        }
    }
    printf("LCM of the number: %d", lcm);

    return 0;
}