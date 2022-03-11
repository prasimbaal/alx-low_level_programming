#include <stdio.h>

int main(void)
{
    char long_int = "long int";
    char long_long = "long long int";
    char float = "float";
    printf("Size of a char: 1 byte(s)\n");
    printf("Size of an int: 4 byte(s)\n);
    printf("Size of a %s: 4 byte(s)\n",long_int);
    printf("Size of a %s: 8 byte(s)\n", long_long);
    printf("Size of a %s: 4 byte(s)\n",float);
}
