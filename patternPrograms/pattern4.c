// WAP to print PLUS sign using stars: (number needs to be odd);
/* sample space (5)
|  *   
|  *   
|*****
|  *  
|  *  
*/
/// (06/06/2026) {0xSakCodes}

#include <stdio.h>

// user defined function declaration:
void printPattern(int rows) {
    int midNum;
    midNum = (rows /2) + 1;
    for (int i=1; i<=rows; i++) {
        for(int j=1; j<=rows; j++) {
            if (i%2==0) {
                if(j == midNum) {
                    printf("*");
                } else {
                    printf(" ");
                }
            } else if (i==midNum){
                printf("*");
            } else {
                if(j == midNum) {
                    printf("*");
                } else {
                    printf(" ");
                }
            }
        }
        printf("\n");
    }
}

int main() {
    int rows;
    printf("enter number of rows (odd): ");
    scanf("%d", &rows);

    if(rows%2==0) return 1;
    
    // calling function:
    printPattern(rows);
    return 0;
}