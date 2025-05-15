#include <stdio.h>
#include <string.h>

int main(){
    printf("Enter the string: ");
    char str[100];
    fgets(str,100,stdin);

    for(int i = 0;i<strlen(str);i++){
        if (str[i]=='d'){
            str[i] = 'D';
        }
    }

    puts(str);

}