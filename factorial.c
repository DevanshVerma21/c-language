#include <stdio.h>

int factorial(int n){
    if(n==0){
        return 1;
    }
    if(n == 1){
        return 1;
    }
    if(n>=2){
        return n*factorial(n-1);
    }
}
int main(){
    int n;
    scanf("%d",&n);
    printf("%d ",factorial(n));
}