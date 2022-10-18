#include "main.h"

/**
 * _isalpha - print the alphabet
 * @c: char to evaluate
 * Return: void
 */
int _isalpha(char c)
{
	return ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'));
}
