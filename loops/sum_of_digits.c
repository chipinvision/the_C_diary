/*
ALGORITHM:
  DECLARE VARIABLES OF INT TYPE NUM, MOD, SUM
  SET SUM = 0
  NUM -> CONTAINS THE NUMBER
  MOD -> NUM%10
  SUM -> SUM+MOD
  NUM -> NUM/10
  ALL OPERATIONS INSIDE THE LOOP
  LOOP CONDITION: NUM>0
  PRINT THE RESULT (OUTSIDE THE LOOP)
*/
#include<stdio.h>

int main(){

    int num, mod, sum=0;
    scanf("%d", &num);

    while(num>0){
        mod = num%10;
        sum = sum+mod;
        num = num/10;
    }

    printf("%d", sum);

    return 0;
}