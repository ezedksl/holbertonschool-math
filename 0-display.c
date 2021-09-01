#include "holberton.h"

/**
 * display_complex_number - Display complex number
 * @c: 'complex' struct of numbers
 **/

void display_complex_number(complex c)
{
	if (c.im && c.re)
		printf("%d + %di\n", (int)c.re, (int)c.im);
	else
	{
		if (c.im)
			printf("%di\n", (int)c.im);
		else
			printf("%d\n", (int)c.re);
	}
}
