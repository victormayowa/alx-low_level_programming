#include "main.h"

/**
 * _islower - check the code.
 *
 *@c: parameter
 * Return: 1 if correct,0 if .
 */
int _islower(int c)
{
	if (c >= 97 && c <= 122)
		return (1);
	else
		return (0);
}
