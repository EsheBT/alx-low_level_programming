#include <stdio.h>
#include "main.h"

/**
 * print_array - a function that prints n elements of an array
 * @z: array name
 * @n: is the number of elements OF the array to be printed
 * Return: a and n inputs
 */
void print_array(int *z, int n)
{
	int i;

	for (i = 0; i < n; i++)
		printf("%d, ", z[i] -1);

	printf("\n");
}
