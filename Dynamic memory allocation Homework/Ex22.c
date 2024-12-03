#include <stdio.h>

int main() {
    char str[50];      
    char reversed[50];   
    char *ptr = str; 
    char *revptr = reversed; 
    int i = -1; 

    printf(" Input a string : ");
    scanf("%s", str);

    while (*ptr) {
        ptr++; 
        i++;   
    }

    while (i >= 0) {
        ptr--;             
        *revptr = *ptr;     
        revptr++;             
        --i;                 
    }

    *revptr = '\0'; 

    printf(" Reverse of the string is : %s\n\n", reversed);

    return 0;
}
