#include <stdio.h>

int main(){
    int n;
    scanf("%d",&n);

    int arr[n],freq[n];
    for(int i = 0;i<n;i++){
        scanf("%d",&arr[i]);
        freq[i] = -1;
    }

    for(int i = 0;i<n;i++){
        if(freq[i]!=0){
            int count = 1;
            for(int j = i+1;j<n;j++){
                if(arr[i]==arr[j]){
                    count++;
                    freq[j] = 0;
                }
            }
            freq[i] = count;
        }
    }

    for(int i = 0;i<n;i++){
        if(freq[i]!=0){
            printf("%d %d",arr[i],freq[i]);
        }
    }
}