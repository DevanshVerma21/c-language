#include <stdio.h>
#include <string.h>


int base(){
    char firstname[]={'D','e','v','a','n','s','h',' ','V','e','r','m','a','\0'};
    printf("%s\n",firstname);

    for(int i=0;i<strlen(firstname);i++){
        printf("%c\n",firstname[i]);
    }
printf("\n");
    for(int i = 0;firstname[i] != '\0';i++){
        printf("%c\n",firstname[i]);
    }
}

int inout(){
    char name[50];
    scanf("%s",&name);

    printf("Name is %s",name);

}

int manylines(){
    char str[100];
    // gets(str);
    fgets(str,100,stdin);
    puts(str);
}

int main(){
    // inout();
    manylines();
}