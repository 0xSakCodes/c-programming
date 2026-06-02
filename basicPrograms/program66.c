// WAP to make a structure to store BANK ACC. information of customers of ABC Bank, also make an alias for it;
/// (02/06/2026) {0xSakCodes}

#include <stdio.h>
#include <string.h>

// user defined structure;
typedef struct BankInfo {
    int accNumber;
    int balance;
    char name[33];
} abc;

// user defined function declaration:
void storeDetails(abc *customerInfo);

// main function:
int main() {
    // assuming 1 customer;
    abc customer1;
    
    storeDetails(&customer1);
    return 0;
}

// defining function:
void storeDetails(abc *customerInfo) {
    char name[33];
    printf("enter account number: ");
    scanf("%d", &customerInfo->accNumber);
    printf("enter name: ");
    scanf("%s", &name);
    printf("enter balance: ");
    scanf("%d",&customerInfo->balance);

    strcpy(customerInfo->name, name);
}