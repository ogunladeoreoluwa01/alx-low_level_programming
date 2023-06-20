#include <stdio.h>
#include <stdlib.h>
#include "main.h"

int print_last_digit(int m)
{
	int j = m % 10;

	if (j < 0)
	j *= -1;
	_putchar(j + '0');
	return (j);
}
