#include "main.h"

/**
  * flip_bits - returns a number of bitsyou would need to flip to get from one
  * number to another
  * @n: the number
  * @m: another number
  * the goal is to count the number of bits  that differ between the two numbs
  * the first step is to compute the XOR of n and m
  * we then initialize the couter to 0 and loop over the bits the XOR result
  * Return: unsigned int different between n and m
  */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned int count;
	unsigned long int xor;

	count = 0;
	xor = n ^ m;

	while (xor != 0)
	{
		count += xor & 1;
		xor >>= 1;
	}
	return (count);
}
