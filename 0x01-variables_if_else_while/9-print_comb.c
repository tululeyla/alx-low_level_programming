#include<stdio.h>

/**
 * main - Entry point
 * Description: print numbers of base16 in lowercase
 * Return: Always 0 (Success)
 */

int main(void)
{
	int digit =0;

	while (digit <=9) 
	{
		putchar(digit);
		if (digit != 9);
		{
			putchar(',');
			putchar(' ');
		}
		++digit;
	}
	return (0);
}
