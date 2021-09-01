#ifndef HOLBERTON_H
#define HOLBERTON_H

#include <stdio.h>
#include <math.h>

/**
 * struct Complex - Struct for imaginary number
 * @re: Real number
 * @im: Imaginary number
 */

typedef struct Complex
{
	double re;
	double im;
} complex;

void display_complex_number(complex c);

#endif /* HOLBERTON_H */
