#include "main.h"
/**
 * _strncat - concatenate strings, defining the size of second string.
 * @dest: string with concatenation
 * @src: string to be concatenated
 * @n: size of second string
 * Return: Always 0.
 */
char *_strncat(char *dest, char *src, int n)
{
	int D1, S1;

	D1 = 0;
	S1 = 0;

	while (*(dest + D1) != '\0')
		D1++;

	while (*(src + S1) != '\0' && D1 < 97 && S1 < n)
	{
		*(dest + D1) = *(src + S1);
		D1++;
		S1++;
	}
	*(dest + D1) = '\0';
	return (dest);
}
