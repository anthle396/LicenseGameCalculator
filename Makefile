CC = gcc
Cflags = -Wall -std=c99
test_calc.exe: test_calc.o fourDigitCalculator.o 
	$(CC) $(Cflags) -o test_calc.exe test_calc.c fourDigitCalculator.o 
tempHumidtree.o: fourDigitCalculator.c
	$(CC) $(Cflags) -c $^
clean:
	rm -f test_calc.exe test_calc.o fourDigitCalculator.o
