#include <stdio.h>
#include "main.h"
/**
 * _strcmp - Compares two strings.
 *
 * Description: This function compares the string pointed to by 's1' with the
 *              string pointed to by 's2'. It compares the corresponding
 *              characters of both strings until a difference is found or
 *              the end of either string is reached. The comparison is based
 *              on the ASCII value of the characters.
 *
 * @s1: The first string to be compared.
 * @s2: The second string to be compared.
 *
 * Return: An integer value indicating the comparison result. If the strings
 *         are equal, it returns 0. If 's1' is greater than 's2', it returns a
 *         positive value. If 's1' is less than 's2', it returns a negative
 *         value.
 */
int _strcmp(char *s1, char *s2)
{
	int i, j;

	i = 0;
	j = 0;

	while (j == 0)
	{
		if ((*(s1 + i) == '\0') && (*(s2 + i) == '\0'))
			break;
		j = *(s1 + i) - *(s2 + i);
		i++;
	}
	return (j);
}
