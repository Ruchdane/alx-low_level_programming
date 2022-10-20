#include "main.h"

/**
 * print_numbers- Main function
 *
 * Return: 0
 */
void print_numbers(void)
{
	int i, j;

	for (i = 0; i < 10 ; i++)
		for (j = 0; j < 15 ; j++)
		{
			if (j > 9)
				putchar('1');
			putchar('0' + j % 10);
		}
	putchar('\n');
}
