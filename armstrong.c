#include <stdio.h>
#include <math.h>

int isarmstrong(int num){
    int original = num;
    int sum = 0;
    int digits = (int)log10(num)+1;
    int remainder;
    
    int temp = num;
    while(temp>0){
        remainder = temp % 10;
        sum += (int)pow(remainder,digits);
        temp/=10;
    }

    return original==sum;
}

int main() {
    int num;
    
    printf("Enter a number: ");
    scanf("%d", &num);
    
    if (isArmstrong(num)) {
        printf("%d is an Armstrong number.\n", num);
    } else {
        printf("%d is not an Armstrong number.\n", num);
    }
    
    return 0;
}



