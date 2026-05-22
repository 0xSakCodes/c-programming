// Create a 2D array, storing the tables of 2 & 3;
// array[2] -> {_,_};
// array[2][10] -> [[_..._],[_..._]]; 
/// (21/05/2026) {0xSakCodes}

#include <stdio.h>


// user defined function declaration:
void calculateTable(int array[][10], int position, int tableOf);
void printTable(int array[][10], int positon);

// main function
int main(){
    int table[2][10];
    calculateTable(table, 0, 2);
    calculateTable(table, 1, 3);
    printTable(table, 2);
    return 0;
}

// defining function:
void calculateTable(int array[][10], int position, int tableOf) {
    for (int i=1; i<=10; i++) {
        // printf("%d * %d = %d\n", n , i, n * i);
        int currentMultiplication = tableOf * i;
        int j = i-1;
        array[position][j] = currentMultiplication;
    }
}

void printTable(int array[][10], int position) {
    for (int i=0; i<position; i++) {
        printf("Table: \n");
        for (int j=0; j<10; j++) {
            printf(">> %d\n", array[i][j]);
        }
    }
}