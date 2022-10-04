// CHECK WHETHER A CHARACTER IS VOWEL OR CONSONANT
#include<stdio.h>

int main(){
    char ch = 'h';

    switch(ch){
		case 'a':
		case 'A':
		case 'e':
		case 'E':
		case 'i':
		case 'I':
		case 'o':
		case 'O':
		case 'u':
		case 'U': printf("Vowel");
		break;
		default: printf("Consonant");
	}

    return 0;
}