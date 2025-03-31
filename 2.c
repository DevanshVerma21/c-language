//2.	Implement in C program to sort elements in an array in assesding order using bubble sort
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

void printarray(int arr[],int n){
    for(int i = 0;i<n;i++){
        printf("%d ", arr[i]);
    }
    printf("\n");
}

int  main(){
    int n;
    printf("Enter the number of elements: ");
    scanf("%d",&n);
    
    int arr[n];
    
    printf("Enter %d elements: ",n);
    for(int i = 0;i<n;i++){
        scanf("%d",&arr[i]);
    }

    bubblesort(arr,n);
    printf("Sorted array:");
    printarray(arr,n);

}