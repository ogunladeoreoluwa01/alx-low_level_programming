#include <stdio.h>
#include <stdlib.h>
#include "main.h"

int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);

	}
	else if (n < 0)
	{
		int x = -1;

		_putchar('-');
		return (x);
	}
	else
	{
		_putchar('0');
		return (0);
	}
}
