#include <stdio.h>

void itob(int n, char s[], int b) {
    switch (b) {
        case 2: {  
            char binary[32];
            int i = 0;
            while (n > 0) {
                binary[i++] = (n % 2) + '0';  
                n /= 2;
            }
            
            for (int j = 0; j < i; j++) {
                s[j] = binary[i - j - 1];
            }
            s[i] = '\0';  
            printf("Binary: %s\n", s);
            break;
        }
        case 8: {  
            sprintf(s, "%o", n);  
            printf("Octal: %s\n", s);
            break;
        }
        case 16: {  
            sprintf(s, "%x", n);  
            printf("Hexadecimal: %s\n", s);
            break;
        }
        default:
            printf("poof\n");
    }
}

int main() {
    int n, b;
    char s[1000];  

    printf("Please type the number to convert: ");
    scanf("%d", &n);

    printf("Please type 2 for binary, 8 for octal, 16 for hexadecimal: ");
    scanf("%d", &b);

    itob(n, s, b);

    return 0;
}
