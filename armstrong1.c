#include <stdio.h>
#include <math.h>

int isarmstrong(int num) {
    if (num == 0) {
        return 1;
    }

    int original = num;
    int sum = 0;
    int digits = (int)log10(num) + 1;

    int temp = num;
    while (temp > 0) {
        int remainder = temp % 10;
        sum += (int)pow(remainder, digits);
        temp /= 10;
    }

    return (original == sum);
}

int main() {
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);

    if (isarmstrong(num)) {
        printf("Armstrong Number\n");
    } else {
        printf("Not an Armstrong Number\n");
    }

    return 0;
}
