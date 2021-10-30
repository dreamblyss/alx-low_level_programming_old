#include<stdio.h>
#include<stdlib.h>

int main(void)
{

  int k;

  for(k = 'z'; k >= 'a'; --k)
  {

    putchar(k);

  }  

  putchar(0xA);

  return(0);

}
