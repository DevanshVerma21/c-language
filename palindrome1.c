#include <stdio.h>

int palindrome(int num){
    int original = num,reversed = 0,remainder;
    while(num>0){
        remainder = num % 10;
        reversed = reversed * 10 + remainder;
        num/=10;
    }
    return (original == reversed);
}

int main(){
    int num;
    scanf("%d",&num);
    if(palindrome(num)){
        printf("Yes");
    }
    else{
        printf("no");
    }

}