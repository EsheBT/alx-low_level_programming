#include "main.h"
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char *eshetu= "_putchar";

	while (*eshetu)
	{
		_putchar(*eshetu);
		eshetu++;
	}
	_putchar('\n');

	return (0);
}
