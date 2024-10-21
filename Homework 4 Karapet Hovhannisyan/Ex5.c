#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int compareStrings(const void *a, const void *b) {
    const char **strA = (const char **)a;
    const char **strB = (const char **)b;
    return strcmp(*strA, *strB);
}

int compareByLength(const void *a, const void *b) {
    const char **strA = (const char **)a;
    const char **strB = (const char **)b;
    return strlen(*strA) - strlen(*strB);
}

void sortStrings(char *arr[], int n, int (*compare)(const void *, const void *)) {
    qsort(arr, n, sizeof(char *), compare);
}

void printStrings(char *arr[], int n) {
    for (int i = 0; i < n; i++) {
        printf("%s\n", arr[i]);
    }
}

int main() {
    char *arr[] = { "banana", "apple", "cherry", "blueberry", "grape" };
    int n = sizeof(arr) / sizeof(arr[0]);

    printf("Original array:\n");
    printStrings(arr, n);

    sortStrings(arr, n, compareStrings);
    printf("\nSorted alphabetically:\n");
    printStrings(arr, n);

    sortStrings(arr, n, compareByLength);
    printf("\nSorted by length:\n");
    printStrings(arr, n);

    return 0;
}