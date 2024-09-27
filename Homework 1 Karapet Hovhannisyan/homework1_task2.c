#include <stdio.h>

int main() {
    int character_count = 0;
    int input;
    char line[100]; 

    while ((input = getchar()) != EOF) {
        if (input == '\n') {
            line[character_count] = '\0';
            if (character_count <= 80) {
                printf("%s\n", line); 
            } else {
                printf("More than 80 characters\n");
            }
            character_count = 0; 
        } else {
            if (character_count < 100) { 
                line[character_count++] = input;
            }
        }
    }

    return 0;                                       
}
