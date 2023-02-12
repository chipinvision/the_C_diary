#include<stdio.h>

int main(){

    double p,t,r,si;

    printf("Principal Amount: ");
    scanf("%lf", &p);
    printf("Rate Of Interest: ");
    scanf("%lf", &r);
    printf("Time (in years): ");
    scanf("%lf", &t);

    si = (p*t*r)/100;
    printf("Interest: %.2lf", si);

    return 0;
}