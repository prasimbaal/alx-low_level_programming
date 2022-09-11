#include <stdio.h>

int main(void)
{

char lower; /*variable that will hold the lowercase letters*/
for (lower = 'z'; lower >= 'a'; lower--) /*reverses the order z - a*/
{
putchar(lower);
}
putchar('\n');
return (0);
}
