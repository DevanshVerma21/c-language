//write a c program to find maximum and minimum no of elements within an array 

#include <stdio.h>

int main(){
    int n;
    printf("Enter the value of n:");
    scanf("%d",&n);

    int arr[n];
    printf("Enter the elements of array:\n");
    for(int i = 0;i<n;i++){
        scanf("%d",&arr[i]);
    }

    int max = arr[0];
    int min = arr[0];

    for(int i = 1;i<n;i++){
        if(arr[i]>max){
            max = arr[i];
        }
        if(arr[i]<min){
            min = arr[i];
        }
    }

    printf("Max element: %d\n",max);
    printf("Min element: %d\n",min);

}
