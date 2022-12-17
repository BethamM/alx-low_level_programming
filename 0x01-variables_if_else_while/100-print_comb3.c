#include <stdio.h>

/**
 * main - Prints all possible different combinations of two digits
 *
 * Return: 0
 */

int main(void)
{
	int a;

	for (a = 0; a < 100; a++)
	{
		putchar();
		if (a < 99)
		{
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}
