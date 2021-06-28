#include "holberton.h"

/**
 * _puts - prints a string followed by new line
 * @str: string str
 */
void _puts(char *str)
{
	while (*str)
	{
	        _putchar(*str);
		str += 1;
	}
	_putchar('\n');
}
