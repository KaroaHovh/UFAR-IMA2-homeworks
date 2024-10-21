#include <stdio.h>

void copy_arr(int* array1, int* array2, int n){

    for (int i=0; i<n; i++){
        *(array2+i) = *(array1+i);
    }

}

int main(){
    int n, j; 

    printf("Input the number of elements in the array\n");
    scanf("%d", &n);

    int array[n];

    for (int i=0; i<n; i++){
        printf("Enter the element number N%d:", i+1);
        scanf("%d", &j);
        array[i] = j;

    }


    int copied_array[n];

    copy_arr(&array, &copied_array, n);


    printf("your copied array is [");
    for (int i = 0; i<n; i++){
        printf ("%d ", copied_array[i]);
    }
    printf("]");


}