#include <stdio.h>

/**
 * main - The primary function
 *
 *
 * Return: end the function execusion
 */

int main(void)
{
	char m;

	for (m = 'a' ; m <= 'z' ; m++)
	{
		if ((m == 'q' || m == 'e') != 1)
		{
			putchar(m);
		}

	}
	putchar('\n');

	return (0);
}
