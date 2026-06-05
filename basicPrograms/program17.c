// WAP to print pattern via nested loop:
/// (05/06/2026) {0xSakCodes}

#include <stdio.h>

// user defined function declaration:
void printPattern(char spChar, int lines) {
  // logic
  for (int i=1; i<=lines; i++) {
    // 5 chars to be printed in each line
    for (int j=1; j<=5; j++) {
      printf("%c", spChar);
    }
    printf("\n");
  }
}

// main function
int main() {
  char spchar;
  int lines;
  
  printf("enter special character: ");
  scanf("%c", &spchar);
  printf("enter number of lines: ");
  scanf("%d", &lines);

  // calling function
  printPattern(spchar, lines);
  return 0;
}
