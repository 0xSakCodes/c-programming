// WAP to print reverse of the table for a number n;

#include <stdio.h>

int main() {
    int n;

    printf("enter a number: ");
    scanf("%d", &n);
    
    // main loop:
    for (int i = 10; i>=1; i--) {
        printf("%d * %d = %d\n", n, i, n * i);
    }
}