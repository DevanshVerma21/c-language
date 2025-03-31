//write a c program to print only unique elements in an array 
#include <stdio.h>

void finduniqueelement(int arr[],int n){
    printf("Unique Elements: ");
    for(int i =0;i<n;i++){
        int count =0;
        for(int j = 0;j<n;j++){
            if (arr[i]==arr[j]){
                count++;
            }
        }
        if (count == 1){
            printf("%d ",arr[i]);
        }
    }
    printf("\n");
}



int main(){
    int n;
    printf("Enter the elements in array:");
    scanf("%d",&n);
    
    int arr[n];
    printf("Enter the values of elements:\n");
    for(int i = 0;i<n;i++){
        scanf("%d",&arr[i]);
    }

    finduniqueelement(arr,n);

}