#include <stdio.h>

int main() {
  int integerVar = 100;
  float floatingVar = 331.79;
  double doubleVar = 8.44e+11;
  char charVar = 'W';

  _Bool booleanVar = 0;

  printf("integerVar = %i\n", integerVar);
  printf("floatingVar = %f\n", floatingVar);
  printf("doubleVar = %e\n", doubleVar);
  printf("doubleVar = %g\n", doubleVar);
  printf("charVar = %c\n", charVar);

  printf("booleanVar = %i\n", booleanVar);
  return 0;
}