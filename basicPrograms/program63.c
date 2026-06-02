// WAP to enter address(house no, block, city, state) of 5 people;
/// (02/06/2026) {0xSakCodes}

#include <stdio.h>
#include <string.h>

// user defined data structure;
typedef struct address {
    int houseNumber;
    int block;
    char city[20];
    char state[25];
} addr;

// user defined function declaration;
void takeInput(addr info[], int maxPeople);
void printVals(addr info[], int atIndex);

// main function
int main() {
    // defining variables;
    int people = 5;
    int valueAtIndex;
    addr info[people];

    // calling functions with (arguments);
    takeInput(info, people);
    printf("\nAccess Index Number: ");
    scanf("%d", &valueAtIndex);
    printVals(info, valueAtIndex);
    return 0;
}

// defining function
void takeInput(addr info[], int maxPeople) {
    /*
    | addr -> struct address;
    | info[] -> contains listed info;
    || info[5] -> {[0], [1], [2]...[5]};
    ||| therefore info[i] -> would point to index whose
    ||| value is supposed to be changed, info[i].state;
    ||| would change the value of state for index/ (i); 
    */
    for (int i=0; i<maxPeople; i++){
        // defining local strings to be copied;
        char city[20];
        char state[25];

        printf("enter house number: ");
        scanf("%d", &info[i].houseNumber);
        printf("enter block: ");
        scanf("%d", &info[i].block);
        printf("enter city: ");
        scanf("%s", &city);
        printf("enter state: ");
        scanf("%s", &state);

        // copies the values to main;
        strcpy(info[i].city, city);
        strcpy(info[i].state, state);
    }
}

// accessing data;
void printVals(addr info[], int atIndex) {
    printf("ACCESSING INDEX DATA...:)\n\n");

    printf(">> House Number: %d\n>> Block Number: %d\n>> City: %s\n>> State: %s\n\nData Accessed :>", info[atIndex].houseNumber , info[atIndex].block, info[atIndex].city, info[atIndex].state);
}