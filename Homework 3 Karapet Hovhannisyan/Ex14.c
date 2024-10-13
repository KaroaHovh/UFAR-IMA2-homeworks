#include <stdio.h>

int main(){
    int n, j; 

    printf("Input the number of elements in the array\n");
    scanf("%d", &n);

    int array[n];
    int* ptr_array;
    ptr_array = &array[0];
    
    for (int i=0; i<n; i++){
        printf("Enter the element number N%d:", i+1);
        scanf("%d", &j);
        array[i] = j;

    }
    int current_num;
    for (int i=0; i<n; i++){
        for(int j=i+1; j<n; j++){
            if(*(ptr_array+i)>*(ptr_array+j)){
                current_num = *(ptr_array+i);
                *(ptr_array+i) = *(ptr_array+j);
                *(ptr_array+j) = current_num;
            }
        }
    }

    printf("Here is your array sorted\n");
    printf("[");
    for(int i = 0; i<n; i++){
        if(i==n-1){
            printf("%d", array[i]);
        }else{
            printf("%d,", array[i]);
        }
    }
    printf("]");
}