#include  <stdio.h>

int marks(){
    int arr[3];

    printf("Enter the marks1: ");
    scanf("%d",&arr[0]);

    printf("Enter the marks2: ");
    scanf("%d",&arr[1]);

    printf("Enter the marks3: ");
    scanf("%d",&arr[2]);

    printf("The marks are : %d %d %d ",arr[0],arr[1],arr[2]);

}

int gst(){
    float price[3];
    printf("Enter 3 prices:\n");
    scanf("%f",&price[0]);
    scanf("%f",&price[1]);
    scanf("%f",&price[2]);

    printf("Total price 1 : %f\n", price[0]+(price[0]*0.18));
    printf("Total price 2 : %f\n", price[1]+(price[1]*0.18));
    printf("Total price 3 : %f\n", price[2]+(price[2]*0.18));
    return 0;
}



int main(){
    // gst();
}

