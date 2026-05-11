// WAP that prints "Namaste" if user is Indian & "Bonjour" if the user is french;
/// (5/11/2026) {0xSakCodes}

#include <stdio.h>

// declare other functions;
void isIndian();
void isFrench();

// main function;
int main() {
    // i for indian & f for french;
    char nationality;

    // take user input;
    printf("f-> french / i-> indian\nenter nationality: ");
    scanf("%c", &nationality);

    // switch & case:
    switch (nationality) {
        case 'i':
            isIndian();
            break;
        case 'f':
            isFrench();
            break;
        default:
            printf("Error: unexpected input!");
    }
    return 0;
}

// function description:
void isIndian() {
    printf("Namaste! :)\n");
}

void isFrench() {
    printf("Bonjour! :)\n");
}