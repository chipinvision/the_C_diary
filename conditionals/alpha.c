// CHECK WHETHER THE CHARACTER IS ALPHABET OR NOT
#include<stdio.h>

int main(){

    char ch = '!';

    if ((ch>=97 && ch<=122) || (ch>=65 && ch<=90)){
        printf("Alphabet");
    }else{
        printf("Not Alphabet");
    }

    return 0;
}