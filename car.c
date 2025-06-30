#include <stdio.h>

int main(){
    int n;
    scanf("%d",&n);


    int hours[n];
    int fee[n];

    for(int i = 0 ;i<n;i++){
        scanf("%d",&hours[i]);
    }

    for(int i = 0 ;i<n;i++){
        if(hours[i]<=3){
            fee[i]=0;
        }
        else{
            fee[i] = (hours[i]-3) *50;
        }
    }

    printf("Summary\n");
    for(int i = 0;i<n;i++){
        printf("Fee: %d\n",fee[i]);
    }



}