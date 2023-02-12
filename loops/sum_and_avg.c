/*
TAKING 5 NUMBERS AS INPUT AND THEN FINDING THEIR SUM AND AVERAGE

ALGORITHM:
  DECLARE VARIABLE I, N, AVG AND SUM OF INT TYPE
  SET SUM=0 & AVG=0
  START THE LOOP
  SET I=1
  PASS CONDITION I<=5
  INCREMENT VALUE OF I
  TAKE INPUT THROUGH N (INSIDE THE LOOP)
  SET SUM=SUM+I
  SET AVG=SUM/5 (OUTSIDE THE LOOP)
  PRINT SUM (OUTSIDE THE LOOP)
  PRINT AVG (OUTSIDE THE LOOP)
*/

#include<stdio.h>
void main(){

    int i, n, sum = 0, avg = 0;

    for(i=1; i<=5; i++)
    {
      printf("Enter Number: ");
      scanf("%d", &n);
      sum = sum+i;
    }
    avg = sum/5;
    printf("Sum: %d\n", sum);
    printf("Average: %d", avg);

}