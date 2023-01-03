#include "main.h"

/**
 * _isupper - uppercse letters
 * @c: char to check
 *
 * Return: 0 or 1
 */

int _isupper(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}
