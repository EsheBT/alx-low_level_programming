#include <stdio.h>

/**
 * main - primary function
 *
 *
 * Return: end the execusion of a function
 */

int main(void)
{
	char m;

	for (m = 'a' ; m <= 'z' ; m++)
	{
		putchar(m);

	}

	for (m = 'A' ; m <= 'Z' ; m++)
	{
		putchar(m);
	}
	putchar('\n');
	return (0);
}


