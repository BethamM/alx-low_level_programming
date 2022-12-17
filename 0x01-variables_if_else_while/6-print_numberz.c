#include <stdio.h>

/**
 * main - Print all single digit numbers of base 10
 * Without using any variable of type char
 * only using putchar function
 * Return: 0
 */

int main(void)
{
	int c;

	c = 0;
	while (c < 10)
	{
		putchar(c + '0');
		c++;
	}
	putchar('\n');
	return (0);
}
