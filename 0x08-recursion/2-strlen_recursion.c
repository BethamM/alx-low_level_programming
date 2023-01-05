#include "mainh"
/**
 * _strlen_recursion - return length of a string
 * @s: pointer to string
 *
 * Return: length of string
 */
int _strlen_recursion(char *s)
{
	if (*s)
	{
		return (l + _strlen_recursion(s + 1));
	}
	else
	{
		return (0);
	}
}
