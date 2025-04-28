#include <stdio.h>

int main() {
    int n, sci, maths, python;
    printf("Enter the number of students:\n");
    scanf("%d", &n);

    for (int j = 1; j <= n; j++) { 
        printf("Enter marks for student %d (Science, Maths, Python):\n", j);
        scanf("%d %d %d", &sci, &maths, &python);
        int perc = (sci + maths + python) / 3; 
        printf("Percentage of student %d: %d%%\n", j, perc); 
    }

    return 0;
}

