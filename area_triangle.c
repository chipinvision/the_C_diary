// AREA OF TRAINGLE
#include <stdio.h>

int main(){

    double base;
    double height;

    printf("Enter the base of triangle: ");
    scanf("%lf", &base);
    printf("Enter the height of triangle: ");
    scanf("%lf", &height);

    double area = (base*height)/2;
    printf("Area of triangle: %lf", area);

    return 0;
}