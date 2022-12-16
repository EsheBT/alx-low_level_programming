#include <stdio.h>
#include <main.h>

/**
 * main- Prints a largest prime factor
 *
 * Return: nothing
 */
	int main(void)
{
	long int n;

	n = 612852475143;
	long int div = 2, maxFact;

	while (n != 0)

	{
	if (n % div != 0)
	div = div + 1;
	else
	{
	maxFact = n;
	n = n / div;

	if (n == 1)
	{
	printf("%d is the largest prime factor !", maxFact);
	break;
	}
	}
	}
	return (0);
}
