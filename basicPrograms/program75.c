// WAP to print pattern of number of rows & number of columns, in numerical order; (Number Square);
/// (05/06/2026) {0xSakCodes}

#include <stdio.h>

// user defined function declaration:
void printPattern(int num) {
    /* 
    | looping till number is reached.
    || for eg.3: 1->2->3; 
    */
    for (int i=1; i<=num; i++) {
        // since the pattern is square the number of rows needs to be exact same;
        for (int j=1; j<=num; j++) {
            printf("%d", j);
        }
        printf("\n");
    }
}


int main() {
    int pattern;
    printf("enter number for drawing pattern: ");
    scanf("%d", &pattern);

    printPattern(pattern);
    return 0;
}