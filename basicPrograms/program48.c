// Understanding strings;
/// (23/05/2026) {0xSakCodes}

#include <stdio.h>

int main() {
    // string by adding null character;
    char name[] = {'S', 'a', 'k', 'C', 'o', 'd', 'e', 's', '\0'};

    // normal string:
    char names[] = "SakCodes ;)";
    printf("%s\n", name);
    printf("%s", names);
    return 0;
}