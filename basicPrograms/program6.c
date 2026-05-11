// WAP to check if the given number is a natural number: (starts from 1);

#include <stdio.h>

int main() {
    int number;

    printf("enter a number: ");
    scanf("%d", &number);

    if(number>1) printf("it is a natural number. :)\n");
    else printf("it is not a natural number. :(\n");

    int i = 1;
    // i++ -> post increment (use the value then increase);
    // ++i -> pre increment (increase the value then use);
    for (i; i <= number; i++) {
        printf("%d \n", i);
    }

    int d = 1;
    while (d <= 5) {
        printf("%d \n", d++);
    }

    int f = 1;
    while (f <= 5) {
        printf("\n%d\n", f);
        f++;
    }
    
};