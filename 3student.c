#include <stdio.h>
#include <string.h>

struct student{
    char name[100];
    int rollno;
    float cgpa;
};

int main(){
    struct student s1;
    printf("Enter for s1\nName\tRoll\tCGPA\n");
    if(fgets(s1.name,100,stdin)){
        s1.name[strcspn(s1.name,"\n")] = '\0';
    }
    scanf("%d",&s1.rollno);
    scanf("%f",&s1.cgpa);

    printf("Name:%s\n",s1.name);
    printf("Roll No:%d\n",s1.rollno);
    printf("CGPA:%f\n",s1.cgpa);

    struct student s2;
    printf("Enter for s2\nRoll\tName\tCGPA\n");
    scanf("%d\n",&s2.rollno);

    if(fgets(s2.name,100,stdin)){
        s2.name[strcspn(s2.name,"\n")] = '\0';
    }

    scanf("%f",&s2.cgpa);

    printf("Name:%s\n",s2.name);
    printf("Roll No:%d\n",s2.rollno);
    printf("CGPA:%f\n",s2.cgpa);

    struct student s3;
    printf("Enter for s3\nRoll\tCGPA\tName\n");
    scanf("%d\n",&s3.rollno);
    scanf("%f\n",&s3.cgpa);

    if(fgets(s3.name,100,stdin)){
        s3.name[strcspn(s3.name,"\n")] = '\0';
    }
    printf("Name:%s\n",s3.name);
    printf("Roll no:%d\n",s3.rollno);
    printf("CGPA:%f\n",s3.cgpa);

}