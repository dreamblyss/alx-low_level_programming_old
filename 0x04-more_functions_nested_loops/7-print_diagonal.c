#include "main.h"
/**
* print_diagonal - a function that draws a diagonal line on the terminal
* @n: input number of times '\' should be printed
* Return: a diagonal
*/
void print_diagonal(int n)
{
if (n <= 0)
{
_putchar(0x0A);
}
else
{
int i , j;
for (i = 0 ; i < n; i++)
{
for (j = 0; j < n; j++)
{
if (j == i)
{
_putchar('\\');
}
else if (j < i)
{
_putchar(' ');
}
}
_putchar(0x0A);
}
}
}
