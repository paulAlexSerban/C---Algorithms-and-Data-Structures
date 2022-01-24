#include <stdio.h>

int main() {
  /**
   * Arithmetical Operators
   */
  int a = 33;
  int b = 15;

  int sumResult = a + b;
  int multiplicationResult = a * b;
  int divisionResult = a / b;
  int moduloResult = a % b;
  int postfixIncremet = a++;
  int prefixIncrementedResult = ++a;

  printf("Sum result is %d\n", sumResult);
  printf("Multiplication result is %d\n", multiplicationResult);
  printf("Division result is %d\n", divisionResult);
  printf("Modulo result is %d\n", moduloResult);
  printf("Prefix incremented result is %d\n", prefixIncrementedResult);
  printf("Postfix decremented result is %d\n", postfixIncremet);

  /**
   * Logical Operators
   * 
   * `&&`
   * `||`
   * `!`
   */
  _Bool bool_a = 1; // true
  _Bool bool_b = 0; // false

  _Bool andResult = bool_a && bool_b;
  _Bool orResult = bool_a || bool_b;
  _Bool notResult = !bool_a;

  printf("and result is %d\n", andResult);
  printf("or result is %d\n", orResult);
  printf("not result is %d\n", notResult);

  /**
   * Assignment Operators
   * 
   * `+=` - adds the right operand to the left operand and assign the result to the left operand
   * `-=` - subtracts the right operand from the left operand and assigns the result to the left operand
   * `*=` - multiplies the right operand with the left operand and assigns the result to the left operand
   * `/=` - divides the left operand with the right operand and assigns the result to the left operand
   * `%=` - takes modulus using two operands and assigns the result to the left operand
   */
  return 0;
}