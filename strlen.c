#include <stdio.h>
#include <string.h>

int main(){
    char name[100];
    fgets(name,100,stdin);
    printf("%d\n",strlen(name)-1);
    int count = 0;
    for(int i =0;name[i]!='\0';i++){
        count++;
    }
    printf("%d",count-1);
}

