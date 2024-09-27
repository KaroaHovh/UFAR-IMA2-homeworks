#include <stdio.h>
#include <stdbool.h>
#include <string.h>

main(){
        printf("Try me!, type something and press enter.\n Press Ctrl+Z to close the code.\n");
        char c, text[100000] = {""};
        bool line_complete = false;
        
    for(;;){
        if(!line_complete){
            ("Please input the string\n");
            scanf(" %[^\n]", text);
            line_complete = true;
        }
        else if(line_complete){
            int len = strlen(text);
            for(int i=len-1; i>=0; i--){
                
                printf("%c", text[i]);
                text[i] = 0;
                
            }
            printf("\n");
            line_complete = false;
        }
    }
    return 0;
}