#include "main.h"
#include <stdlib.h>

/**
  * _calloc - ...
  * @nmemb: number of members
  * @size: size
  *
  * Return: ...
  */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	int i = 0, length = 0;
	char *ptr;

	if (nmemb == 0 || size == 0)
		return (NULL);
	length = nmemb * size;

	ptr = malloc(length);

	if (ptr == NULL)
		return (NULL);

	while (i < length)
	{
		ptr[i] = 0;
		i++;
	}
