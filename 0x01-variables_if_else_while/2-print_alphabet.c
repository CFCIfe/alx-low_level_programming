#include <stdio.h>

/**
 * main - function
 *
 * Return: 0 if successful
 *
 */

int main(void)
{
	char ch = 'a';

	while (ch <= 'z')
	{
		putchar("%c\n", ch);
		ch++;
	}

	return (0);
}
