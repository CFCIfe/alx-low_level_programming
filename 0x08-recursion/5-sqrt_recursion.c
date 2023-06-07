/**
 * _sqrt_recursion - Calculates the natural square root of a number.
 * @n: The number to calculate the square root of.
 *
 * Return: The natural square root of n, or -1 if no natural square root.
 */
int _sqrt_recursion(int n);
int sqrt_helper(int n, int i);

int _sqrt_recursion(int n)
{
if (n < 0)
return (-1);

if (n == 0 || n == 1)
return (n);

return (sqrt_helper(n, 1));
}

/**
 * sqrt_helper - Recursive helper function to calculate the square root.
 * @n: The number to calculate the square root of.
 * @i: The current value to check as a possible square root.
 *
 * Return: The natural square root of n, or -1 if no natural square root.
 */
int sqrt_helper(int n, int i)
{
if (i * i == n)
return (i);

if (i * i > n)
return (-1);

return (sqrt_helper(n, i + 1));
}
