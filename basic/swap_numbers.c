// SWAPPING TWO NUMBERS
#include<stdio.h>

int main(){

    double first, second, temp;

    printf("Enter first number: ");
    scanf("%lf", &first);
    printf("Enter second number: ");
    scanf("%lf", &second);

    temp = first;

    first = second;

    second = temp;

    printf("After Swapping: \n");
    printf("First Number: %.2f \n", first);
    printf("Second Number: %.2f \n", second);

    return 0;
}