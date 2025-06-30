#include <stdio.h>

int gcd(int a,int b){
    while(b!=0){
        int temp = b;
        b = a % b;
        a = temp;

    }
    return a;
}

int lcm (int a, int b){
    return (a*b)/gcd(a,b);
}

int main(){
    int num1;
    int num2;
    scanf("%d",&num1);
    scanf("%d",&num2);

    printf("%d",lcm(num1,num2));
}