#include <stdio.h>
int factorial()
{
    int n;
    scanf("%d",&n);
    if(n==0){
        return 1;
    }
    else{
    int factorial = 1;
    for (int i =1;i<=n;i++){
        factorial *= i;
    }
    printf("%d",factorial);
}
}

int tablerev(){
    int n;
    scanf("%d",&n);
    for(int i = 10;i>=0;i--){
        int total = n * i;
        printf("%d x %d = %d\n",n,i,total);
    }
}

int sum5to50(){
    int n;
    int sum= 0;
    for(int i = 5;i<=50;i++){
        sum += i;
    }
    printf("%d",sum);
}
int main() {
    // factorial();
    // tablerev();
    sum5to50();
    return 0;
}
