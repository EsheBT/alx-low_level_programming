#include <stdio.h>

/**
 * main - The primary function
 *
 *
 * Return: end the function execusion
 */

int main(void)
{
	int num;
	char l;

	for (num = 0; num < 10; num++)
		putchar((num % 10) + '0');

	for (l = 'a'; l <= 'f'; l++)
		putchar(l);

	putchar('\n');

	return (0);
}
