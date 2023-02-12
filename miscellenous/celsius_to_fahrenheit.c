#include<stdio.h>

int main(){
	
	int celsius, fahrenheit;
	
	printf("Enter temperature in Celsius: ");
	scanf("%d", &celsius);

    fahrenheit = celsius*1.8+32;
    
    printf("%d degree celsius in fahrenheit: %d", celsius, fahrenheit);
	
	return 0;
}
