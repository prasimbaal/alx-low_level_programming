#include <stdio.h>

int main(void)
{
int i;
int j;
int n = 0;
for (i = 48; i < 58; i++)
{
for (j = 48; j < 58; j++)
{
int k = j + n;
if (i != k && k < 58) /*if k>58 it hoes beyond numbers*/
{
putchar(i);
putchar(k);
if (i < 56) /*because 56 == 8*/
{
putchar(44);
putchar(32);
}
}
}
n++; /*incrementing on intiger n*/

}
putchar('\n');
return (0);
}
