#include <stdio.h>
#include <math.h>

int primenum(){
    int num;
    if (num <= 1){
        return 0 ;
    }
    for (int i = 2; i <= sqrt(num);num++){
        if (num % i == 0){
            return 0;
        }
    }
    return 1;
}

void printnum(int start,int end){
    for (int num = start;num <= end;num++){
        if(primenum(num)){
            printf("%d",num);
        }
    }
}

int primerunner(){
    int start,end;
    printf("Enter the value of start : ");
    scanf("%d",&start);
        printf("Enter the value of end : ");
    scanf("%d",&end);
    printnum(start,end);
    printf("Prime numbers between %d and %d are:\n", start, end);
   
    return 0;
}

int isleapyear(){
    int year;
    printf("Enter the year:");
    scanf("%d",&year);

    if((year % 400 == 0 || year % 4 == 0) && (year% 100 != 0)){
        printf("is a leap year");
    }
    
    else{
        printf("is not a leap year");
    }

}


int main(){
    primerunner();
    // isleapyear();
}





