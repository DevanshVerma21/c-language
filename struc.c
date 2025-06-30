#include <stdio.h>
#include <string.h>


struct student
{
    char name[100];
    int roll;
    float cgpa;
};

void printinfo(struct student s1);

int main(){
    // struct student s1;
    // scanf("%d\n",&s1.roll);
    // scanf("%f\n",&s1.cgpa);

    // if (fgets(s1.name,100,stdin)){
    //     s1.name[strcspn(s1.name, "\n")] = '\0';
    // }  

    // printf("student name : %s\n",s1.name);
    // printf("student roll no: %d\n",s1.roll);
    // printf("student cgpa : %f\n",s1.cgpa);

    // struct student cse[100];
    // strcpy(cse[0].name,"Devansh");
    // cse[0].roll = 1031;
    // cse[0].cgpa = 10;

    // printf("%s\n",cse[0].name);
    // printf("%d\n",cse[0].roll);
    // printf("%f\n",cse[0].cgpa);

    struct student s1 = {"Devansh",31,10};
    printinfo(s1);
    // struct student *ptr;
    // ptr = &s1;

    // printf("Student roll no:%d\n",s1.roll);

    // printf("Student roll no:%d\n",(*ptr).roll);


    // printf("%s\n",ptr->name);
    // printf("%d\n",ptr->roll);
    // printf("%f\n",ptr->cgpa);

}

void printinfo(struct student s1){
    printf("%s\n",s1.name);
    printf("%d\n",s1.roll);
    printf("%f\n",s1.cgpa);
        s1.roll = 32;


}
