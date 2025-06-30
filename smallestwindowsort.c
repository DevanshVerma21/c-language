#include <stdio.h>

int windowsort(int arr[],int n){
    int arr1[n];

    for(int i = 0;i<n;i++){
        arr1[i] = arr[i]; 
    }

    for(int i = 0;i<n-1;i++){
        for(int j =0;j<n-i-1;j++){
            int temp = arr1[j];
            arr1[j] = arr1[j+1];
            arr1[j+1] = temp;
        }
    }

    int start = -1;
    int end = -1;
    for(int i =0;i<n;i++){
        if(arr1[i]!=arr[i]){
            if(start == -1)
            start = i;
            end = i;
        }
    }


    if (start == -1) 
    return 0;
    return end - start + 1;
}

int main(){
    int t;
    scanf("%d",&t);
    while(t--){
        int n;
        scanf("%d",&n);
        int arr[n];
        for(int i =0;i<n;i++){
            scanf("%d",arr[i]);
        }
        printf("%d\n",windowsort(arr,n));
    }
    return 0;
}