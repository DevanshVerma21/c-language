//Write a function that merges two sorted arrays into a single sorted array without having extra space and prints as an output result.
#include <stdio.h>
void bubblesort(int arr[],int n){
    for(int i = 0;i<n-1;i++){
        for(int j = 0;j<n-i-1;j++){
            if(arr[j]>arr[j+1]){
                int temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }
}

void mergedarrays(int arr1[],int size1,int arr2[],int size2){
    for(int i = 0;i<size2;i++){
        arr1[size1 + i] = arr2[i];
    }

    int newsize = size1+size2;
    bubblesort(arr1,newsize);

    printf("Merged and sorted array:");
    for(int i = 0;i<newsize;i++){
        printf("%d ",arr1[i]);
    }
    printf("\n");
}


int  main(){
    int size1,size2;

    printf("Enter size1:");
    scanf("%d",&size1);

    printf("Enter size2:");
    scanf("%d",&size2);

    int arr1[size1+size2];
    int arr2[size2];

    printf("Enter arr1:");
    for(int i = 0 ; i<size1;i++){
        scanf("%d ",&arr1[i]);

    }

    printf("Enter arr2:");
    for(int i = 0 ; i<size2;i++){
        scanf("%d ",&arr2[i]);
    }

    mergedarrays(arr1,size1,arr2,size2);

}