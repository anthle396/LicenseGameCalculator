/**
 * fourDigitCalculator.h - This code runs the basic functions 
 * for calculating the 4 digit car lisence plate game
 *
 * @author: <Anthony Le> (<anthle@gmail.com)
 * @date:   <12/31/2023>
 *
 */
#ifndef _FOURDIGITCALC_H
#define _FOURDIGITCALC_H

#include <stdint.h>
#include <stdbool.h>   

#define MAXLINE 71
#define DIGIT_AMOUNT 4
#define MAX_OPS 4

// function prototypes
 
 /**
  * LINESPACE() - displays a line with a given length
  *
  * @param	int length - Takes in the length to provide that amount of lines in the display
  * @return nothing
  */
void LINESPACE(int length);

/***
 * Source: https://www.geeksforgeeks.org/program-calculate-value-ncr/
 * factorial()  - Determines the factorial of a given int n
 * 
 * @param  int n - Takes a given integer and calculates the factorial
 * @return the factorial calculated
 * 
 */
int factorial(int n);

/***
 * Source: https://www.geeksforgeeks.org/program-calculate-value-ncr/
 * nCr()  - Determines the n choose r for possible number combinations/permutations
 * 
 * @param  int n - Takes a given integer for the amount of objects
 * @param  int r - It is the amount of spots that you can have for the objects
 * @return the n choose r value
 * 
 */
int nCr(int n, int r);

 /**
  * MAX_NUMCOMBO_CALC() - returns a maxcombo integer value
  *
  * @param	int num_amount - Takes in the digit length to calculate max_numcombo
  * @return the calculated int for the max unique combinations possible
  */
int MAX_NUMCOMBO_CALC(int num_amount);

 /**
  * MAX_OPCOMBO_CALC() - returns a maxcombo integer value
  *
  * @param	int num_amount - Takes in the amount of operators to calculate max_numcombo
  * @return the calculated int for the max unique combinations possible for the slots allowed DIGIT_AMOUNT - 1
  */
int MAX_OPCOMBO_CALC(int num_amount, int op_amount);

/**
  * OP_Calculate() - Calculates the value of 2 integer numbers based on the op
  *
  * @param  char op - Calculates the expression given this operator on the two numbers
  * @param  int num1 - Enters the first number to be calculated
  * @param  int num2 - Enters the second number to be calculated
  * @return the calculated value back
  */
int OP_Calculate(char op, int num1, int num2); 
#endif