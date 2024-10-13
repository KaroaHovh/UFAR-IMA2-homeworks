#include <stdio.h>



int main(){

    int n, j;

    printf("Write a program in C to store n elements in an array and print the elements using a pointer.\n");
    printf("Enter the number of integers that sould be stored in array :");
    scanf("%d", &n);

    int array[n];
    int* ptr_array;
    ptr_array = &array[0];
    
    for (int i=0; i<n; i++){
        printf("Enter number N%d:", i+1);
        scanf("%d", &j);
        array[i] = j;

    }

    for(int i =0; i<n; i++){
        printf("Number %d: %d\n", i+1, *ptr_array);
        ptr_array++;
    }

    return 0;

}