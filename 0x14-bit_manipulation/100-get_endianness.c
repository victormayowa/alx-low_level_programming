#include "main.h"

/**
  * get_endianness - check for endianess of a system which refers to the byte
  * order in which a multibyte value is stored in the memory. there are two
  * types of endianess: big-endian and little-endian
  * in BE: the most significant byet is stored in the  lowest memory address
  * wbbhile the least SB is stored at the  highest memory address. ordered left
  * to right.
  * LE is vice-versa to BE.
  * Return: 0 if big endian and 1 if little endian
  */
int get_endianness(void)
{
	unsigned int x = 0x76543210;
	char *c;

	c = (char *) &x;
	return ((int) *c);
}

