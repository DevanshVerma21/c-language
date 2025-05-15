#include <stdio.h>
#include <string.h>

void slicing(char name[],int n,int m);

int main(){
    char name[100];
    printf("Enter the name:\n");
    fgets(name,100,stdin);

    slicing(name,2,5);

    // int n,m;
    // printf("Enter the value of n:\n");
    // scanf("%d",&n);

    // printf("Enter the value of m:\n");
    // scanf("%d",&m);

    // for(int i = 0;i<strlen(name);i++){
    //     if (i>=n-1 && i<=m-1){
    //         printf("%c",name[i]);
    //     }
    // }
}

void slicing(char name[],int n,int m){
    char newstr[100];
    int j = 0;

    for(int i = n;i<=m;i++,j++){
        newstr[j]=name[i];
    }
    newstr[j] = '\0';
    puts(newstr);
}
