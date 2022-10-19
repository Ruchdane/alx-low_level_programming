#include<stdio.h>
#include <unistd.h>
#include <sys/syscall.h>

/**
 * main - Main function
 *
 * Return: 0
 */
int main(void)
{
	const char string1[] = "and that piece of art is useful\"";
	const char string2[] = " - Dora Korpar, 2015-10-19\n";

	syscall(SYS_write, 1, string1, sizeof(string1));
	syscall(SYS_write, 1, string2, sizeof(string2));
	return (1);
}
