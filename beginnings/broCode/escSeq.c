#include <stdio.h>

int main() {
  printf("Escape Sequence Demo:\n");

  printf("\\b  Backspace            --> ABC\bD\n"); // Backspaces over 'C'
  printf("\\n  Newline              --> First Line\nSecond Line\n");
  printf("\\t  Horizontal tab       --> Column1\tColumn2\n");
  printf("\\v  Vertical tab         --> Hello\vWorld\n"); // Rarely used
  printf("\\\\  Backslash           --> \\\n");
  printf("\\\'  Single quote         --> \'\n");
  printf("\\\"  Double quote         --> \"\n");
  printf("\\?  Question mark        --> \?\n");
  printf("\\ooo Octal value         --> \101\n"); // 'A'
  printf("\\xhh Hex value           --> \x42\n"); // 'B'

  printf("some interesting uses\n");
  printf("1\t2\t3\n4\t5\t6\n7\t8\t9\n");
  printf("\"weiners\" -abraham lincoln or something");

  return 0;
}
