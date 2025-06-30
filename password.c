#include <stdio.h>
#include <math.h>

int main(){
    int n = 5;
    int arr[n];

    for(int i = 0;i<n;i++){
        scanf("%d",&arr[i]);
    }

    int diffsum = 0;

    for(int i = 0;i<n;i++){
        int diff = arr[i+1] - arr[i];
        if(diff<0){
            diff = -diff;
        }
        diffsum += diff;
    }

    int temp = diffsum;
    int password =0;
    while(temp>0){
        int digit = temp % 10;
        password += digit * digit * digit;
        temp /= 10;

    } 

        printf("Generated Password: %d\n", password);

}