#include <stdio.h>

struct Employee{
        char name[100];
        int EmployeeId;
        float Salary;
};

int main(){
    int n;
    scanf("%d",&n);
    struct Employee members[n];

    for(int i = 0;i<n;i++){
        scanf("%s",&members[i].name);
        scanf("%d",&members[i].EmployeeId);
        scanf("%d",&members[i].Salary);

    }

    printf("Employee Details\n");
    for(int i = 0;i<n;i++){
        printf("Employee Name: %s\nEmployeeId: %d\nEmployee Salary:%f ",members[i].name,members[i].EmployeeId,members[i].Salary);
    }

}