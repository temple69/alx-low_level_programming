#include "main.h"
/**
 * print_alphabet_x10 - prints the alphabets 10 times
 *
 * Return: void
 */
void print_alphabet_x10(void)
{
int i = 0;
for (; i < 10; i++)
{
char alphabet = 'a';
for (; alphabet <= 'z'; alphabet++)
{
_putchar(alphabet);
}
_putchar('\n');
}
}
