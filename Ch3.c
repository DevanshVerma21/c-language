#include <stdio.h>
#include <math.h>

int forloops(){
        for(int i=0; i<=10; i++)
           { 
            printf("%d\n",i);
           }
}
        
        
int incre(){

      int i = 1;
        // printf("%d \n",i++); //use then increase
        // printf("%d\n",i); 

        printf("%d \n",++i); // increase then use 
        printf("%d\n",i); 

}
int decre(){

      int i = 1;
        printf("%d \n",i--); //use then decrease
        printf("%d\n",i); 

        // printf("%d \n",--i); // increase then use 
        // printf("%d\n",i); 

}

int whileloops(){
    int i = 1;
    while(i<=5){
        printf("Hello %d\n",i);
        i = i + 1;
    }
}

int series(){
    int n;
    printf("Enter the value of n : ");
    scanf("%d",&n);
    for (int i=0;i<=n;i=i+1){
        printf("%d\n",i);
    }
    int i = 0;
    while(i<=n){
        printf("%d\n",i);
        i = i +1 ;
    }


}
int dowhileloop(){
    int n,i;
    i = 1;
    printf("Enter the value of n : ");
    scanf("%d",&n);
    do {
        printf("%d\n",i);
        i=i+1;
    } while (i<=n);
    

}
int sumofn(){
    int n;
    printf("Enter the value of n : ");
    scanf("%d",&n);
    int sum = 0;
    // for(int i = 0;i<=n;i++){
    //     sum = sum + i;
    // }

    int i = 0;
    while (i<=n)
    {
        sum = sum + i;
        i++;
        }
    for (int i=n;i>=1;i--){
        printf("%d\n",i);


    }
    printf("The sum is :%d ",sum);
}

int multiply(){
    int n,i;
    printf("Enter the multiplier :");
    scanf("%d",&n);
    for (int i = 0;i<=10;i= i + 1){
        printf("%d\n",n*i);
    }

}

int table(){
    int n,i;
    printf("Enter the multiplier :");
    scanf("%d",&n);
    for (i=0;i<=10;i++){
        printf("%d\n",n*i);
    }
}

int pattern(){
    int i,j,n ;
    printf("Enter the value of n :");
    scanf("%d",&n);

    for (i = 0 ; i <= n ; i++) {

        for(j = 1 ; j <= i ; j++) {
            printf("%d",j);
        }
        printf("\n");
    }



}

int breakstatement(){
    for (int i=0;i <= 5;i++){
        if (i == 3){
            break;
        }
        printf("%d\n",i);
    }
    printf("End");

}

int looptillodd(){
    int n ;
    do
    {
        /* code */
        printf("Enter the number:");
        scanf("%d",&n);
        printf("%d\n",n);
        if (n%2!=0){
            break;

        }
    } while ();
    printf("Terminating");
    return 0 ;
    

}

int main(){
    // forloops();
    // incre();
    // decre();
    // whileloops();
    // series();
    // dowhileloop();
    // sumofn();
    // multiply();
    // table();
    // pattern();
    breakstatement();
}