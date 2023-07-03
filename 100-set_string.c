#include "main.h"
#include <stdio.h>
/**
 * set_string - Sets the value of a char pointer
 * @s: Pointer to the variable to modify
 * @to: Pointer to the value to assign
 *
 * Description: This function sets the value of a char pointer to the value
 *              pointed to by another char pointer.
 *
 * Return: None
 */
void set_string(char **s, char *to)
{
  *s = to;
}
