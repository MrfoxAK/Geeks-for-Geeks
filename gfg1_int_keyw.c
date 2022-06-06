#include<stdio.h>
#include <limits.h>
int main()
{
    int i = 1;
    printf("%d %d %d\n", ++i, i++, i);
    printf("max int value %d\n",INT_MAX);
    printf("min int value %d\n", INT_MIN);
    printf("Size of int: %zu\n", sizeof(int));
    printf("Size of int in bits: %zu\n", sizeof(int)* CHAR_BIT);
    printf("UINT_MAX + 1 = %u", UINT_MAX + 1);

    return 0;
}