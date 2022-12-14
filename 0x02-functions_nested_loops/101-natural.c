#include <stdio.h>
/**
  * main - computes and prints the sum of all the multiples of
  * 3 or 5 below 1024.
  * Return: Nothing.
  */

int main(void)
{
	int p, sum;

	for (p = 0; p < 1024; p++)
		if (p % 3 == 0 || p % 5 == 0)
			sum += p;
	printf("%d\n", sum);
	return (0);
}
