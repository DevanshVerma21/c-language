#include <stdio.h>

int search(int arr[],int n,int target){
    int low = 0;
    int high = n-1;

    while(low<=high){
        int mid = (low + high)/2;

        if (arr[mid]==target){
            return mid;
        }

        if(arr[low]<=arr[mid]){
            if(target>=arr[low] && target < arr[mid]){
                high = mid - 1;
            }
            else{
                low = mid + 1;
            }
        }

        else{
            if(target>arr[mid]&& target<=arr[high]){
                low = mid + 1;
            }
            else{
                high = mid -1 ;
            }
        }
    }  
    return -1;
}


int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i = 0;i<n;i++){
        scanf("%d",&arr[i]);
    }

    int target;
    scanf("%d",&target);

    printf("%d",search(arr,n,target));
}