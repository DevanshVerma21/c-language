#include <stdio.h>

void reverse(int arr[],int n){
    for(int i = 0 ;i<n/2;i++){
        int temp = arr[i];
        arr[i]= arr[n-i-1];
        arr[n-i-1]=temp;
    }
}

void printArray(int arr[],int n){
    printf("Reversed Array: ");
    for(int i =0;i<n;i++){
        printf("%d ", arr[i]);
    }
    printf("\n");
}

int main(){
    int n;
    printf("Enter the values of n: ");
    scanf("%d",&n);

    int arr[n];
    printf("Enter the elements of array: \n");
    for(int i = 0;i<n;i++){
        scanf("%d",&arr[i]);
    }

    reverse(arr,n);
    printArray(arr,n);
}