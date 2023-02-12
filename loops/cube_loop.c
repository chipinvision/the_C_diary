/*
DISPLAYING CUBE OF NUMBERS UPTO GIVEN LIMIT

ALGORITHM:
  DECLARE I,N AND CUBE OF INT TYPE
  SET CUBE = 0
  START THE LOOP
  SET I=1
  PASS I<=N
  INCREMENT I
  TAKE INPUT THROUGH N (INSIDE THE LOOP)
  CUBE = I*I*I
  PRINT CUBE (OUTSIDE THE LOOP)
*/

#include<stdio.h>

void main(){

    int i, n, cube=0;

    for(i=1; i<=n; i++)
    {
        printf("Set Limit: ");
        scanf("%d", &n);
        cube = i*i*i;
    }
    printf("Number: %d\n",n);
    printf("Cube: %d",i);
}