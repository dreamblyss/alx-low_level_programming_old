#include "main.h"
/**
 * print_diagonal - a fucntion that draws a diagonal line on the terminal
 * @n: input number of times '\' should be printed
 * Return: a diagonal
 */
void print_diagonal(int n)
{
int k, li;
if (n <= 0)
{
_putchar(0x0A);
}
else
{
for (k = 1; k <= n; k++)
{
for (li = 1; li < k; li++)
{
_putchar(' ');
}
_putchar('\\');
_putchar('\n');
}
}
}
