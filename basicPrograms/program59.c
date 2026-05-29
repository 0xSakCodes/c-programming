// Understanding Structures;
/// (29/05/2026) {0xSakCodes}

#include <stdio.h>
#include <string.h>

// main function:
int main() {
    // user defined data type;
    struct userInfo {
        int userId;
        char userName[7];
        int userPassword;
    };

    // using the data structure;
    struct userInfo a;
    // assiging values
    a.userId = 1;
    // assuming name;
    strcpy(a.userName, "sakcode");
    a.userPassword = 73631;

    printf("username: %s\n", a.userName);
    printf("userid: %d\n", a.userId);
    printf("userpass: %d\n", a.userPassword);
    return 0;
}