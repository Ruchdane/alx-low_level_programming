#include "main.h"

/**
 * print_last_digit- print the alphabet
 * @n: char to evaluate
 * Return: void
 */
int print_last_digit(int n)
{
	int last = (n >= 0 ? n % 10 : -n % 10);

	_putchar('0' + last);
	return (last);
}
