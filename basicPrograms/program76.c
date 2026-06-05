// WAP to print pattern of stars by number of rows;
/// sample space; (number of rows -> 4):
/*
*
**
***
****
*/

#include <stdio.h>

int main() {
    int numOfRows;
    printf("enter number of rows: ");
    scanf("%d", &numOfRows);
    /*
    | nested loop:
    || iterating over i; till number of rows are matched (given by user input);
    ||| iterating again (j) for i number of times as per pattern;
    ||| therefore; 1 -> would print 1 (star) and 2nd iteration would print 2 (stars);
    */
    for (int i=1; i<=numOfRows; i++) {
        for (int j=1; j<=i; j++) {
            printf("*");
        }
        printf("\n");
    }
    return 0;
}