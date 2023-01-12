#include "main.h"
#include <stdio.h>
/**
 * _abs - prints the absolute value of an integer
 * @n: Integer value
 * Return: Always 0
 */

int _abs(int n)
{
	if (n > 0)
		return (n);
	else
		return (n * -1);
}
