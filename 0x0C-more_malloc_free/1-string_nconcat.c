#include "main.h"

/**
 * string_nconcat - concatenate two strings
 * @s1: the first string
 * @s2: the second string
 * @n: the maximum number of bytes to use from s2
 *
 * Return: If memory allocation fails, return NULL. Otherwise, return a pointer
 * to the first character of the new string.
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *cat;
	unsigned int l1 = 0;
	unsigned int l2 = 0;

	if (s1)
	{
		while (s1[l1])
			++l1;
	}

	if (s2)
	{
		while (l2 < n && s2[l2])
			++l2;
	}

	cat = malloc(sizeof(char) * l1 + l2 + 1);
	if (!cat)
		return (NULL);

	for (n = 0; n < l1; ++n, ++cat)
		*cat = s1[n];

	for (n = 0; n < l2; ++n, ++cat)
		*cat = s2[n];

	*cat = '\0';

	return (cat -l1 - l2);
}
