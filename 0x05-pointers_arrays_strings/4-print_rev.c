#include <stdio.h>
#include <string.h>

void print_rev(char *s)
{
int len; /*for string length */
int index; /*for pointing elements in the buffer*/
char *start_ptr, *end_ptr, tmp;
len = strlen(s);
start_ptr = s;
end_ptr = s+len-1;
for (index = 0; index<len/2; index++){
     tmp = *end_ptr;
     *end_ptr = *start_ptr;
     *start_ptr = tmp;
     start_ptr++;
     end_ptr--;
 }
}
