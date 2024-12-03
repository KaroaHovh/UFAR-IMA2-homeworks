#include <stdio.h>
#include <stdlib.h>

int main(){
    int n;
    int *arr;

    printf("Input total number of elements(1 to 100):");
    scanf("%d", &n);
    while(n>100||n<0){
        printf("Wrong input, enter again");
        scanf("%d", &n);
    }

    arr = (int *)malloc(n*sizeof(int));

    if(arr == NULL)
    return 1;

    for(int i=0; i<n; i++){
        printf("Enter the element number %d: ", i+1);
        scanf("%d", &arr[i]);
    }

    int max=*arr;
    
    for(int i=1; i<n; i++){
        if(max<*(arr+i)){
            max=*(arr+i);
        }else{
            continue;
        }
    }

    printf("The largest element is %d\n", max);
    free(arr);

}