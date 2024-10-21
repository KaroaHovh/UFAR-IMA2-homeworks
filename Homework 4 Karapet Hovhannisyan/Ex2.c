#include <stdio.h>



int main(){
    int rows, columns;

    printf("Enter the number of rows :");
    scanf("%d", &rows);
    printf("Enter the number of columns :");
    scanf("%d", &columns);

    int matrix[rows][columns];
    int transpose_matrix[columns][rows];

    int x;
    for (int i = 0; i<rows; i++){
        for (int j = 0; j<columns; j++){
            printf("Input the eleent of the row %d and column %d :", i+1, j+1);
            scanf("%d", &x);
            matrix[i][j] = x;
        }
    }

    for (int i = 0; i<rows; i++){
        for (int j = 0; j<columns; j++){
            transpose_matrix[j][i] = matrix [i][j]; 
        }
    }

    printf("Transposed matrix\n");
    for (int i=0; i<columns; i++){
        printf("[");
        for (int j = 0; j<rows; j++){
            printf(" %d ", transpose_matrix[i][j]);
        }
        
    printf("]\n");

    }


    
}




