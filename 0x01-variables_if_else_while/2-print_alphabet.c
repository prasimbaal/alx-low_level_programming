#include <stdio.h>

int main(void) /*takes no arguments*/
{
char alphabet; /* variable for alphabets*/

for (alphabet = 'a'; alphabet <= 'z'; alphabet++)
{
putchar(alphabet);
putchar('\n');
}
return (0);
}
