#include <stdio.h>

void insertelement(int arr[],int n,int x){
    arr[n] = x;
}

int main(){
    int n;
    printf("Enter n: ");
    scanf("%d",&n);

    int arr[n+1];
    printf("Enter the values of array:\n");
    for(int i = 0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    printf("\n");

    int x;
    printf("Enter the element to append: ");
    scanf("%d",&x);


    insertelement(arr,n,x);
    printf("The appended values of array:\n");
    for(int i = 0;i<n+1;i++){
        printf("%d\t",arr[i]);
    }
    printf("\n");

}