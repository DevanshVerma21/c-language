#include <stdio.h>

int countodd(int arr[],int n);

int countodd(int arr[],int n){
    int count = 0;
    for(int i = 0;i<n;i++){
        if (arr[i]%2!=0){
            printf("Odd elements are : %d\n",arr[i]);
            count++;
        }
    }
    return count;
}


int main(){
    int n,count;
    printf("Enter the value of n: ");
    scanf("%d",&n);

    int arr[n];

    printf("Enter the numbers:\n");
    for(int i = 0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    count = countodd(arr,n);
    printf("Odd count: %d",count);
}
