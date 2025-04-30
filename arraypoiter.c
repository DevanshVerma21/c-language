#include <stdio.h>

int agepointer(){
    int age = 22;
    int *ptr = &age;
    printf("Ptr = %u\n", ptr);
    ptr++;
    printf("Ptr = %u\n", ptr);
    ptr--;
    printf("Ptr = %u\n", ptr);
    return 0;
}

int pricepointer(){
    float price = 20.00;
    float *ptr = &price;
    printf("Price ptr = %u\n",ptr);
    ptr++;
    printf("Price ptr = %u\n",ptr);
    ptr--;
    printf("Price ptr = %u\n",ptr);
    return 0;    
}

int charpointer(){
    char star = '*';
    char *ptr = &star;
    printf("char ptr = %u\n",ptr);
    ptr++;
    printf("char ptr = %u\n",ptr);
    ptr--;
    printf("char ptr = %u\n",ptr);
    return 0; 

}

int compaarepointer(){
    int age = 22;
    int _age = 24;
    int *ptr = &age;
    int*_ptr = &_age;

    printf("%u\n%u\n diferrence = %u\n",ptr ,_ptr,ptr-_ptr);
    _ptr = &age;

    printf("Comparison = %u\n",ptr == _ptr);

}


int arraypoint(){
    int adhaar[5];

    //input
    int *ptr = &adhaar[0];
    for(int i = 0;i<5;i++){
        printf("%d index : ",i);
        scanf("%d", &adhaar[i]);
    }

    //output
    for(int i = 0;i<5;i++){
        printf("%d index = %d\n", i, adhaar[i]);
        
    }
    return 0;
}

void printNumbers(int arr[],int n);

int main(){
    int arr[] = {1,2,3,4,5,6};
    printNumbers(arr,6);
}
void printNumbers(int arr[],int n){
    for(int i =0;i<n;i++){
        printf("%d \t", arr[i]);
    }
    printf("\n");

}





// int main(){
//     // agepointer();
//     // pricepointer();
//     // charpointer(); 
//     // compaarepointer();
//     // arraypoint();
// }
