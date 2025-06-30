#include <stdio.h>

struct complex{
    int real;
    int imaginary;
};

int main(){
    struct complex number1={5,6};
    struct complex *ptr = &number1;
    printf("real part: %d",ptr->real);
    printf("real part: %d",ptr->imaginary);
    




}