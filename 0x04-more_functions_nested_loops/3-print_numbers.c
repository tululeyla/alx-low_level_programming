#include"main.h"

/**
 * print_numbers - print 0 - 9
 * only using _putchar twice
 *
 * Return: Always 0 (Success)
 */

void print_numbers(void)
{
	int num = 0;
	do{
		_putchar(num + 48);
		num++;
	}
	_putchar('\n');
}
