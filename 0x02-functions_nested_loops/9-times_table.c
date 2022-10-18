#include "main.h"

/**
 * times_table - print the alphabet
 *
 * Return: void
 */
void times_table(void)
{
	int i, j;

	for (i = 0; i < 10; i++)
	{
		for (j = 0; j < 10; j++)
		{
			if (j)
				printf(", ");
			if (!((i * j) / 10) && j != 0)
				printf(" ");
			printf("%d", i * j);
		}
		printf("\n");
	}
}
