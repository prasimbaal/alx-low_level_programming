#include <stdio.h>

int main(void) // takes not arguments
{
char lower;
char upper;

for (lower = 'a';lower<='z';lower++) //for loop to iterate the alphabet in lowercase
{
putchar(lower);
}

for (upper ='A';upper<='Z';upper++) //for loop for iterating the upper case alphabets
{
putchar(upper);
}
putchar('\n');
return 0;
}
