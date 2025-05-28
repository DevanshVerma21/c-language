#include <stdio.h>
#include <string.h>


struct student
{
    char name[100];
    int roll;
    float cgpa;
};

int main(){
    struct student s1;
    scanf("%d\n",&s1.roll);
    scanf("%f\n",&s1.cgpa);

    if (fgets(s1.name,100,stdin)){
        s1.name[strcspn(s1.name, "\n")] = '\0';
    }  

    printf("student name : %s\n",s1.name);
    printf("student roll no: %d\n",s1.roll);
    printf("student cgpa : %f\n",s1.cgpa);


}
