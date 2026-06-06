// WAP to print odd number pattern:
/* (for 3):
| 1
| 1 3
| 1 3 5
*/
/// (06/06/2026) {0xSakCodes}

#include <stdio.h>

// user defined function declaration:
void printPattern(int rows) {
    int numOfOdds;
    for (int i=1; i<=rows; i++) {
        int num = 1;
        /* 
        | sample space would return 1,2,3;
        || here, we will have our logic to print total (i) number of odd numbers; 
        || numOfOdds = i -> showcases the number of odds we need to print in line;
        || we will gradually increase num till inifinity unless the required numOfOdds are found :)
        */
        numOfOdds = i;
        while (numOfOdds != 0) {
            while (1) {
                /*
                | if number leaves remainder when divided by 2 its odd;
                || therefore, we will print the number and decrease the numberOfOdds count (break the infinite loop);
                | if number does not leaves a remainder when divided its even:
                || therefore, we will just increase the number count;
                */
                if(num%2 != 0) {
                    printf("%d", num);
                    num++;
                    numOfOdds--;
                    break;
                } else {
                    num++;
                }
            }
        }
        printf("\n");
    }
}


int main() {
    int nOfRows;
    printf("enter number of rows for odd pattern: ");
    scanf("%d", &nOfRows);

    printPattern(nOfRows);
    return 0;
}