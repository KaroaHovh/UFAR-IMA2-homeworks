#include <stdio.h>

int main() {

    char string[50];
    char reversed_string[50];
    int i = 0;
    int length = 0;

    char* ptr_string;
    char* ptr_reversed_string;

    ptr_string = string;
    ptr_reversed_string = reversed_string;


    printf("Input the string: ");
    scanf("%s", string);

    while (*(ptr_string + length) != '\0') {
        length++;
    }

    for (i = 0; i < length; i++) {
        *(ptr_reversed_string + i) = *(ptr_string + length - i - 1);
    }

    printf("Reversed string: %s\n", reversed_string);

    return 0;
}