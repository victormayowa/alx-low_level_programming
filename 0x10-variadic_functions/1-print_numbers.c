#include <stdio.h>
#include "variadic_functions.h"
#include <stdarg.h>

/**
 * print_numbers - check the code for Holberton School students.
 * @n: number of arguments
 * @separator: character separator of numbers
 * Return: Always 0.
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list list;

	if (separator == NULL)
	{
		separator = "";
	}

	va_start(list, n);

	for (i = 0; i < (n - 1); i++)
	{
		printf("%d%s", va_arg(list, int), separator);
	}
	printf("%d\n", va_arg(list, int));
	va_end(list);
}
