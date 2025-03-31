#include <stdio.h>

int main(){
    int adhaar[5];
    int array1[]={1,2,3};
    
    //input
    // int *ptr = &adhaar[0];
    for (int i = 0;i<5;i++){
        printf("%d index: ",i);
        scanf("%d",&adhaar[i]);
    }

    //output
    for (int i=0;i<5;i++){
        printf("%d index : %d\n",i, adhaar[i]);
    }
    // int length = sizeof(array1)/sizeof(array1[0]);
    // printf("%d\n",length);
    
    // for (int n = 0;n<3;n++){
    //     printf("%d ",array1[n]);
    // }
}