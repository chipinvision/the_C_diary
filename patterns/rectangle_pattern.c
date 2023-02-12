/*
ALGORITHM:
  1. START A FOR LOOP (OUTER)
  2. SET I=0;
  3. PASS I<5;
  4. I++;
  5. START ANOTHER FOR LOOP (INNER)
  6. SET J=0;
  7. PASS J<5;
  8. J++;
  9. PRINT *
  10. LOOP ENDS (INNER)
  11. PRINT \n
  12. LOOP ENDS (OUTER)

OUTPUT:
   *****
   *****
   *****
   *****
   *****
*/
#include <stdio.h>

int main(){

    int i,j;
    for(i=0; i<5; i++){
        for(j=0; j<5; j++){
            printf("*");
        }
        printf("\n");
    }

    return 0;
}