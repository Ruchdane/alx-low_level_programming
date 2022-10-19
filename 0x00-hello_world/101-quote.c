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
	const char string[] = "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n";
	syscall(SYS_write, 1, string, sizeof(string));
	return (1);
}
