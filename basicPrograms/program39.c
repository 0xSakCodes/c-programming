// WAP to take marks input in array;
// WAP (function) to print elements of array in reverse order;
/// (16/05/2026) {0xSakCodes}

#include <stdio.h>


// main function
int main() {
    // integer type array;
    int marks[3];

    printf("enter marks for physics: ");
    scanf("%d", &marks[0]);
    printf("enter marks for chemistry: ");
    scanf("%d", &marks[1]);
    printf("enter marks for mathematics: ");
    scanf("%d", &marks[2]);

    for (int i=2; i>=0; i--){
        printf(">> value at %d index: %d\n", i, marks[i]);
    }
    return 0;
}