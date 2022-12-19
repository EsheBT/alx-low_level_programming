#include "main.h"

/**
 * swap_int - a function that swaps the values of two integers
 * @a: input o
 * @b: input 1
 * Return: integers
 */
void swap_int(int *a, int *b)
{
	int i;

	i = *a;
	*a = *b;
	*b = i;
}
