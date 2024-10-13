#include <stdio.h>

int main(){

    //let the magic happen ;)

    char alphabet[27];
    char* ptr_alphabet = alphabet;


    for(int i = 0; i<27; i++){
        *ptr_alphabet = 'A'+i;
        ptr_alphabet++;
    }

    ptr_alphabet = alphabet;

    for(int i = 0; i<26; i++){
        printf("%c ", *ptr_alphabet);
        ptr_alphabet++;
    }


}