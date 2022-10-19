#include "main.h"

/**
 * print_sign - checks if a number is zero, positive or negative
 * @n : number to check
 * Return: int
 */

int print_sign(int n)
{
int test;

if (n > 0)
{
	test = 1;
	_putchar('+');
}
else if (n == 0)
{
	test = 0;
	_putchar('0');
}
else
{
	test = -1;
	_putchar('-');
}

return (test);
}
