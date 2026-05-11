// WAP to print the numbers from 0 to n, (n is user input):
/// with for loop & while loop both;

#include <stdio.h>

int main() {
    int n;

    printf("enter a number: ");
    scanf("%d", &n);

    int i = 0;
    /*
    for (i; i <= n;i++) {
        printf("%d \n", i);
    }
    */
   // using while loop:
   while (i <= n) {
    printf("%d \n", i);
    i++;
   }
}