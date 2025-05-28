#include <stdio.h>
#include <string.h>

int main(){
    char name[100];
    printf("Enter the name:");

    fgets(name,100,stdin);
    char ch;
    printf("Enter the character:");
    scanf("%c",&ch);

    for(int i = 0;i<strlen(name);i++){
        if (name[i]==ch){
            printf("Found at %d index\n",i);
        }
    }
}