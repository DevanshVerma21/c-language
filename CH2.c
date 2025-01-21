#include <stdio.h>

int switchcases(){
    int date = 2;
    int year;
    printf("Enter the year:");
    scanf("%d",&year);

    int day; //1-mon 2-tues 3-wed
    printf("Enter the day:");
    scanf("%d",&day);
    switch (day)

    {
    case 1 : 
        printf("monday \n");
        if(date==2){
            printf("%d\n",date);
            if(year==date){
                printf("wao");

            }

        }
            break;
    case 2 : 
        printf("tuesday \n");
            break;
    case 3 : 
        printf("wedday \n");
            break;
    case 4 : 
        printf("thursday \n");
            break;
    case 5 : 
        printf("friday \n");
            break;
    case 6 : 
        printf("satday \n");
            break;
    case 7 : 
        printf("sunday \n");
            break;
    default:
    printf("not a valid day");
        break;
    }
}
int posorneg(){
    int number;
    printf("Enter the number:");
    scanf("%d",&number);
    if(number >= 0){
        printf("Positive\n");
        if(number%2==0){
            printf("Even");
        } else {
            printf("odd");
        }
    } else {
        printf("negative");
        }
    }

int studentrepo(){
    int marks;
    printf("Enter the student marks:");
    scanf("%d",&marks);
    100 >= marks > 30 ? printf("Pass"):printf("Fail");
}
int marks(){
    int marks;
    printf("Enter the marks:");
    scanf("%d",&marks);
    if (marks>=90 && marks<=100){
        printf("A+");
    }
    else if (marks<90 && marks>=70)   
     {
        printf("A");
    }
    else if (marks<70 && marks>=30)   
     {
        printf("B");
    }
    else if (marks<30)   
     {
        printf("C");
    }

}
int charsmall(){
    char ch;
    printf("Enter character : ");
    scanf("%c",&ch);

    if (ch >= 'A' && ch <= 'Z'){
        printf("upper case\n");

    }
    else if (ch>= 'a' && ch <= 'z'){
        printf("lower case\n");
    }
    else {
        printf("Not an english letter\n");
    }
}
int main(){
    // switchcases();
    // posorneg();
    // studentrepo();
    // marks();
    // charsmall();
    return 0;
}




