#include "main.h"
/**
 * main - entry point
 *
 * Return: zero
 */
int main(void)
{
char string[] = "_putchar";
int i = 0;
for (; i < 8; i++)
{
_putchar(string[i]);
}
_putchar('\n');
return (0);
}
