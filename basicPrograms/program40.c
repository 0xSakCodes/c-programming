// WAP to enter price of 3 items & print their final cost with gst (18%);
/// (16/05/2026) {0xSakCodes}

#include <stdio.h>

// main function:
int main() {
    float price[3];

    for (int i=0; i<=2; i++){
        float cost;
        printf("enter cost: ");
        scanf("%f", &cost);
        cost = cost * 0.18 + cost;

        price[i] = cost;
        printf("+GST >> %f\n", price[i]);
    }
    
    return 0;
}