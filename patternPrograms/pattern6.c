// WAP to Print the Flyod's Triangle pattern (for n rows);
/* sample space (4):
| 1
| 2 3
| 4 5 6
| 7 8 9 10
*/
/// (06/06/2026) {0xSakCodes}

#include <stdio.h>

int main() {
    int rows;
    int startValue = 1;
    printf("enter number of rows: ");
    scanf("%d", &rows);

    for (int i=1; i<=rows; i++) {
        for (int j=1; j<=i; j++) {
            printf("%d ", startValue);
            startValue++;
        }
        printf("\n");
    }
    return 0;
}