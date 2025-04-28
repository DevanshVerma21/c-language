#include <stdio.h>

int main(){
    int arr[3][3]={{1,2,3},{4,5,6},{7,8,9}};
    int rows=3 ,col=3,sum=0;

    for(int i = 0;i<rows;i++){
        for(int j=0;j<col;j++){
            sum +=arr[i][j];
        }
    }
    printf("Sum:%d",sum);
}
