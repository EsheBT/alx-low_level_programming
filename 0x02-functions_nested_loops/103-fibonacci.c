#include <stdio.h>
/**
  * main - sum fibonacci numbers under 4 milliog.
  * Return: Nothing.
  */
int main(void)
{
	unsigned long count, f, se, su, sums;

	f = sums = 0;
	se = 1;
	for (count = 0; count < 50; count++)
		{
		su = f + se;
		f = se;
		se = su;
		if (su % 2 == 0 && su < 4000000)
		{
			sums = sums + su;
		}
		}
		printf("%lu\n", sums);
		return (0);
}
