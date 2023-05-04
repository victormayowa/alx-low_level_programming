#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
  * get_bit - returns a value oof a bit at  a given index
  * @n: number
  * @index: the index
  * Return: the value of the bit at index index or -1 if error occured
  */

int get_bit(unsigned long int n, unsigned int index)
{
	unsigned long int mask;

	if (index >= sizeof(unsigned long int) * 8)
		return (-1);
	mask = 1UL << index;
	return ((n & mask) != 0);
}
