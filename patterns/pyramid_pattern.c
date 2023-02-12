/*
ALGORITHM:
  1. START A FOR LOOP (OUTER)
  2. SET I=0;
  3. PASS I<5;
  4. I++;
  5. START ANOTHER FOR LOOP (INNER-1)
  6. SET J=0;
  7. PASS J<5-I-1;
  8. J++;
  9. PRINT " "
  10. LOOP ENDS (INNER-1)
  11. START ANOTHER FOR LOOP (INNER-2)
  12. SET J=0;
  13. PASS J<2*I+1;
  14. J++;
  15. PRINT *
  16. LOOP ENDS (INNER-2)
  17. START ANOTHER FOR LOOP (INNER-3)
  18. SET J=0;
  18. PASS J<5-I-1;
  19. J++;
  20. PRINT " "
  21. LOOP ENDS (INNER-3)
  22. PRINT \n
  23. LOOP ENDS (OUTER)

OUTPUT:
       *
      ***
     *****
    *******
   *********
*/
#include <stdio.h>

int main(){

    int i,j;

    for(i=0; i<5; i++){
        //space
        for(j=0; j<5-i-1; j++){
            printf(" ");
        }
        //star
        for(j=0; j<2*i+1; j++){
            printf("*");
        }
        //space
        for(j=0; j<5-i-1; j++){
            printf(" ");
        }
        printf("\n");
    }

    return 0;
}