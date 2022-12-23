#include <string.h>
#include "main.h"

/**
 * _strncat - concatinates two s strings using n bytes
 *
 * @dest: The destination string
 * @src: The source string
 * @n: The number of bytes contained in the source
 *
 * Return: A pointer to the resulting string
 */

char *_strncat(char *dest, char *src, int n)
{
	int index = 0, dest_len = 0;

	while (dest[index++])
		dest_len++;
	for (index = 0; src[index] && index < n; index++)
		dest[dest_len++] = src[index];
	return (dest);
}
