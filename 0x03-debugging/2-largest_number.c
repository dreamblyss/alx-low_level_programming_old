#include "main.h"

/**
 * largest_number - returns the largest of 3 numers
 * @a: first number
 * @b: second integer
 * @c: third integer
 * Return: largest number
 */

int largest_number(int a, int b, int c)
{


  int largest = a;

  if(b > a && b > c)
  {
    largest = b;
  }
  else if(c > a && c > b)
  {
    largest = c;
  }  

  
  return (largest);

}  
