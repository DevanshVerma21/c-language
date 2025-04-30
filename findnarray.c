#include <stdio.h>

int countx(int arr[],int n,int x){
    int count = 0;
    for(int i = 0;i<n;i++){
        if(arr[i]==x){
            count++;
        }
    }
    return count;
}

int main(){
    int n;
    int x;
    printf("Enter the value of n: ");
    scanf("%d",&n);

    int arr[n];
    printf("Enter the elements of array:\n");
    for(int i =0;i<n;i++){
        scanf("%d",&arr[i]);
    }

    printf("Frequency number: ");
    scanf("%d",&x);

    int new = countx(arr,n,x);
    printf("%d",new);
}