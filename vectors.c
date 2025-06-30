#include <stdio.h>

struct vector {
    int x;
    int y;
};

void calcsum(struct vector s1, struct vector s2, struct vector sum);

int main(){
    struct vector s1 ={5,10};
    struct vector s2 ={4,12};
    struct vector sum ={0};
    calcsum(s1,s2,sum);
}

void calcsum(struct vector s1, struct vector s2, struct vector sum){
    sum.x = s1.x + s2.x;
    sum.y = s1.y + s2.y;
    printf("%d %d",sum.x,sum.y);
}
