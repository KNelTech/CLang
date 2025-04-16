#include <stdio.h>

int main() {
  // arithmetic operators       =  +  -  *  /  %  ++  --
  // compound assignment ops    +=  -=  *=  /=  %= bitwise   &=  |=  ^=  <<= >>=

  int x = 2;
  float y = 3; // use floats when dividing
  float z = 0;

  // z = x + y;
  // z = x - y;
  // z = x * y;
  z = x / y;

  // printf("%d", z);
  printf("%f", z);

  return 0;
}
