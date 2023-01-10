#include <stdio.h>
#include <stdlib.h>
/**
 * main - program that multiples two numbers
 * @argc: argc parameter
 * @argv: an array of a command listed
 * Return: 0 on success
 */

int main(int argc, char *argv[])
{
	int num1, num2;
	int prod = 0;

	if (argc != 3)
	{
		printf("%s\n", "Error");
		return (1);
	}
	num1 = atoi(argv[1]);
	num2 = atoi(argv[2]);
	prod = num1 * num2;

	printf("%d\n", prod);
	return (0);
}
