#include <stdio.h>

long long nfibnonumber( int n ){
    long long first=0,second=1,next;

    if (n == 1) return first;
    
    if (n == 2) return second;
    

    for(int i = 3; i <= n; i++){
        next = first + second;
        first = second;
        second = next;
    }
    return second;
}

int main(){
    int n;
    printf("Enter the position of number:");
    scanf("%d",&n);

    if(n<=0){
        printf("Please enter a number grater than 0\n");
    }
    else{
        printf("The %dth fibbonaci number is: %lld\n",n, nfibnonumber(n));
    }
}