#include "main.h"

/**
 * print_to_98 - print the alphabet
 *
 * @n: char to evaluate
 *
 * Return: void
 */
void print_to_98(int n)
{
	int i;

	if (n < 98)
		for (i = n; i < 98; i++)
			printf("%d, ", i);
	else
		for (i = n; i > 98; i--)
			printf("%d, ", i);
	printf("98\n");
}