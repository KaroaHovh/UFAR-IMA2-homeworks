#include <stdio.h>

//task 1

int main() {
    int c, i, j, length = 0;
    int word_lengths[10] = {0}; 

    while ((c = getchar()) != EOF) {
        if (c == ' ' || c == '\n' || c == '\t') {
            if (length > 0 && length < 10) {
                word_lengths[length]++;
            }
            length = 0;
        } else {
            length++;
        }
    }

    for (i = 1; i < 10; i++) {
        printf("%d: ", i);
        for (j = 0; j < word_lengths[i]; j++) {
            putchar('*');
        }
        putchar('\n');
    }

    return 0;
}

