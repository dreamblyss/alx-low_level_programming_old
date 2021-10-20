#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main -entry point
 * program shows if output is positive, negative or zero
 * return: Always 0 (Success)
 */

int main(void){
int n;
srand(time(0));
n = rand() - RAND_MAX / 2;
/* Code */
if(n > 0){
printf("%d is positive \n", n);
}
else if(n == 0)
{
printf("%d is zero \n", n );
}
else {
printf("%d is negative \n", n);
}
return 0;
}
