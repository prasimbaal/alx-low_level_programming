#include <stdlib.h>
#include <time.h>
/* more headers goes there */

/* betty style doc for function main goes there */
/*main function prints out a random given numbers sign value*/
int main(void)
{
int n;

srand(time(0));
n = rand() - RAND_MAX / 2;
/* your code goes there */

if (n < 0)
	printf("is negative \n");
else if (n == 0)
	printf("is zero\n");
else
  	printf("is positive \n");   
   
return (0);
}
