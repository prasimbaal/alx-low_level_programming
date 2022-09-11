#include <stdio.h>

int main(void) /* takes not arguments*/
{
char lower;
char upper;
for (lower = 'a'; lower <= 'z'; lower++) /*loop to print alphabet in lowercase*/
{
putchar(lower);
}
for (upper = 'A'; upper <= 'Z'; upper++) /*to print alphabet in uppercase*/
{
putchar(upper);
}
putchar('\n');
return (0);
}
