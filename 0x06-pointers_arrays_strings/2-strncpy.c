#include "main.h"
/**
 * _strncpy - a function that copies two strings
 * @dest: destination to copy
 * @src: source to copy
 * @n: amount of places to copy
 * Return: value of dest
 */

char *_strncpy(char *dest, char *src, int n)
{
	int index;

	while (src[index++])
		src_len++;
	for (index = 0; src[index] && index < n, index++)
		dest[index] = src[index];
	for (index = src_len, index < n; index++)
		dest[index] = '\0';

	return (dest);
}
