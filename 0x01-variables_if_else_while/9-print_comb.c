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

	for (n = 0 ; n < 10 ; n++)
	{
		putchar(n + '0');
		putchar(',');
		putchar(' ');
	}
	putchar('\n');
	return (0);
}
