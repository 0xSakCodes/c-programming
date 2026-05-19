// WAP to enter price of 3 items & print their final cost with gst (18%);
/// (16/05/2026) {0xSakCodes}

#include <stdio.h>

// user defined function declaration
void printCost(float *arr, int number);

// main function:
int main() {
    float price[3];

    for (int i=0; i<=2; i++){
        float cost;
        printf("enter cost: ");
        scanf("%f", &cost);
        cost = cost * 0.18 + cost;

        price[i] = cost;
    }

    printCost(price, 3);
    
    return 0;
}

// defining function:
void printCost(float *arr, int number) {
    for (int i=0; i<number; i++){
        printf("Cost + GST >> %f\n", arr[i]);
    }
}