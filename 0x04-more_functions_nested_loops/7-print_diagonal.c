#include "main.h"

/**
 * print_diagonal- Main function
 * @n: value
 *
 * Return: 0
 */
void print_diagonal(int n)
{
	int i, j;

	for (i = 0; i < n ; i++)
	{
		for (j = 0 ; j < i ; j++)
			_putchar('_');
		_putchar('\n');
	}
	_putchar('\n');
}
