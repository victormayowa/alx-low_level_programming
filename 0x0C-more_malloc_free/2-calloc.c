#include "main.h"
#include <stdlib.h>

/**
 * _calloc - ....
 * @nmemb: number of memory
 * @size: size
 *
 * Return: ...
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *ptr = malloc(sizeof(nmemb * size));
	unsigned int i = 0;

	if (nmemb == 0 || size == 0)
		return (NULL);
	if (ptr == NULL)
		return (NULL);

	while (i < (nmemb * size))
	{
		ptr[i] = 0;
		i++;
	}

	return (ptr);

}
