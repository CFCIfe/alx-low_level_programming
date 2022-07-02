#include <stdio.h>

/**
 * main - function
 *
 * Return: 0 if successful
 *
 */

int main(void)
{
	int n;

	for (n = 0 ; n < 9 ; n++)
	{
		putchar(n + '0');
		putchar(',');
		putchar(' ');
	}
	putchar('9\n');
	return (0);
}
