#include <stdio.h>
/**
  * main - print the first 50 fibonacci numbers.
  * Return: Nothing.
  */
int main(void)
{
	unsigned long count, f, se, sum;

	f = 0;
	se = 1;
	for (count = 0; count < 50; count++)
	{
		sum = f + se;
		f = se;
		se = sum;
		printf("%lu", sum);
		if (count == 49)
			putchar('\n');
		else
		{
			printf(", ");
		}
	}
	return (
