#include "holberton.h"

/**
 * _strlen_recursion - prints a string length.
 * @s: string to be printed
 */
int _strlen_recursion(char *s)
{
	return (1 + _strlen_recursion(++s));
}
