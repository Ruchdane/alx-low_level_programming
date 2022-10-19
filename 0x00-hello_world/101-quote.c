#include<stdio.h>

/**
 * main - Main function
 *
 * Return: 0
 */
int main(void)
{
	const char string1[] = "and that piece of art is useful\"";
	const char string2[] = " - Dora Korpar, 2015-10-19\n";

	fprintf(stdout,"%s%s", string1,string2);
	return (1);
}
