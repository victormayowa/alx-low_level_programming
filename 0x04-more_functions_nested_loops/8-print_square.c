#include "main.h"
/**
* print_square - returns the largest of 3 numbers
* @size: first integer
* Return: largest number
*/
void print_square(int size)
{
	int x, z;

	if (size <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (x = 0; x < size; x++)
		{
			for (z = 0; z < size; z++)
			{
				_putchar(35);
			}
			_putchar('\n');
		}
	}
}
