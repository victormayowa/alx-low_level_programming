#include "main.h"
/**
* print_most_numbers - returns the largest of 3 numbers
* Return: largest number
*/
void print_most_numbers(void)
{
	int x = 0;

	for (; x <= 9; x++)
	{
		if (x == 2 || x == 4)
		{
			continue;
		}
		else
			_putchar(x + '0');
	}
	_putchar('\n');
}
