#include <stdio.h>

int average(){
    float a,b,c;
    printf("Enter the value of a:");
    scanf("%f",&a);
    printf("Enter the value of b:");
    scanf("%f",&b);
    printf("Enter the value of c:");
    scanf("%f",&c);
    
    printf("%f",(a+b+c)/3);
    return 0;
} 

int smallestnum()
{
    float a,b,c;
    printf("Enter the value of a:");
    scanf("%f",&a);
    printf("Enter the value of b:");
    scanf("%f",&b);
    printf("Enter the value of c:");
    scanf("%f",&c);
    
    if(a<b && a<c){
        printf("The smallest number is a: %f\n",a);
    }
    else if (b<a && b <c){
        printf("The smallest number is b: %f\n",b);
    }
    // if(c<a && c<b){
    else{
        printf("The smaleest number is c: %f\n",c);

    }
    return 0;
}
// int age(){
//     int age;
//     printf("Enter age:");
//     scanf("%d",&age);
//     if (age>=18 && age<=70){
//         printf("Can drive\n");
//     }
//     else {
//         printf("Cannot drive");
//     }
// }
int age(){
    int age;
    printf("Enter the age:");
    scanf("%d",&age);
    age>=18 ? printf("Can drive"):printf("Can not drive");

}
int main(){
    // smallestnum();
    age();
    return 0;
}