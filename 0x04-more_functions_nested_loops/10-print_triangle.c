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
			putchar(i > n - j - 1 ? '#' : ' ');
		putchar('\n');
	}
	putchar('\n');
}
