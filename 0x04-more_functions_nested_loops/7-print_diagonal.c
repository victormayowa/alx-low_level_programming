#include "main.h"
/**
* print_diagonal - returns the largest of 3 numbers
* @n: first integer
* Return: largest number
*/
void print_diagonal(int n)
{
	int x, z;

	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (x = 0; x < n; x++)
		{
			for (z = 0; z < x; z++)
			{
				_putchar(32);
			}
			_putchar(92);
			_putchar('\n');
		}
	}
}

