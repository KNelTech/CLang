#include <stdio.h>

int main() {

  int x;
  x = 123;

  int y = 321;

  int age = 32;

  float gpa = 2.05;

  char grade = 'D'; // single quotes for char

  char name[] = "dudeeeee"; // no strings in c its an array of chars double
                            // quotes for these psuedo strings

  /*
* Format Specifiers in C (for printf / scanf)
*
* --- Integer Types ---
*  %d / %i   - Signed int           (printf/scanf)
*  %u        - Unsigned int         (printf/scanf)
*  %o        - Unsigned octal       (printf/scanf)
*  %x / %X   - Unsigned hexadecimal (x=lowercase, X=uppercase)

* --- Character & String ---
*  %c        - Single character     (printf/scanf)
*  %s        - String (char *)      (printf/scanf)

* --- Floating Point ---
*  %f        - Decimal float        (printf/scanf)
*  %e / %E   - Scientific notation  (e=lowercase, E=uppercase)
*  %g / %G   - Shorter of %e/%f     (auto-pick format)

* --- Pointers & Special ---
*  %p        - Pointer address (void *) (printf only)
*  %%        - Literal percent sign (just prints '%')

* --- Length Modifiers (used before specifiers) ---
*  %ld / %li     - long int
*  %lu           - unsigned long
*  %lld / %lli   - long long int
*  %llu          - unsigned long long
*  %hd           - short int
*  %hu           - unsigned short
*  %hhd          - signed char
*  %hhu          - unsigned char

*  %Lf           - long double (printf)
*
* --- Scanf-specific Notes ---
*  %n            - Stores number of characters read so far (scanf only)
*  %[...]        - Scanset (matches specified set)
*  %*specifier   - Suppress assignment (e.g., %*d skips an int)
*/

  printf("%c is for the variable grade\n", grade);
  printf("%u is for the variable age\n", age);
  printf("%s is the name variable\n", name);

  // width

  int num1 = 1;

  int num2 = 10;

  int num3 = -100;

  printf("%04d\n", num1);

  printf("%4d\n", num2);

  printf("%4d\n", num3);

  printf("%d\n", num3);

  // precision

  float price1 = 19.99;

  float price2 = 1.50;

  float price3 = -100.00;

  printf("%.2f\n", price1);

  printf("%f\n", price2);

  printf("%.2f\n", price3);

  return 0;
}
