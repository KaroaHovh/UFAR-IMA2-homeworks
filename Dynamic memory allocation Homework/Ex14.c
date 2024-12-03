#include <stdio.h>
#include <stdlib.h>

int main(){
    int n;
    int *arr;
    int current;

    printf("enter the number of elements in the array ");
    scanf("%d", &n);

    arr = (int *)malloc(n*sizeof(int));
    
    if (arr==NULL){
        printf("Error");
        return 1;
    }

    for(int i=0; i<n; i++){
        printf("Enter the element number %d: ", i+1);
        scanf("%d", &arr[i]);
    }
    

    for(int i=0; i<n; i++){
        for(int j=i+1; j<n; j++){
            if(*(arr+i)>*(arr+j)){
                current = *(arr+i);
                *(arr+i) = *(arr+j);
                *(arr+j) = current;
            }
        }
    }

    for(int i = 0; i<n; i++){
        printf("The element number %d : %d\n", i+1, *(arr+i));
    }
    
    free(arr);
}