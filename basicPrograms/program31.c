// WAP (function) to print Hot or Cold depending upon the temprature the user enters;
/// (12/05/2026) {0xSakCodes}

#include <stdio.h>

// user defined function declaration
void checkTemprature(float celsius);

// main function:
int main(){
    float currentTemprature;

    printf("enter temprature: ");
    scanf("%f", &currentTemprature);

    // calling function:
    checkTemprature(currentTemprature);
    return 0;
}

// defining function
void checkTemprature(float celsius){
    // assuming random temprature since its not specified;
    float hot = 36.7;
    float cold = 6.8;

    if (celsius >= hot) {
        printf("its hot 0.o!!");
    } else if (celsius <= cold) {
        printf("its cold ;)");
    } else if (celsius >= cold && celsius <= hot){
        printf("moderate!:D");
    }
}