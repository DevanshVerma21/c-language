#include <stdio.h>
#include <string.h>

int copy(){
    char str1[]="Devansh";
    char str2[]="Verma";

    strcpy(str1,str2);
    puts(str1);
}

int cat(){
    char str1[]="Devansh";
    char str[]=" ";
    char str2[]="Verma";

    // strcat(str1,str,str2);
    puts(str1);
}

int compare(){
    char str1[]="Hello";
    char str2[]="HE";

    printf("%d\n",strcmp(str1,str2));
}
int getinput(){
    char str[100];
    char ch;
    int i=0;

        while(ch != '\n'){
        scanf("%c",&ch);
        str[i] = ch;
        i++;
    }
    str[i] = '\0';
    puts(str);
}
int main(){
    // cat();
    // compare();
    getinput();
}