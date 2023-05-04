#include <stdio.h>
#include "main.h"

/**
  * set_bit - sets the value of s bit to 1 at a given index
  * @n: pointer to an unsignned long int
  * @index: index argumet
  * Return: returns 1 for success and errors
  */

int set_bit(unsigned long int *n, unsigned int index)
{
	if (index >= sizeof(unsigned long int) * 8)
		return (-1);
	*n = *n | (1UL << index);
	return (1);
}
