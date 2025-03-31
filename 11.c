//Write a C Program to REVERSE THE ARRAY ELEMENTS

#include <stdio.h>

void reverse(int arr[],int n){
    int left = 0;
    int right = n-1;
    //swap
    while(left<right){
        int temp = arr[left];
        arr[left] = arr[right];
        arr[right] = temp;
        left++;
        right--;
    }
}


int main(){
    int n;
    printf("Enter the value of n:");
    scanf("%d",&n);


    int arr[n];
    printf("Enter the elements of array:\n");
    for (int i = 0;i<n;i++){
        scanf("%d",&arr[i]);
    }

    reverse(arr,n);

    printf("Reversed Array:\n");
    for (int i = 0;i<n;i++){
        printf("%d ",arr[i]);
    }
    printf("\n");



}