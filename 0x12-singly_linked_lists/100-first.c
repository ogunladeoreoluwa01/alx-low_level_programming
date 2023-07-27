#include <stdio.h>
#include <stdlib.h>
#include "lists.h"
#include <unistd.h>
/**
 * first - prints a sentence before the main
 * function is executed
 */

void func_before_main(void) __attribute__((constructor));
void func_before_main(void)
{
	printf("You're beat! and yet, you must allow,\n");
	printf("I bore my house upon my back!\n");
}
