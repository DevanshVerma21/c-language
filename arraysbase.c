#include <stdio.h>

int pricegst(){
    float price[3];
    printf("Enter the prices:\n");
    scanf("%f",&price[0]);
    scanf("%f",&price[1]);
    scanf("%f",&price[2]);
    printf("Price after GST:\nFirst : %f\nSecond : %f\nThird : %f",(price[0]+(0.18*price[0])),(price[1]+(0.18*price[1])),(price[2]+(0.18*price[2])));

}

int marks(){
    int marks[100]={97,87,92};
    // scanf("%d",&marks[0]);
    // scanf("%d",&marks[1]);
    // scanf("%d",&marks[2]);
    printf("Physics:%d\nChemistry:%d\nMaths:%d",marks[0],marks[1],marks[2]);
}

int ptpint(){
    int age= 22;
    int *ptr = &age;
    printf("%u\n",ptr);
    ptr++;
    printf("%u\n",ptr);
    ptr--;
    printf("%u",ptr);
}

int ptpfloat(){
    float age= 22.21;
    float *ptr = &age;
    printf("%u\n",ptr);
    ptr++;
    printf("%u\n",ptr);
    ptr--;
    printf("%u",ptr);
}

int ptpchar(){
    char age= '*';
    char *ptr = &age;
    printf("%u\n",ptr);
    ptr++;
    printf("%u\n",ptr);
    ptr--;
    printf("%u",ptr);

}
int main(){
    // pricegst();
    // marks();
    // ptpint();
    // ptpfloat();
    ptpchar();
}
