#include <stdio.h>
#include <string.h>

int main(){
    char name[100];
    printf("Enter your name: ");

    fgets(name,100,stdin);

    int count = 0;
    for(int i = 0;name[i] != '\0';i++){
        count++;
    }
    printf("Length of name is %d",count-1);
printf("\n");
    printf("Length of name is %d",strlen(name));

}