#include <stdio.h>

int main(){
    int n;
    printf("Enter the value of n:");
    scanf("%d",&n);

    int fibarr[n];
    fibarr[0]=0;
    printf("%d\t",fibarr[0]);
    fibarr[1]=1;
    printf("%d\t",fibarr[1]);


    for(int i = 2;i<n;i++){
        fibarr[i] = fibarr[i-1]+fibarr[i-2];
        printf("%d\t",fibarr[i]);
    }
    printf("\n");

}