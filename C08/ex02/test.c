#include <stdio.h>
#include "ft_abs.h"

int main(void)
{
    int a = -42;
    int b = 17;
    int c = 0;

    printf("ABS(%d) = %d\n", a, ABS(a)); // 42
    printf("ABS(%d) = %d\n", b, ABS(b)); // 17
    printf("ABS(%d) = %d\n", c, ABS(c)); // 0

    return 0;
}
