#include <stdio.h>

int main(void) /*prints single digit base 10 numbers*/
{
int i; /*variable for the natural numbers*/
for (i = 0; i < 10; i++) /*excludes 10 from the loop*/
{
putchar(i);
}
putchar('\n');
return (0);
}
