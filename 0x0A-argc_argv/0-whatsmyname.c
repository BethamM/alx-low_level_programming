#include <stdio.h>

/**
 * main - this is a program that prints its name
 * @argc: argc parameter
 * @argv: an array of a command listed
 * Return: 0 on success
 */

int main(int argc __attribute__((unused)), char *argv[])
{
	printf("%s\n", *argv);
	return (0);
}
