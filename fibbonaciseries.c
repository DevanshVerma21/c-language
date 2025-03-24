#include <stdio.h>

void fibonaci(int n){
    long long first=0,second=1,next;
    printf("%lld\n",first);
    printf("%lld\n",second);

    for (int i = 3;i<=n;i++){
        next = first + second;
        printf("%lld\n",next);
        first = second;
        second= next;
    }
}

int main(int n){
    printf("Enter the value of n:");
    scanf("%d",&n);
    if (n<2){
        printf("Enter a value grater than 2");
    }
    else{
        fibonaci(n);
    }
}