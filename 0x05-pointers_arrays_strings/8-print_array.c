#include "main.h"

/**
 * print_array - function that prints n elements of an array
 * @a: array name
 * @n: input
 * Return: string
 */
void print_array(int *a, int n)
{
	for (int i = 0;; ++i)
	{
		if (a[i] == a[n])
			break;
		printf("%d ", a[i]);
	}
}

