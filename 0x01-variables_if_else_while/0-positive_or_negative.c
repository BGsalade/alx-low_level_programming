Minclude <time.h>
#include <stdio.h>
/**
*  * main - the function main be generate a random number a validate
*   *
*    * Return: Always 0 (Sucess)
*/
int main(void)
{
int n;
srand(time(0));
n = rand() - RAND_MAX / 2;
if (n > 0)
printf("%d is positive\n", n);
else if (n < 0)
printf("%d is negative\n", n);
else
printf("%d is zero\n", n);
return (0);
}
