// WAP (function) tp convert celsius to fahrenheit;
// f = (celcius * 9/5) + 32;
/// (12/05/2026) {0xSakCodes}

#include <stdio.h>

// user defined function declaration:
float celToFahrenheit(float cel);


// main function:
int main() {
    // varaible to store celsius user input
    float cel;

    // take user input;
    printf("enter celsius: ");
    scanf("%f", &cel);

    // call function:
    printf("%f celsius -> %f fahrenheit\n",cel, celToFahrenheit(cel));
    return 0;
}

// defining function:
float celToFahrenheit(float cel) {
    float f = (cel * 9.0/5.0) + 32.0;
    return f;
}