#include <stdio.h>

long long fibonumber(int n){
    long long first=0,second=1,next;

    if (n==1) return 0;
    if (n==2) return 1;

    for (int i =3;i<=n;i++){
        next = first+second;
        first =second;
        second= next;
    }
    return next;
}

int main(int n){
    printf("Enter the position of n:");
    scanf("%d",&n);

    if (n<0){
        printf("Please enter a value greater than 0");
    }
    else{
        printf("The %dth fibonaci number is: %lld",n,fibonumber(n));
    }
}

