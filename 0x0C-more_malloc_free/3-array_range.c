#include "bootcamp.h"
/**
 * array_range - creates an array of integers
 * @min: start (min) of range of values to include
 * @max: max of range of values to include
 * Return: pointer to newly created array or NULL
 */
int *array_range(int min, int max)
{
	int *ptr, j;

	if (min > max)
		return (NULL);
	if (max - min == 0)
	{
		ptr = malloc(sizeof(int));
		ptr[0] = min;
	}
	else
	{
		ptr = malloc(sizeof(int) * (max - min + 1));
		if (ptr == NULL)
			return (NULL);
		for (j = 0; min <= max; j++, min++)
			ptr[j] = min;
	}
	return (ptr);
}
