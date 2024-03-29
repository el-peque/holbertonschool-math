#include "holberton.h"

/**
 * complex_from_mod_arg - updates the real and the imaginary parts of a complex
 * number given its modulus and arguments
 * @m: modulus
 * @arg: argument
 * @c3: result
 */

void complex_from_mod_arg(double m, double arg, complex *c3)
{
	c3->re = tan(arg) * m;
	c3->im = sin(arg) * m;
}
