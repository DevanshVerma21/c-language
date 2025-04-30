#include <stdio.h>

void bubblesort(int arr[],int n){
    for(int i = 0;i<n-1;i++){
        for(int j = 0;j<n-i-1;j++){
            if (arr[j]>arr[j+1]){
                int temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }
}

int printLargest(int arr[],int n){
    bubblesort(arr,n);
    printf("Largest element: %d",arr[n-1]);
}

int main(){
    int n;
    printf("Enter n: ");
    scanf("%d",&n);

    int arr[n];
    printf("Enter the values of array:\n");
    for(int i = 0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    printf("\n");

    printLargest(arr,n);
}