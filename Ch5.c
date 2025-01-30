#include <stdio.h>
//function declaration
void printHello();

//function definition
void printHello() {
    printf("Hello");
}

//2
void sayhello();
void saygoodbye();


void sayhello(){
    printf("Hello\n");
}
void saygoodbye(){
    printf("GoodBye\n");
}

//3

void frenchuser();
void enguser();

void enguser(){
    printf("Hello");
}

void frenchuser(){
    printf("bonjour");
}





//function call
int main(){
    // printHello();
    // saygoodbye();
    // sayhello();
char country,India,French;
printf("Enter the Country:");
scanf("%c",&country);
if (country == India){
    enguser();
}
else if (country == French){
    frenchuser();
    }

    return 0;
}
