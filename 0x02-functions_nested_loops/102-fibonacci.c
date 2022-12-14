#include <stdio.h>
/**
  * main - print the first 50 fibonacci numbers.
  * Return: Nothing.
  */
int main(void)
{
	unsigned long count, f, se, su;

	f = 0;
	se = 1;
	for (count = 0; count < 50; count++)
	{
		su = f + se;
		f = se;
		se = su;
		printf("%lu", su);
		if (count == 49)
			putchar('\n');
		else
		{
			printf(", ");
		}
	}
	return (0);
}
