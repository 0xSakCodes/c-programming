// WAP to store and print complex number (real & imaginary) number using arrow operator;
/// (02/06/2026) {0xSakCodes}

#include <stdio.h>

// defining struct;
typedef struct complexes {
    int real;
    int imaginary;
} complexNumber;

// user defined function declaration:
void storeNumber(complexNumber *num);
void printComplex(complexNumber *toPrint);

// main function:
int main() {
    // defining variables;
    complexNumber one;
    complexNumber two;

    // storing data in variables;
    storeNumber(&one);
    storeNumber(&two);

    // printing the data via arrow operator;
    complexNumber *ptr = &one; 
    printComplex(ptr);
    return 0;
}

// defining function:
void storeNumber(complexNumber *num) {
    int r, i;
    printf("enter real number: ");
    scanf("%d", &r);
    printf("enter imaginary number: ");
    scanf("%d", &i);

    // assiging values;
    num->real = r;
    num->imaginary = i;
}

void printComplex(complexNumber *toPrint) {
    printf("Real: %d\nImaginary: %d",toPrint->real, toPrint->imaginary);
}