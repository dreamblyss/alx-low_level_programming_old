<<<<<<< HEAD
#include <stdio.h>
#include "main.h"
/**
 * more numbers - prints 10 times the numbers, from 0 t0 14
 * followed by a new line
 */
void more_numbers(void)
{
int i, k;
for (i = 1; i <= 10; i++)
{
for (k = 0; k <= 14; k++)
{
if (k >= 10)
{
_putchar((k / 10) + '0');  
}
_putchar((k % 10) + '0');
=======
#include "main.h"
#include <stdio.h>
/**
* more_numbers - a function that prints 10 times the numbers, from 0 to 14
* _putchar only 3 times
* Return: 0-14 x10 followed by a new line
*/
void more_numbers(void)
{
int l1, l2;
for (l1 = 1; l1 <= 10; l1++)
{
for (l2 = 0; l2 <= 14; l2++)
{
if (l2 >= 10)
{
_putchar((l2 / 10) + '0');
}
_putchar((l2 % 10) + '0');
>>>>>>> e7ef6954f5e3e705b8c18f4c1931f46a1f738865
}
_putchar(0x0A);
}
}
