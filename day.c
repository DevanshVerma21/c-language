// Write a C program to print the day of the week for left most digit of a number. A number can have only valid digits from 1 to 7 if the any one of the digit is other than 1 to 7 i.e. 0, 8 or 9 the display a message “Invalid number”.
// Display day of the week as per digit extracted (left most digit of the number) from a number

#include <stdio.h>

int main(){
    int num,d;
    scanf("%d",&num);

    while(num!=0){
        d=num % 10;
        if(d== 8||d==9||d==0){
            printf("Invalid number");
            break;
        }
        num/=10;
    }
    if(d==1){
        printf("Monday");
    }
    else if (d==2){
        printf("Tuesday");
    }
    else if (d==3){
        printf("Wednesday");
    }
    else if (d==4){
        printf("Thursday");
    }
    else if (d==5){
        printf("Friday");
    }
    else if (d==6){
        printf("Saturday");
    }
    else if (d==7){
        printf("Sunday");
    }
    
}