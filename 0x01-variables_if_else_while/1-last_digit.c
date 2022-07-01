#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/* more headers goes there */
/*
 * main: function
 *
 * Return: 0 if successful
 *
 */
int main(void)
{
	int n, LastDigit;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */
	LastDigit = n % 10;
	if (n > 5)
	{
		printf("Last digt of %d is %d and is greater than 5\n", n, LastDigit);
	}
	else if (n == 0)
	{
		printf("Last digit of %d is %d and is 0\n", n, LastDigit);
	}
	else
	{
		printf("Last digit of %d is %d and is less than 6 and not 0\n", n, LastDigit);
	}
	return (0);
}
