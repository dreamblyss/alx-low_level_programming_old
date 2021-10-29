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
  //  char charVal;
 
  for(num = '0'; num < '9'; ++num)
  {
    //charVal = num + '0';
    putchar(num);
  }

  putchar(0xA);

  return(0);

}
