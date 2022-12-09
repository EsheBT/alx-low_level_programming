#include <stdlib.h>
#include <time.h>
#include<stdio.h>
/* more headers goes there */

/* betty style doc for function main goes there */
/**
* main - entry main
*
*Return:always return zero
*/
int main(void)
{
	int n;
	int m;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	printf("last digit of %d is ", n);
	m = n % 10;
	if (m > 5)
	{
		printf("%d and is grater than 5\n", m);
	}
	else if ((m < 6) && (m < 0))
	{
		printf("%d and is less than 6 and not 0\n", m);
	}
	else
	{
		printf("%d and is 0\n", m);
	}
	return (0);
}
