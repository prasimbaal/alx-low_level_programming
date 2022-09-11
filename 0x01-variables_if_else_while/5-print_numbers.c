#include <stdio.h>

int main(void) /*prints single digit base 10 numbers*/
{
int i;
for (i = 0; i < 10; i++) /*excludes 10 from the loop*/
{
printf("%d",i);
}
putchar('\n');
return (0);
}
