#include <stdio.h>

int compare(int a, int b);

int main(){
    int a,b;
    printf("Enter the value of a:");
    scanf("%d",&a);
    printf("Enter the value of b:");
    scanf("%d",&b);
    printf("Greatest is: %d",compare(a,b));
}

int compare(int a,int b){
    if (a>b){
        return a;
    }
    else if(a==b){
        return a;
    }
    else{
        return b;
    }
}