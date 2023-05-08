#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
  * binary_to_uint - converts a binary number to an unsigned_int
  * @b: points to the address of a string of 0 and 1 chars
  * Return: converted number or 0 if there is one/more chars in the string b
  * that is not 0 or 1 or when b is NULL.
  */

unsigned int binary_to_uint(const char *b)
{
	unsigned int res = 0;

	if (b == NULL)
		return (0);
	while (*b != '\0')
	{
		if (*b != '0' && *b != '1')
			return (0);
		res = (res << 1) + (*b - '0');
		b++;
	}
	return (res);
}
