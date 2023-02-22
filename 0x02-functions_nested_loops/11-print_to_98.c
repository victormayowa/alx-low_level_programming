#include "main.h"
#include <stdio.h>
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
			printf("%d, ", n);
			_putchar('\n');
		}
	}
	else
	{
		for (n = n ; n >= 98 ; n--)
		{
			printf("%d, ", n);
			_putchar('\n');
		}
	}
}
