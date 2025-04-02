#include <stdio.h>

// Function to check if a number is palindrome
int isPalindrome(int num){
    int original = num,reversed = 0,remainder;
    while(num>0){
        remainder = num % 10;
        reversed = reversed * 10 + remainder;
        num/=10;
    }
    return (original==reversed);

}

int main() {
    int num;
    
    printf("Enter a number: ");
    scanf("%d", &num);
    
    if (isPalindrome(num)) {
        printf("%d is a palindrome.\n", num);
    } else {
        printf("%d is not a palindrome.\n", num);
    }
    
    return 0;
}
