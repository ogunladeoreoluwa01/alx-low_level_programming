#include <stdio.h>
#include <stdlib.h>
#include "main.h"

 
void print_to_98(int n)
{
	for (n = n; n <= 97; n++)
	{
		printf("%d", n);
		if (!(n == 98))
		{
			printf(", ");
		}
		if (n == 98)
			continue;
	}
	for (n = n; n >= 98; n--)
	{
		printf("%d", n);
		if (!(n == 98))
		{
			printf(", ");
		}
	}
	printf("\n");
}

