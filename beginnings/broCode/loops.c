#include <stdio.h>

int main() {
  // ----------------------------
  // FOR LOOP EXAMPLE
  // ----------------------------
  printf("For Loop:\n");
  for (int i = 0; i < 5; i++) {
    printf("  i = %d\n", i);
  }

  // ----------------------------
  // WHILE LOOP EXAMPLE
  // ----------------------------
  printf("\nWhile Loop:\n");
  int j = 0;
  while (j < 5) {
    printf("  j = %d\n", j);
    j++;
  }

  // ----------------------------
  // DO-WHILE LOOP EXAMPLE
  // ----------------------------
  printf("\nDo-While Loop:\n");
  int k = 0;
  do {
    printf("  k = %d\n", k);
    k++;
  } while (k < 5);

  return 0;
}
