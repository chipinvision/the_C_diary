// GST CALCULATOR IN C
#include<stdio.h>
int main(){

    double cp, gp, result;

    printf("Cost of Product: ");
    scanf("%f\n", &cp);

    printf("GST Percentage: ");
    scanf("%f\n", &gp);

    result = cp+(gp*cp)/100;
    printf("Price (Including GST): %f", result);

    return 0;
}