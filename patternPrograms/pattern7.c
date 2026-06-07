// WAP To Print a pattern:
/*

| *    *
|  *  *
|    *
|  *  *
| *    *

*/
/// (07/06/2026) {0xSakCodes}

#include <stdio.h>

int main() {
    int rows;
    printf("enter number of rows: ");
    scanf("%d", &rows);
    if (rows%2 == 0 || rows == 1) {
        printf("number of rows needs to be odd :)");
        return 1;
    }
    for (int i=1; i<=rows; i++) {
        for (int j=1; j<=rows; j++) {
            if (i==j || i+j==rows+1) {
                printf("*");
            } else {
                printf(" ");
            }
        }
        printf("\n");
    }
}