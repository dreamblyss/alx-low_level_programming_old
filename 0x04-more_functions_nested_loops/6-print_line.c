#include "main.h"
/**
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


}
