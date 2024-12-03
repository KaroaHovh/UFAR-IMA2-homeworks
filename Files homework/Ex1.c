#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_LINE_LENGTH 1024

void compareFiles(const char *file1, const char *file2) {
    FILE *fp1 = fopen(file1, "r");
    FILE *fp2 = fopen(file2, "r");
    char line1[MAX_LINE_LENGTH];
    char line2[MAX_LINE_LENGTH];
    int lineNumber = 1;

    if (fp1 == NULL || fp2 == NULL) {
        printf("Error opening files.\n");
        if (fp1) fclose(fp1);
        if (fp2) fclose(fp2);
        return;
    }

    while (fgets(line1, MAX_LINE_LENGTH, fp1) != NULL && 
           fgets(line2, MAX_LINE_LENGTH, fp2) != NULL) {
        if (strcmp(line1, line2) != 0) {
            printf("Files differ at line %d:\n", lineNumber);
            printf("File1: %s", line1);
            printf("File2: %s", line2);
            fclose(fp1);
            fclose(fp2);
            return;
        }
        lineNumber++;
    }

    if (fgets(line1, MAX_LINE_LENGTH, fp1) != NULL || 
        fgets(line2, MAX_LINE_LENGTH, fp2) != NULL) {
        printf("Files differ at line %d:\n", lineNumber);
        printf("File1: %s", fgets(line1, MAX_LINE_LENGTH, fp1) ? line1 : "EOF\n");
        printf("File2: %s", fgets(line2, MAX_LINE_LENGTH, fp2) ? line2 : "EOF\n");
    } else {
        printf("The files are identical.\n");
    }

    fclose(fp1);
    fclose(fp2);
}

int main(int argc, char *argv[]) {
    if (argc != 3) {
        printf("Usage: %s <file1> <file2>\n", argv[0]);
        return 1;
    }

    compareFiles(argv[1], argv[2]);
    return 0;
}
