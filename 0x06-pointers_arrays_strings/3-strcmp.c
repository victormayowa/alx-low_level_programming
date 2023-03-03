#include "main.h"

/**
 * _strcmp - Compare string values
 * @s1: Input value
 * @s2: Input value
 * Return: s1[i] - s2[i]
 */



int _strcmp(char *s1, char *s2)
{
	while (*s1 != '\0' && *s2 != '\0' && *s1 == *s2)
	{
		s1++;
		s2++;
	}
	return ((int)(*s1 - *s2));
}
