#include <stdio.h>
#include <string.h>


int main(){
    char password[100];
    printf("Enter your password:");
    scanf("%s",&password);

    char salt[]="123";
    char newpass[200];

    strcat(password,salt);

    puts(password);
}