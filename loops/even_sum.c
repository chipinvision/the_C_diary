//SUM OF ALL EVEN NATURAL NUMBERS
#include<stdio.h>

int main(){
    int i, n, sum = 0;

    for (i=1; i<=n; i++)
    {
        if (i%2==0)
        {
            sum+=1;
        }
    }

    printf("Sum: %d", sum);
    
    return 0;
}