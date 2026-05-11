// WAP to print prime numbers in a range.
/// using while loops: 
//// (11/5/2026) {0xSakCodes}

#include <stdio.h>

int main() {
    // define variables:
    int startRange;
    int stopRange;
    
    // define looping variables;
    int i = 2;

    // define isPrime;
    int isPrime;

    // take user inputs:
    printf("enter starting number: ");
    scanf("%d", &startRange);
    printf("enter ending number: ");
    scanf("%d", &stopRange);

    // while loop:
    // runs till i is less than or equal to stopRange;
    while (i <= stopRange) {
        // expected 10: 2,3,4,5,6,7,8,9,10;
        // assuming number to be prime by default;
        isPrime = 1;

        // looping again till the number of times to check divisibility by other numbers;
        int j = 2;
        // loop till j is smaller than the number;
        while (j < i){
            // expected: (values of j)
            // 2; 2,3; 2,3,4; 2,3,4,5; 2,3,4,5,6; 2,3,4,5,6,7; 2,3,4,5,6,7,8; 2,3,4,5,6,7,8,9;
            if (i % j == 0) {
                isPrime = 0; // false (because it got divided);
                // increase i to stop infite looping before termination;
                i++;
               // reissue to int 2 to start relooping for other numbers;
               j = 2;
                break; // breaks the while loop;
             }
            // increase the value of j;
            // printf("%d", j);
            j++;
        }

        // if it doesnt breaks: checks for the number;
         if (isPrime) {
            // print the number;
            printf("%d ", i);
        }
        // increase the number;
        // printf("%d", i);
        i++;
        // j = 2;
    }
    return 0;
}