#include "main.h"
/**
<<<<<<< HEAD
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
=======
* print_diagonal - a function that draws a diagonal line on the terminal
* @n: input number of times '\' should be printed
* Return: a diagonal
*/
void print_diagonal(int n)
{
if (n <= 0)
{
_putchar('\n');
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
>>>>>>> a5d162e5fde0c6ed07d5090a8e3382ca656ea97c
_putchar('\n');
}
}
}
