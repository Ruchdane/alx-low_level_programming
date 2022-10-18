#include "main.h"

/**
 * main - THe main function
 *
 * Return: 0
 */
int main(void)
{
	char *string = "_putchar\n";
	int i;

	for (i = 0; i < 8; i++)
		_putchar(string[i]);
	return (0);
}
