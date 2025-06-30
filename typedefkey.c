#include <stdio.h>

typedef struct Devansh{
    char name[100];
    int age;
    int roll;

} dev;

int main(){
    dev s1;

    s1.age = 18;
    s1.roll = 31;

    printf("%d",s1.age);
}