#include <stdio.h>

int main(){
    int a = 5;
    int b=5;
    int* x = &a;
    *x =7;
    printf("%p\n",&a);
    // printf("%p\n",&b);
    // printf("%p\n",x);
    // printf("%p\n",&x);
    // printf("%d\n",*x);
    printf("%d\n",a);


    

    return 0;
}