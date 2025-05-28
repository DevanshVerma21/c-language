#include <stdio.h>
#include <string.h>

int countvowel(char name[100]){
    int count = 0;
    char vowels[]={'a','e','i','o','u'};

    for(int i = 0;i<strlen(name);i++){
        for(int j = 0;j<strlen(vowels);j++){
            if(name[i]==vowels[j]){
                count++;
            }
        }
    }
    printf("Count of Vowels: %d",count);
}

int main(){
    char name[100];
    fgets(name,100,stdin);
    countvowel(name);
}