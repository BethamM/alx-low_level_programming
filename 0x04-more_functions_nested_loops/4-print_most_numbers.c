#include "main.h"

/**
 * *print_most_numbers - checks for checks for a digit (0 through 9)
 *
 * Retuen: Always 0
 */

void print_most_numbers(void)
{
	int n = 0;

	while (n < 10)
	{
		if (n != 2 && n != 4)
			_putchar(n + '0');
		n += 1;
	}
	_putchar('\n');
}
