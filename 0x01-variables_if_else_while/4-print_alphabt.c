#include <stdio.h>

int main(void) /*main function for the program, takes no arguments*/
{
char lower; /*variable for lower case letters*/

for (lower = 'a'; lower <= 'z'; lower++)
{
if (lower != 'q' &&  lower != 'e') /*exclude letters q and e*/
{
putchar(lower);
}
}
putchar('\n'); /*new line follows the letters*/
return (0);
}
