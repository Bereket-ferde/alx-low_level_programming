#include "holberton.h"

/**
 * print_rev - prints a string followed by new line in reverse
 * @s: string s
 */
void print_rev(char *s)
{
        int length = 0;

	while (*s)
	{
		length += 1;
		s += 1;
	}

	while (*s)
	{
	  _putchar(*s+length);
	  s += 1;
	  length -=1;
	}
	
	_putchar('\n');
}
