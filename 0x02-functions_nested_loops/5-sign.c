#include "main.h"

/**
 * print_sign- print the alphabet
 * @n: char to evaluate
 * Return: void
 */
int print_sign(int n)
{
	int value = 0;
	char signe = '0';

	if (n > 0)
	{
		value = 1;
		signe = '+';
	}
	else if (n < 0)
	{
		value = -1;
		signe = '-';
	}
	_putchar(signe);
	return (value);
}
