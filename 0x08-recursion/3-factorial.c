#include "main.h"

/**
 * factorial - Calculates the factorial of a given number.
 * @n: The number for which to calculate the factorial.
 *
 * Return: The factorial of the given number, or -1 if the number is negative.
 */
int factorial(int n)
{
int i = 1;
int result = 1;

if (n < 0)
{
return (-1);
}

if (n == 0)
{
return (1);
}

while (i <= n)
{
result *= i;
i++;
}

return (result);
}
