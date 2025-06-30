#include <stdio.h>
#include <string.h>

int main(){
    char str1[100],str2[100];

    if(fgets(str1,100,stdin)){
        str1[strcspn(str1,"\n")] = '\0';
    }
    if(fgets(str2,100,stdin)){
        str2[strcspn(str2,"\n")] = '\0';
    }

    strcat(str1,str2);
    printf("%s",str1);

}