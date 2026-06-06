// WAP to print the given square pattern:
/* sample space: (3):
| ABC
| ABC
| ABC
*/
/// (06/06/2026) {0xSakCodes}

#include <stdio.h>

int main() {
    int nOfRows;
    printf("enter number of rows for square pattern: ");
    scanf("%d", &nOfRows);

    char a = 'A';
    char z = 'Z';

    for (int i=1; i<=nOfRows; i++){
        // to find ascii value convert char to int;
        int asciiVal = (int) a;
        if ((asciiVal-1) + nOfRows > (int) z) {
            printf("ERROR: Programs exceeds alphabetical limits :(");
            return 1;
        }

        // ABC;
        for (int j=1; j<=nOfRows; j++) {
            printf("%c", asciiVal);
            asciiVal++;
        }
        printf("\n");
    }

    return 0;
}