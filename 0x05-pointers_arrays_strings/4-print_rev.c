#include "holberton.h"

/**
 * print_rev - prints a string followed by new line in reverse
 * @s: string s
 */
int _strlen(char *s)
{
  char *p = s;

  while (*s)
    s++;
  return (s-p);
}
void print_rev(char *s)
{
  int len = _strlen(s);

	while (len)
	{
	  _putchar(*(s + len));
	  len -=1;
	}
	
	_putchar('\n');
}
