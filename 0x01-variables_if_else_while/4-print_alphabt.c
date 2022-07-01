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

	for (ch = 'a'; ch <= 'z'; ch++)
	{
		ch != 'q' || ch != 'e' ? putchar(ch) : ' ';
	}
	putchar('\n');
	return (0);
}
