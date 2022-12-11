#include <stdio.h>

/**
 * main - The primary function
 *
 *
 * Return: end the function execusion
 */

int main(void)
{
	int x1, x2;

	for (x1 = 0; x1 < 9; x1++)
	{
		for (x2 = x1 + 1; x2 < 10; x2++)
		{
			putchar((x1 % 10) + '0');
			putchar((x2 % 10) + '0');

			if (x1 == 8 && x2 == 9)
			continue;
			putchar(',');
			putchar(' ');
		}
	}

	putchar('\n');

	return (0);
}
