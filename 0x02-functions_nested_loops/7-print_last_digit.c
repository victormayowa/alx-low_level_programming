#include "main.h"

/**
 * print_last_digit - check the code
 * @d: parameter
 * Return: value of d
 */
int print_last_digit(int d)
{
	int k;

	k = d % 10;
	if (d < 0)
		k = -k;
	_putchar(k);
	return (k);
}
