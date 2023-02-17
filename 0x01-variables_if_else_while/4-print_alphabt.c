#include <stdio.h>
/**
* main- prints the alphabet in lowercase, followed by a new line.
* Print all the letters except q and e
* Return: 0
*/
int main(void)
{
	char i;

	for (i = 'a' ; i <= 'z' ; i++)
		if (i != 'q' || 'e')
		putchar(i);
	putchar('\n');
	return (0);
}
