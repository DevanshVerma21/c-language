#include <stdio.h>
int main(){
//     int age = 22;
//     int *ptr = &age;
//     int **pptr = &ptr;
    
// //address
//     printf("%u\n",&age);
//     printf("%u\n",ptr);
//     printf("%u\n",&ptr);

// //value
//     printf("%d\n",age);
//     printf("%d\n",*ptr);
//     printf("%d\n",*(&age));

//     printf("%d\n",&pptr);

    int i = 6;
    int *ptr = &i;
    int **pptr = &ptr;

    printf("%d\n",**pptr);

}
