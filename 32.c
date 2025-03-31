//WAP in C to print prime numbers only from an array
#include <stdio.h>
int isprime(int num){
    if(num<=1){
        return 0;
    }
    for(int i = 2 ; i*i<=num;i++){
        if(num % i == 0){
            return 0;
        }
    }
    return 1;
}
int main(){
    int n;
    printf("Enter the values of n:");
    scanf("%d",&n);

    int arr[n];
    printf("values:\n");
    for(int i =0;i<n;i++){
        scanf("%d",&arr[i]);
    }

    printf("Prime Values:\n");
    for(int i =0;i<n;i++){
        if (isprime(arr[i])){
            printf("%d ",arr[i]);
        }
    }
    printf("\n");
}