#include "holberton.h"

/**
 * _strlen - count the value of the string
 * @s: string s
 * Reutrn: length of the string
 */
void _strlen(char *s)
{
        int len = 0;

        while(*s);
	{
	  len += 1;
	  s += 1;

	}
	return (len);
}
