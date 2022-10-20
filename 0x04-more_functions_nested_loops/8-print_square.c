#include "main.h"

/**
 * print_square- Main function
 * @n: value
 *
 * Return: 0
 */
void print_square(int n)
{
	int i, j;

	for (i = 0; i < n ; i++)
	{
		for (j = 0 ; j < n ; j++)
			_putchar('#');
		_putchar('\n');
	}
	_putchar('\n');
}
