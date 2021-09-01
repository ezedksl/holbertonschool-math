#include "holberton.h"

void display_complex_number(complex c)
{
    if (c.im && c.re)
        printf("%d + %di\n", c.re, c.im);
    else
    {
        if (c.im)
            printf("%di\n", c.im);
        else
            printf("%d\n", c.re);
    }
}