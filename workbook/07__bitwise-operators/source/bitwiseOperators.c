/**
 * @file bitwiseOperators.c
 * @author Paul Serban
 */

/**
 * Bitwise Operators
 * 
 * one major use is in operations to test and set individual bits in an integer value
 *  - can use individual bits to store data that involve one of two choices
 * 
 * `&` - bitwise AND - copies a bit to the result if it exists in both operands
 * `|` - bitwise OR - copies a bit if it exists in either operand
 * `^` - bitwise XOP - copies a bit if it is set one operand but not both
 * `~` - Binary Ones Complement Operator - is unary and has the effect of 'flipping' bits
 * `<<` - Binary Left Shift Operator - the left operands value is moved left by the number of bits specified by the right operand
 * `>>` - Binary Right Shist Operator - the left operands value is moved right by the number of bits specified by the right operand
 */

#include <stdio.h>

int main() {
  unsigned int a = 60; // 0011 1100
  unsigned int b = 13; // 0000 1101

  int bitwiseAndResult = a & b; // 0000 1100
  int bitwiseOrResult = a | b; // 0011 1101

  printf("bitwiseAndResult is %d\n", bitwiseAndResult);
  printf("bitwiseOrResult is %d\n", bitwiseOrResult);

  return 0;
}