#include <stdlib.h>
#include <time.h>
/* more headers goes there */

/* betty style doc for function main goes there 
 * main function
 *
 * return 0 if successful
 * */

int main(void)
{
	int n;
	if (n > 0)
	{
		printf("%d is positive\n", n);
	}
	else if (n = 0)
	{
		printf("%d is zero\n", n);
	}
	else
	{
		printf("%d is negative\n", n);
	}
	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */
	return (0);
}
