#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * str_concat - concatenates 2 strings
 *
 * @s1: first string
 * @s2: string to add to end of of first string
 *
 * Return: pointer to newly allocated string concatenation
 */
char *str_concat(char *s1, char *s2)
{
	unsigned int i = 0, j = 0;
	char *ptr, *newptr;

	ptr = s1;
	if (s1)
		while (*ptr++)
			i++;
	else
		s1 = "";

	ptr = s2;
	if (s2)
		while (*ptr++)
			j++;
	else
		s2 = "";

	newptr = malloc(i + j + 1);
	if (!newptr)
		return (NULL);

	ptr = newptr;
	while (*s1)
		*ptr++ = *s1++;
	while (*s2)
		*ptr++ = *s2++;
	*ptr = 0;

	return (newptr);
}
