#include <stdio.h>

int main(void)
{
  int i = 1;

  while(i<100)
    {
      if(i%3!=0 && i%5 != 0)
	{
	  printf("%d",i);
	}
      else
	{
	  if(i%5==0 && i%3==0)
	    {
	      printf("FizzBuzz");
	    }
	  else
	    {
	      if(i%3==0)
		printf("Fizz");
	      if(i%5==0)
		printf("Buzz");
	    }
	}
      printf(" ");
      i++;
    }
  putchar('\n');
}
