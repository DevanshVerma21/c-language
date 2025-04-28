#include <stdio.h>

int main(){
    int arr[3][3];
    for(int i =0;i<3;i++){
        for(int j=0;j<3;j++){
            printf("Enter a[%d][%d]:",i,j);
            scanf("%d",&arr[i][j]);
        }

    printf("Printing the elements \n");
    for(int i = 0;i<3;i++){
        printf("\n");
        for(int j = 0;j<3;j++){
            printf("%d %d",arr[i][j]);
        }
    }
        
    }
}