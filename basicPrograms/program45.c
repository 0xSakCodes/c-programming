// WAP (function) to reverse an array;
/// (21/05/2026) {0xSakCodes}

#include <stdio.h>

// user defined function declaration: 
void reverseArray(int arr[], int maxLen);

// main function:
int main() {
    // assuming an array;
    int ogArray[5] = {1,2,3,4,5};

    // calling function
    reverseArray(ogArray, 5);
    return 0;
}

// defining function
void reverseArray(int arr[], int maxLen) {
    int j = maxLen;
    int newArray[maxLen];
    // loop to initialize value at newArray;
    for (int i=(maxLen-1); i>=0; i--) {
        int currentValue = arr[i];
        // arr[2], arr[1], arr[0];
        // printf(">> %d \n", currentValue);

        // e variable substracts value of j from maxLen;
        // giving us forward indexing from 0->(maxLen-1);
        // 5-5; 5-4; 5-3; 5-2; 5-1;
        int e = maxLen-j; 
        // assigns the currentValue (back-indexed) to newArray at index[e];
        newArray[e] = currentValue;
        // substracts value of j; 
        j--;
    }

    printf("\n----\t----\n");
    for (int i=0; i<maxLen; i++) {
        // assigns value of newArray to main array;
        arr[i] = newArray[i];
        // check via printing;
        printf("%d \n", arr[i]);
    }
}