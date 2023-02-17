#include <stdio.h>
/**
* main-prints all single digit numbers of base 10 starting from 0
* Return: 0
*/

int main(void)
{
	int c;

	while (c < 10)
	{
		putchar(c + '0');
		c++;
	}
	putchar('\n');
	return (0);
}
