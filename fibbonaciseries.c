#include <stdio.h>

void fibbonaci(int n){
    long long first = 0,second=1,next;

    printf("%lld\n", first); 
    printf("%lld\n",second);

    for(int i = 3;i <= n; i++){
        next = first + second;
        printf("%lld\n", next);
        first = second;
        second = next;

    }
}

int main(){
    int n;
    printf("Enter the number of terms in series:");
    scanf("%d",&n);
    if(n>=2){
        fibbonaci(n);
    }
    else{
        printf("Enter a number greater than 2.");
    }
    return 0;
}