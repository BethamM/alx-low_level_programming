#include "main.h"
/**
 * _strcat - Concatenates two characters
 *
 * @dest: one of the strings
 * @src: one of the strings
 *
 * Return: a pointer to the resulting string dest
 */

char *strcat(char *dest, const char *src)
{
	int j = 0, i = 0;

	while (dest[j++])
		i++;
	for (j = 0; src[j]; j++)
		dest[i++] = src[j];
	return (dest);
}
