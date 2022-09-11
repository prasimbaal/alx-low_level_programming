#include <stdio.h>

int main(void)
{
int i; /*numbers variable*/
char lower; /*lowercase variable*/
for (i = '0'; i <= '9'; i++)
{
putchar(i);
}
for (lower = 'a'; lower <= 'f'; lower++)
{
putchar(lower);
}
putchar('\n');
return (0);
}
