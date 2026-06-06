// WAP to print the given triangle pattern:
/* sample space (3):
| A
| AB
| ABC
*/
/// (06/06/2026) {0xSakCodes}

#include <stdio.h>

// user defined function declaration:
void printPattern(int rows) {
    for (int i=1; i<=rows; i++) {
        char a = 'A';
        int ascii = (int) a;
        // 1...2...3.
        for (int j=1; j<=i; j++) {
            printf("%c", ascii);
            ascii++;
        }
        printf("\n");
    }
}

// main function
int main() {
    int rows;
    printf("enter number of rows for triangle pattern: ");
    scanf("%d", &rows);

    if (rows == 0 || rows > 26)
        return 1;
    
    // call function:
    printPattern(rows);
    return 0;
}