#include <stdio.h>

int main(void)
{
	int num1, num2;

	for (num1 = 0; num1 < 1024; num1++)
	{
		if ((num1 % 3 == 0) || (num1 % 5 == 0))
			num2 += num1;
	}
	printf("%d\n", num2);
	return (0);
}
