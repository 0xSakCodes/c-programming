// WAP to print the given pattern (rows * columns);
/* sample space (4, 6):
| ******
| *    *
| *    *
| ******
*/
/// (06/06/2026) {0xSakCodes}

#include <stdio.h>


int main() {
    int rows, columns;
    printf("enter number of rows: ");
    scanf("%d", &rows);
    printf("enter number of columns: ");
    scanf("%d", &columns);

    if (rows == 0 || columns == 0) return 1;

    for (int i=1; i<=rows; i++) {
        // 1..2..3..4.
        for(int j=1; j<=columns; j++) {
            if (i==1 || i==rows) {
                printf("*");
            } else {
                if(j==1 || j==columns) {
                    printf("*");
                } else {
                    printf(" ");
                }
            }
        }
        printf("\n");
    }
    return 0;
}