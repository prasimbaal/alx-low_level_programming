#include "main.h"
/*

int main()
{
  print_alphabet();
  putchar('\n');
  return 0;
}
*/
void print_alphabet(void)
{
  char alphabet;
  for (alphabet = 'a'; alphabet <= 'z'; alphabet++)
    putchar(alphabet);

  putchar('\n');
}
