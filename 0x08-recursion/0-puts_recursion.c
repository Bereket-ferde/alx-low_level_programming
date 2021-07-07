#include "holberton.h"

/**
 * _puts_recursion - print the given character
 * *s - points the value of the given character
 */
void _puts_recursion(char *s)
{
        if (*s == '\0')
        {
              _putchar('\n');
                return;
        }
        _putchar(*s);
        _puts_recursion(++s);
}
