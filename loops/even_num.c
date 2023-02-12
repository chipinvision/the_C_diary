// PRINT ALL EVEN NUMBERS FROM 1 TO LIMIT GIVEN BY USER
#include<stdio.h>

int main(){
    int i,n;

    printf("Set Limit: ");
    scanf("%d", &n);

    for(i=1; i<=n; ++i){
        if (i%2==0)
        {
            printf("%d\n", i);
        }
    }

    return 0;
}