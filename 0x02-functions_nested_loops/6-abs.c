#include "main.h"
/**
 * _abs - a function that computes the absolute value of an  integer
 *@abs: integer input
 * Return: absolute value of b
 */
int _abs(int h)
{
int result;
if (h > 0)
{
result = (h - 0);
return result;
}
else if(h < 0)
{
result = (0 - h);
return result;
}
else
{
result = 0;
return result;
}  
}
