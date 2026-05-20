// WAP to enter price of 3 items & print their final cost with gst (18%);
/// (16/05/2026) {0xSakCodes}

#include <stdio.h>

// user defined function declaration
void takeInput(float arr[], int number);
void printCost(float *arr, int number);

// main function:
int main() {
    float price[3];

    // call the function:
    // it can be either -> arr[] or *arr (as both point to same address: arr[0];)
    /// therefore ampercent sign is not recommeneded to point it to address of array;
    
    takeInput(price, 3);
    printCost(price, 3);
    
    return 0;
}

// defining function:
void takeInput(float arr[], int number) {
    for (int i=0; i<number; i++){
        float cost;
        printf("enter cost: ");
        scanf("%f", &cost);
        // including gst cost;
        cost = cost * 0.18 + cost;

        // arr[i] -> price[i] = cost;
        arr[i] = cost;
    }
}

void printCost(float *arr, int number) {
    for (int i=0; i<number; i++){
        printf("Cost + GST >> %f\n", arr[i]);
    }
}