#include <stdio.h>
#include <string.h>

void escape (char s[], char t[]);

int main(){
    char input[1000] = {};
    char output[1000] = {};
    escape(input, output);
    
    return 0;
}

void escape (char s[], char t[]){
    char c;
    int i = 0;
    int j = 0;


    while((c = getchar()) != EOF){
        s[i++] = c;
    }
    s[i] = '\0';

    i = 0;
    while(s[i] != '\0'){  
        switch (s[i]){
            case '\n':
                t[j++] = '\\';
                t[j++] = 'n';
                break;
            case '\t':
                t[j++] = '\\';
                t[j++] = 't';
                break;
            default:
                t[j++] = s[i];
                break;
        }
        i++; 
    }

    t[j] = '\0'; 

    
    printf("%s", t);
}
