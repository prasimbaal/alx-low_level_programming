#include "main.h"

void print_alphabet_x10(void)
{
  int i;
  char alphabet;

  i = 0;
  while(i<11)
    {
      for(alphabet = 'a';alphabet<='z';alphabet++)
	{
	  putchar(alphabet);
	}
      putchar('\n');
      i++;
    }
}
