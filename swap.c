#include <stdio.h>

// int main(){
    // int a;
    // int b;
    // printf("Enter the value of a : ");
    // scanf("%d",&a);
    // printf("Enter the value of b : ");
    // scanf("%d",&b);
    // a = b;
    // b = a;
    // printf("A:%d B:%d",a,b);
// }

void swap(int a, int b);
void _swap(int *a,int *b);

int main(){
    int x = 3,y = 5;
    _swap(&x,&y);
    printf("X = %d & Y = %d\n",x,y);
    return 0;
}


//call by reference
void _swap(int *a,int *b){
    int t = *a;
    *a = *b;
    *b = t;

}















