#include <stdio.h>

int main(){
    int marks[2][3];

    marks[0][0]=90;
    marks[0][1]=91;
    marks[0][2]=93;

    marks[1][0]=95;
    marks[1][1]=92;
    marks[1][2]=99;

    printf("%d",marks[0][0]);

    return 0;
}