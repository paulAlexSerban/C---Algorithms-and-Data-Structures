#include <stdio.h>
#include <stdlib.h>

int main() {
  int number_to_test, remainder, sign;

  printf("Enter your number to be tested: ");
  scanf("%i", &number_to_test);

  remainder = number_to_test % 2;

  if(remainder == 0) {
    printf("The number is even. \n");
  } else {
    printf("The number is odd. \n");
  }

  if(number_to_test < 0) {
    sign = -1;
  } else if(number_to_test == 0) {
    sign = 0;
  } else {
    sign = 1;
    printf("Sign = %i\n", sign);
  }

  return 0;
}