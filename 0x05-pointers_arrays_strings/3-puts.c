#include "holberton.h"

/**
 * _puts- prints out to stdout with new line
 * @str: checked
 * Return:nothing
 */

void _puts(char *str)
{
while (*str != '\0')
{
	_putchar(*str);
	str++;
}
	_putchar('\n');
}
