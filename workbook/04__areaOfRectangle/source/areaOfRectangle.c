#include <stdio.h>
#include <stdlib.h>

int main() {
  double width = 32.3;
  double height = 15.3;
  double perimeter = 0.0;
  double area = 0.0;

  perimeter = 2.0 * (height + width);
  area = width * height;

  // putting of multiple variables on a single `printf()`
  // %.2f is a format specifier to print number with only two decimal - if use only %f it is going to print the entire floating number
  printf("Width is: %.2f, Height is %.2f\n", width, height);

  printf("Perimeter is  %.2f\n", perimeter);
  printf("Area is: %.2f\n", area);

  return 0;
}