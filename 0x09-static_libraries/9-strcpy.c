#include "main.h"

/**
 * _strcpy - Function that copies the string pointed
 * @dest: This is destination
 * @src: copy
 *
 * Return: This return copy
 */

char *_strcpy(char *dest, char *src)
{
	char *start = dest;

	while (*src != '\0')
	{
		*dest = *src;
		dest++;
		src++;
	}
	*dest = '\0';
	return (start);
}
