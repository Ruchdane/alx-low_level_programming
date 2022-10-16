#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - Main function
 *
 * Return: 0
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	printf("%d ", n);
	if (n == 0)
		printf("is zero\n");
	else if (n > 0)
		printf("is positive\n");
	else
		printf("is negative\n");
	return (0);
}
