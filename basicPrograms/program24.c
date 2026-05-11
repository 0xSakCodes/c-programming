// WAP (functions) to calculate area of square, circle, rectangle;
/// (11/05/2026) {0xSakCodes}

#include <stdio.h>
#include <math.h>

// user defined functions:
float areaOfSquare(float length);
float areaOfCircle(float radius);
float areaOfRectangle(float length, float breadth);

// main function:
int main() {
    // variables to store user input:
    float side;
    float radius;
    float length, breadth;

    // user input:
    printf("enter side of square: ");
    scanf("%f", &side);
    printf("area of square: %f\n\n", areaOfSquare(side));

    printf("enter raidus of circle: ");
    scanf("%f", &radius);
    printf("area of circle: %f\n\n", areaOfCircle(radius));

    printf("enter length of rectangle: ");
    scanf("%f", &length);
    printf("enter breadth of rectangle: ");
    scanf("%f", &breadth);
    printf("area of rectangle: %f\n\n", areaOfRectangle(length, breadth));
    return 0;
}

// define functions:
float areaOfSquare(float length) {
    // side^2
    float area = pow(length, 2);
    return area;
}

float areaOfCircle(float radius) {
    // 3.14 * r^2
    float pi = 3.14;
    float area = pi * pow(radius,2);
    return area;
}

float areaOfRectangle(float length, float breadth) {
    // l * b
    float area = length * breadth;
    return area;
}