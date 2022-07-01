#include <stdio.h>

/**
 * main - function
 *
 * Return: 0 if successful
 *
 */

int main(void)
{
	char ch;

	for (ch = 'A'; ch <= 'Z'; ch++)
	{
		putchar(ch);
	}
	for (ch = 'a'; ch <= 'z'; ch++)
	{
		putchar(ch);
	}
	putchar('\n');
	return (0);
}
