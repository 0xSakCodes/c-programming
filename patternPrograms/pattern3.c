// Print the given numerical & alphabet mixture pattern;
/* sample space (5) {odd: num; even: alpha};
| 1 (odd)
| A B (even)
| 1 2 3 (odd)
| A B C D (even)
| 1 2 3 4 5 (odd)
*/
/// (06/06/2026) {0xSakCodes}

#include <stdio.h>

void printPattern(int rows) {
    char a = 'A';
    for (int i=1; i<=rows; i++) {
        int ascii = (int) a;

        // 1..2..3..4..5.
        for (int j=1; j<=i; j++){
            if (i%2!=0) {
                // odd;
                printf("%d", j);
                ascii++;
            } else {
                // even;
                printf("%c", ascii);
                ascii++;
            }
        }
        printf("\n");
    }
}

int main() {
    int rows;
    printf("enter number of rows to print pattern: ");
    scanf("%d", &rows);

    if(rows == 0)
        return 1;
    
    // calling function:
    printPattern(rows);
}