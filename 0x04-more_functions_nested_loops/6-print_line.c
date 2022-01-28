#include "main.h"
/**
<<<<<<< HEAD
 * print_line - draws a straight line in the terminal
 * @numline: number of times the character should be printed
 */
void print_line(int numline)
{
  if(numline <= 0)
  {
    _putchar(0x0A);
  }

  else{
  while(numline > 0)
  {
    _putchar('_');
    numline++;
  }

  _putchar(0x0A);
}


=======
* print_line - draws a straight line in the terminal
* @n: number of times the character should be printed
*/
void print_line(int n)
{
int k;
if (n <= 0)
{
_putchar(0x0A);
}
else
{
for (k = 1; k <= n; k++)
{
_putchar('_');
}
_putchar(0x0A);
}
>>>>>>> a5d162e5fde0c6ed07d5090a8e3382ca656ea97c
}
