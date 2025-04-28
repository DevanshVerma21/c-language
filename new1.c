#include <stdio.h>

// int main(){
//     float m1,m2,m3,m4,m5,total,percentage;
//     printf("Enter marks1\n");
//     scanf("%f",&m1);
//     printf("Enter marks2\n");
//     scanf("%f",&m2);
//     printf("Enter marks3\n");
//     scanf("%f",&m3);
//     printf("Enter marks4\n");
//     scanf("%f",&m4);
//     printf("Enter marks5\n");
//     scanf("%f",&m5);
//     total = m1+m2+m3+m4+m5;
//     printf("Total marks:%f\n",total);
//     percentage=(total/5);
//     printf("Percentage:%f\n",percentage);
// }

int main()
{
    float m1,m2,m3,m4,m5,total,percentage;
printf("\n ENTER MARKS OF ENGLISH:");
scanf("%f" ,&m1);
printf("\n ENTER MARKS OF MATHS:");
scanf("%f" ,&m2);
printf("\n ENTER MARKS OF HINDI:");
scanf("%f" ,&m3);
printf("\n ENTER MARKS OF SCIENCE:");
scanf("%f" ,&m4);
printf("\n ENTER MARKS OF SST");
scanf("%f" ,&m5);
total=m1+m2+m3+m4+m5;
printf("\n TOTAL MARKS OBTAINED=%2f" , total);
percentage=(total/500.00)*100.00;
printf("\n PERCENTAGE=%2f" ,percentage);

}
