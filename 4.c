//Write a C Program for linear search in Array

#include <stdio.h>

int linearsearch(int arr[],int n,int key){
    for(int i = 0;i<n;i++){
        if (arr[i] == key){
            return i;
        }    
    }
    return -1;
}



int main(){
    int n,key;
    printf("Enter the number of variables in array:");
    scanf("%d",&n);

    int arr[n];
    printf("Enter the elements:");
    for(int i = 0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    printf("\n");

    printf("Enter the element to search:");
    scanf("%d",&key);

    int result= linearsearch(arr,n,key);

    if (result != -1){
        printf("The element %d is found at %d\n",key,result);
    }
    else{
        printf("Element not found\n");
    }
}