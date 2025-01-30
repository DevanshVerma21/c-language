#include <stdio.h>
int main(){
    //dowhile
    // int i =5;
    // do{
    //     printf("%d\n",i);
    //     i--;
    // }
    // while(i>=0);
    //bitwise
    // int a,b;
    // printf("Enter the value of a:");
    // scanf("%d",&a);

    // printf("Enter the value of b:");
    // scanf("%d",&b);

    // printf("%d",a&b);

    int num, result, shift;

    printf("Enter a number: ");
    scanf("%d", &num);

    printf("Enter the number of positions to shift: ");
    scanf("%d", &shift);

    result = num >> shift;

    printf("Result of %d right-shifted by %d positions: %d\n", num, shift, result);

    return 0;
}


    
