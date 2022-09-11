#include <stdio.h>

int main(void) /* takes not arguments*/
{
char lower;
char upper;

 for (lower = 'a';lower<='z';lower++) /*for loop to print the alphabet in lowercase*/
{
putchar(lower);
}

 for (upper ='A';upper<='Z';upper++) /*for loop for printing the alphabet in uppercase*/
{
putchar(upper);
}
putchar('\n');
return 0;
}
