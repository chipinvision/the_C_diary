/*
ALGORITHM:
  1. START A FOR LOOP (OUTER)
  2. SET I=1;
  3. PASS I<=5;
  4. I++;
  5. START ANOTHER FOR LOOP (INNER)
  6. SET J=1;
  7. PASS J<=I;
  8. J++;
  9. PRINT J
  10. LOOP ENDS (INNER)
  11. PRINT \n
  12. LOOP ENDS (OUTER)

OUTPUT:
   1 
   1 2 
   1 2 3 
   1 2 3 4 
   1 2 3 4 5
*/
#include <stdio.h>

int main(){

    int i,j;
    for(i=1; i<=5; i++){
        for(j=1; j<=i; j++){
            printf("%d ", j);
        }
        printf("\n");
    }

    return 0;
}