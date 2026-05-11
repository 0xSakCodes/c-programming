// preprocessor directive;
#include <stdio.h>

// main function
int main() {

    // line by line execution:
    int age;

    printf("enter your age: ");

    /*
    type of data:
    %d -> int;
    %f -> float;
    %c -> char;
    */

    // to take input we use scanf:
    scanf("%d", &age); // (type of data, &variable);
    printf(">> %d",age);
    return 0;
}