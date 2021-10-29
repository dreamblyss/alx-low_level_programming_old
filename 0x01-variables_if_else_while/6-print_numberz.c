#include <stdio.h>
#include <stdlib.h>


 /**

  * main - Entry point

  *

  * Return: Always 0 (Success)

  * 

  */


int main(void)
{

 
  int num;
  char charVal;
 
  for(num = 0; num < 10; ++num)
  {
    charVal = num + '0';
    putchar(charVal);
  }

  putchar(0xA);

  return(0);

}
