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

	for (n = 0 ; n <= 9 ; n++)
	{
		if (n != 9)
		{
			putchar(n + '0');
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}
