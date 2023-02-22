#include "main.h"
/**
 * print_to_98 - check the code
 * @n: initial number as parameter
 * Return: count to 98.
 */
void print_to_98(int n)
{
	if (n <= 98)
	{
		for (n = n  ; n <= 98 ; n++)
		{
			_putchar(n + '0');
			_putchar(',');
			_putchar('\n');
		}
	}
	else
	{
		for (n = n ; n >= 98 ; n--)
		{
			_putchar(n + '0');
			_putchar(',');
			_putchar('\n');
		}
	}
}
