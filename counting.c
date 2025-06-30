#include <stdio.h>
#include <string.h>


int count(char str[100]){
    int vowelcount = 0;
    int concount = 0;

    char vowel[] ={'a','e','i','o','u','A','E','I','O','U'};

    for(int i = 0;i<strlen(str);i++){
        int is_vowel = 0;
        for(int j = 0;j<strlen(vowel);j++){
            if(str[i]==vowel[j]){
                vowelcount++;
                is_vowel = 1;
                break;
            }    
        }
        if(!is_vowel){
        concount++;
    }
    }

    
    printf("%d\n",vowelcount-1);
    printf("%d\n",concount)-1;
}

int main(){
    char str[100];
    fgets(str,100,stdin);
    count(str);
}