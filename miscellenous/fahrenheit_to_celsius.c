#include<stdio.h>

int main(){
	
	double fahrenheit, celsius;
	
	printf("Enter temperature in Fahrenheit: ");
	scanf("%ld", &fahrenheit);
	
	celsius = fahrenheit-32*5/9;
	
	printf("%ld degree fahrenheit in celsius: %ld", celsius);
	
	return 0;
}
