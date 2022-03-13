#include <stdio.h>

int main(void) /*outputs the size of variable in c*/
{
    printf("Size of a %s: 1 byte(s)\n", "char");
    printf("Size of an %s: 4 byte(s)\n", "int");
    printf("Size of a %s: 4 byte(s)\n", "long int");
    printf("Size of a %s: 8 byte(s)\n", "long long int");
    printf("Size of a %s: 4 byte(s)\n", "float");
    return (0);
}
