#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * calculate_minimum_coins - Calculate the minimum number of coins needed
 * to make change for an amount of money
 * @cents: The amount of money in cents
 *
 * Return: The minimum number of coins
 */
int calculate_minimum_coins(int cents)
{
int coins = 0;

while (cents > 0)
{
if (cents >= 25)
cents -= 25;
else if (cents >= 10)
cents -= 10;
else if (cents >= 5)
cents -= 5;
else if (cents >= 2)
cents -= 2;
else
cents -= 1;

coins++;
}

return (coins);
}

/**
 * main - Calculate the minimum number of coins to make change
 * @argc: Count of arguments
 * @argv: Array of arguments
 *
 * Return: 0 if success, 1 if error
 */
int main(int argc, char *argv[])
{
int cents, coins;

if (argc != 2)
{
printf("Error\n");
return (1);
}

cents = atoi(argv[1]);

if (cents < 0)
{
printf("0\n");
return (0);
}

coins = calculate_minimum_coins(cents);
printf("%d\n", coins);

return (0);
}
