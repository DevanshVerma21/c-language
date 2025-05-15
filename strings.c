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

int stringpointer(){
    char *canchange= "Hello World";
    puts(canchange);
    
    canchange = "Hello";
    puts(canchange);
} 

int basic(){
    char name[] = {'D','e','v','\0'};
    char fullname[]="Devansh Verma";
    printf("%s\n",name);
    printf("%s\n",fullname);
    printf("\n");

    for(int i = 0; fullname[i]!='\0';i++){
        printf("%c\n",fullname[i]);
    }
    printf("\n");

    for(int i = 0;i<strlen(fullname);i++){
        printf("%c",fullname[i]);
    }

}

int input(){
    char meraname[100];
    printf("enter your name:");
    scanf("%s",&meraname);
    printf("%s\n",meraname);

    for(int i = 0;i<strlen(meraname);i++){
            printf("%c\n",meraname[i]);
        
    }
}




int main(){
    // inout();
    // manylines();
    // stringpointer();
    // basic();
    // base();
    input();
}