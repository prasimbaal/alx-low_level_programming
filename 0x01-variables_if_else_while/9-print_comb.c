#include <stdio.h>

int main(void)
{

int i = 48; /*ASCII number 48*/
while (i < 58) /*ASCII number 58*/
{
putchar(i);
if (i < 57)
{
putchar(44);
putchar(32);
}
i++;
}
putchar('\n');
return (0);
}
