#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * _isdigit - Checks if a character is a digit.
 * @c: The character to be checked.
 *
 * Return: 1 if c is a digit, 0 otherwise.
 */
int _isdigit(int c)
{
return (c >= '0' && c <= '9');
}

/**
 * multiply - Multiplies two numbers represented as strings.
 * @num1: The first number.
 * @num2: The second number.
 *
 * Return: Pointer to the result (product) as a string.
 */
char *multiply(char *num1, char *num2)
{
int len1 = 0, len2 = 0, i, j, prod_len;
int *result, carry, n1, n2, sum;
char *product;

while (num1[len1])
len1++;
while (num2[len2])
len2++;

prod_len = len1 + len2;
result = calloc(prod_len, sizeof(int));
if (result == NULL)
return (NULL);

for (i = len1 - 1; i >= 0; i--)
{
n1 = num1[i] - '0';
carry = 0;

for (j = len2 - 1; j >= 0; j--)
{
n2 = num2[j] - '0';
sum = n1 * n2 + result[i + j + 1] + carry;
result[i + j + 1] = sum % 10;
carry = sum / 10;
}

if (carry > 0)
result[i + j + 1] += carry;
}

while (*result == 0 && prod_len > 1)
{
result++;
prod_len--;
}

product = malloc((prod_len + 1) * sizeof(char));
if (product == NULL)
{
free(result);
return (NULL);
}

for (i = 0; i < prod_len; i++)
product[i] = result[i] + '0';

product[i] = '\0';
free(result);

return (product);
}

/**
* main - Entry point. Multiplies two positive numbers.
* @argc: The number of command-line arguments.
* @argv: An array of command-line argument strings.
*
* Return: 0 if success, 98 if error.
*/
int main(int argc, char *argv[])
{
char *num1, *num2, *product;

if (argc != 3)
{
printf("Error\n");
return (98);
}

num1 = argv[1];
num2 = argv[2];

while (*num1)
{
if (!_isdigit(*num1))
{
printf("Error\n");
return (98);
}
num1++;
}

while (*num2)
{
if (!_isdigit(*num2))
{
printf("Error\n");
return (98);
}
num2++;
}

product = multiply(argv[1], argv[2]);
if (product == NULL)
{
printf("Error\n");
return (98);
}

printf("%s\n", product);
free(product);

return (0);
}
