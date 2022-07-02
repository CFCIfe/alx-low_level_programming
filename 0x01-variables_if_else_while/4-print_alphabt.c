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
		if (ch == 'e' || ch == 'q')
		{
			ch++;
		}
		putchar(ch);
	}
	putchar('\n');
	return (0);
}
