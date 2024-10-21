#include <stdio.h>
#include <string.h>

#define MAX_STR_LEN 10000

int main(){

    char string[MAX_STR_LEN];
    char c;
    int i = 0;
    printf("Type the line\n");
    while((c=getchar()) !="/n"){
        string[i++] = c;
    }

    int len = strlen(string);
    int tail = 10;
    

    

}