//sum product & average using pointers

#include <stdio.h>

// void doWork(int a,int b,int* sum,int* product, int* average);

// int main(){
//     int a = 3, b = 5;
//     int sum,product,average;
//     doWork(a,b,&sum,&product,&average);
//     printf("Sum =%d\n Product =%d\n Average =%d",sum,product,average);
// }
// void doWork(int a,int b,int* sum,int* product, int* average){
//     *sum = a + b;
//     *product = a * b;
//     *average = (a+b)/2;
// }

int main(){
    int a,b;
    printf("Enter the value of a:");
    scanf("%d",&a);
    printf("Enter the value of b:");
    scanf("%d",&b);
    printf("Sum =%d\n",a+b);
    printf("Product =%d\n",a*b);
    printf("Average =%d",(a+b)/2);
}
