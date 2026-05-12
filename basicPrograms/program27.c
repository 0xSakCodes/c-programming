// WAP (function) to calculate Perctange of a student;
// Marks in Science, Maths, Sanskrit;
/// (12/05/2026) {0xSakCodes}

#include <stdio.h>

// user defined function declaration;
float calculatePercentage(float marks1, float marks2, float marks3);

// main function:
int main() {
    // define variables:
    int marksOfScience;
    int marksOfMaths;
    int marksOfSanskrit;

    // taking user input;
    printf("enter marks of science: ");
    scanf("%d", &marksOfScience);
    printf("enter marks of maths: ");
    scanf("%d", &marksOfMaths);
    printf("enter marks of sanskrit: ");
    scanf("%d", &marksOfSanskrit);

    printf("total percentage: %f", calculatePercentage(marksOfScience, marksOfMaths, marksOfSanskrit));
    return 0;
}

// defining function:
float calculatePercentage(float marks1, float marks2, float marks3) {
    return (marks1+marks2+marks3)/3.0;
}