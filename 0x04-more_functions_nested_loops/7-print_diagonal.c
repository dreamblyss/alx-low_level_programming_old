#include "main.h"
/**
 * print_diagonal - a function that draws a diagonal line on the terminal
 * @n: input number of times '\' should be printed
 * Return: a diagonal
 */
void print_diagonal(int n)
{
int dg, dgl;
if (n <= 0)
{
_putchar(0x0A);
}
else
{
for (dg = 1; dg <= n; dg++)
{
for(dgl = 1; dgl <= dg; dgl++)
{
_putchar(' ');
}
_putchar('\\');
_putchar(0x0A);
}
}
}
