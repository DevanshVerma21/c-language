#include <stdio.h>
#include <math.h>

int isarmstrong(int num){
    if(num==0){
        return 1;
    }
    
    int original = num;
    int remainder;
    int digits = (int)log10(num)+1;
    int sum = 0;

    int temp = num;
    while(temp>0){
        remainder = temp % 10;
        sum += (int)pow(remainder,digits);
        temp /= 10;
    }

    return (original==sum);
}

int main(){
    int start;
    int end;

    scanf("%d",&start);
    scanf("%d",&end);

    for(int num = start;num<= end;num++){
        if(isarmstrong(num)){
            printf("%d\n",num);
        }
    }
    return 0;

}