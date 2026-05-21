// WAP (function) to count the number of odd numbers in an array;
/// (21/05/2026) {0xSakCodes}

#include <stdio.h>

// user defined function declaration:
int countOfOdd(int *arr, int maxLen);


// main function:
int main() {
    // assuming an array:
    int num[10] = {1,2,3,4,5,6,7,8,9,10};

    // calling the function:
    int oddNumbers = countOfOdd(num, 10);
    printf("\nTotal Odd Numbers: %d", oddNumbers);
    return 0;
}

// defining function:
int countOfOdd(int *arr, int maxLen) {
    int oddCount = 0;

    for (int i=0; i<maxLen; i++) {
        // 0,1,2,3 (if 4);
        int valueAtIndex = arr[i];
        if (valueAtIndex % 2 != 0) {
            oddCount++;
            // to check we will print the odd numbers output;
            printf("%d \t", valueAtIndex);
        }
    }

    return oddCount;
}