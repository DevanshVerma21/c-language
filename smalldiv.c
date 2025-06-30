// PROBLEM STATEMENT 3:
// Find the Smallest Divisor (Other than 1)
// Write a C program that takes a positive integer n as input and finds the smallest divisor of n greater than 1 using a loop.
// If n is a prime number (i.e., no divisors other than 1 and itself), print "Prime number."
// Otherwise, print the smallest divisor.
// INPUT:
// A single positive integer n (1 ≤ n ≤ 10^6)
// OUTPUT:
//  If n is prime, output: "Prime number."
//  Otherwise, output the smallest divisor of n greater than 1.
// SOLUTION:

#include <stdio.h>

int smallestdivisor(int n){
    for(int i = 2;i*i<=n;i++){
        if(n%i==0){
            return i;
        }
    }
    return n;
}

int main(){
    int n;
    scanf("%d",&n);

    if(n==1){
        printf("Prime number\n");
    }
    else{
        int divisor = smallestdivisor(n);

        if(divisor == n){
            printf("Prime number\n");
            
        }
        else{
            printf("%d\n",divisor);
        }
    }

}