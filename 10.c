//Write a program in C to copy the elements of one array into another array

#include <stdio.h>

int main(){
    int n;
    printf("Enter the value of n:");
    scanf("%d",&n);

    int arr1[n],arr2[n];

    printf("Enter the elements in array1: ");
    for(int i =0;i<n;i++){
        scanf("%d",&arr1[i]);
    }

    for(int i = 0;i<n;i++){
        arr2[i] =  arr1[i];
    }

    printf("The copied array is:");
    for(int i = 0;i<n;i++){
        printf("%d ",arr2[i]);
    }
    printf("\n");
}