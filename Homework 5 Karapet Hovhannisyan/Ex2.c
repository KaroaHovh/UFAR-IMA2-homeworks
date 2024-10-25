#include <stdio.h>

int main(){

    struct complex{
        int real_part, imaginary_part;
    }num1, num2;

    printf("Please input the real part of the first complex number :");
    scanf("%d", &num1.real_part);
    printf("Please input the imaginary part of the first complex number :");
    scanf("%d", &num1.imaginary_part);

    printf("Please input the real part of the second complex number :");
    scanf("%d", &num2.real_part);
    printf("Please input the imaginary part of the second complex number :");
    scanf("%d", &num2.imaginary_part);


    int real, imaginary;
    real = num1.real_part*num2.real_part-num1.imaginary_part*num2.imaginary_part;
    imaginary = num1.real_part*num2.imaginary_part+num1.imaginary_part*num2.real_part;

    if (imaginary<0){
        printf("The sum of these complex numbers is %d%di", real, imaginary);
    }
    else{
        printf("The sum of these complex numbers is %d+%di", real, imaginary);
    }

    
    

    

    

}