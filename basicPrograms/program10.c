// WAP to print the table of number input by the user;
#include <stdio.h>

int main() {
    int tableOf;
    printf("enter number you want table of: ");
    scanf("%d", &tableOf);

    for (int i=1; i<=10; i++) {
        /* 
        if (i>10) {
            break;
        }
        */
        printf("%d * %d = %d\n", tableOf, i, tableOf * i);
    }
}