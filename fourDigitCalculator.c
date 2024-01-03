/*****
 * fourDigitCalculator.c - This code runs the basic functions 
 * for calculating the 4 digit car lisence plate game
 * 
 * @author: <Anthony Le> (<anthle@gmail.com)
 * @date:   <12/31/2023>
 * 
 */
 
// header files go here
#include "fourDigitCalculator.h"
#include <stdlib.h>
#include <string.h>
#include <malloc.h>
#include <math.h>
#include <stdio.h>

/**
  * LINESPACE() - displays a line with a given length
  *
  * @param	int length - Takes in the length to provide that amount of lines in the display
  * @return nothing
  */
 void LINESPACE(int length) {
 	for (int i = 0; i < length; ++i) {
 		printf("-");
 	}
 	printf("\n");
 }

/***
 * Source: https://www.geeksforgeeks.org/program-calculate-value-ncr/
 * factorial()  - Determines the factorial of a given int n
 * 
 * @param  int n - Takes a given integer and calculates the factorial
 * @return the factorial calculated
 * 
 */
int factorial(int n) {
      if(n == 0)
      return 1;
    int factorial = 1;
    for (int i = 2; i <= n; i++)
        factorial = factorial * i;
    return factorial;
}

/***
 * Source: https://www.geeksforgeeks.org/program-calculate-value-ncr/
 * nCr()  - Determines the n choose r for possible number combinations/permutations
 * 
 * @param  int n - Takes a given integer for the amount of objects
 * @param  int r - It is the amount of spots that you can have for the objects
 * @return the n choose r value
 * 
 */
int nCr(int n, int r) {
    return factorial(n) / (factorial(r) * factorial(n - r));
}

 /**
  * MAX_NUMCOMBO_CALC() - returns a maxcombo integer value
  *
  * @param	int num_amount - Takes in the digit length to calculate max_numcombo
  * @return the calculated int for the max unique combinations possible
  */
int MAX_NUMCOMBO_CALC(int num_amount) {
	int maxcombo = 0;

	maxcombo = pow(num_amount, num_amount);
	return maxcombo;
}

 /**
  * MAX_OPCOMBO_CALC() - returns a maxcombo integer value
  *
  * @param	int num_amount - Takes in the amount of operators to calculate max_numcombo
  * @return the calculated int for the max unique combinations possible for the slots allowed DIGIT_AMOUNT - 1
  */
int MAX_OPCOMBO_CALC(int num_amount, int op_amount) {
	int maxcombo = 0;

	maxcombo = pow(op_amount, num_amount - 1);
	return maxcombo;
}

