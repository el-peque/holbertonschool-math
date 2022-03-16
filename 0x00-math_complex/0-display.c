#include "holberton.h"

/**
 * display_complex_number - displays the complex numbers
 * @c: complex number c
 */

void display_complex_number(complex c)
{
	if (c.re != 0)
	{
		printf("%lf", c.re);
		if (c.im != 0)
		{
			printf(" + ");
		}
	}
	if (c.im != 0)
	{
		printf("%lfi", c.im);
	}
	if (c.re != 0 || c.im != 0)
	{
		printf("\n");
	}
}