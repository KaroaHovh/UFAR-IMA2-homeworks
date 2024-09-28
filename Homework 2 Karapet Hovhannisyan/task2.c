#include <stdio.h>
#include <string.h>

void expand(char s1[], char s2[]);

int main() {
    char s1[1000] = {};
    char s2[1000] = {};
    
    printf("Enter a string to expand (e.g., a-z or 1-5): ");
    scanf("%s", s1);

    expand(s1, s2);
    
    printf("Expanded result: %s\n", s2);
    
    return 0;
}

void expand(char s1[], char s2[]) {
    int i, j = 0;
    char c;

    for (i = 0; s1[i] != '\0'; i++) {
        if (s1[i] != '-') {  
            s2[j++] = s1[i];
        } else if (i > 0 && s1[i+1] != '\0' && s1[i-1] < s1[i+1]) {
            for (c = s1[i-1] + 1; c < s1[i+1]; c++) {
                s2[j++] = c;
            }
        }
    }

    s2[j] = '\0';  
}
