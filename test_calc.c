/*****
 * test_calc.c - This code runs the basic functions 
 * for calculating the 4 digit car lisence plate game
 * 
 * @author: <Anthony Le> (<anthle@gmail.com)
 * @date:   <12/31/2023>
 * 
 */

#include "fourDigitCalculator.h"
#include <string.h>
#include <malloc.h>
#include <time.h>
#include <stdio.h>
#include <stdlib.h>

int main() {
	// Populates num variables for the license plate digits
	int num1 = 5;
	int num2 = 7;
	int num3 = 8;
	int num4 = 3;

	int maxcombo_nums = 0;
	int maxcombo_ops = 0;

	printf("INFO[main()]:  Booting Program...\n");
	LINESPACE(MAXLINE);
	printf("INFO[main()]:  Welcome to the LICENSE GAME CALCULATOR!\n");
	printf("INFO[main()]:  Reading LICENSE VALUE\n");
	printf("INFO[main()]:  LICENSE DIGITS: [%d-%d-%d-%d]\n",num1,num2,num3,num4);
	LINESPACE(MAXLINE);

	printf("INFO[MAX_NUMCOMBO_CALC()]:  Calculating max unique %d digit combinations...\n", DIGIT_AMOUNT);
	maxcombo_nums = MAX_NUMCOMBO_CALC(DIGIT_AMOUNT);
	printf("INFO[MAX_NUMCOMBO_CALC()]:  Unique combination possibilities = %d\n", maxcombo_nums);

	printf("INFO[MAX_OPCOMBO_CALC()]:  Calculating max unique op combinations...\n");
	maxcombo_ops = MAX_OPCOMBO_CALC(DIGIT_AMOUNT, MAX_OPS);
	printf("INFO[MAX_OPCOMBO_CALC()]:  Unique combination possibilities = %d\n", maxcombo_ops);
	LINESPACE(MAXLINE);

	return 0;
}