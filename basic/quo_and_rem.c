// TO FIND QUOTIENT AND REMINDER OF A NUMBER

#include<stdio.h>

int main(){

    int dividend, divisor, quotient, reminder;

    printf("Enter dividend: ");
    scanf("%d", &dividend);
    printf("Enter divisor: ");
    scanf("%d", &divisor);

    quotient = dividend / divisor;
    reminder = dividend % divisor;

    printf("Quotient: %d", quotient);
    printf("\nReminder: %d", reminder);

    return 0;
}