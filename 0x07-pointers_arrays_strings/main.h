#ifndef MAIN_H
#define MAIN_H

/* Function: _memset
 * Description: Sets a block of memory to a specific character
 * Parameters:
 *   - s: Pointer to the memory block to be set
 *   - b: Character to set the memory block with
 *   - n: Number of bytes to set
 * Return: Pointer to the memory block 's'
 */
char *_memset(char *s, char b, unsigned int n);

/* Function: _memcpy
 * Description: Copies a memory area from source to destination
 * Parameters:
 *   - dest: Pointer to the destination memory area
 *   - src: Pointer to the source memory area
 *   - n: Number of bytes to copy
 * Return: Pointer to the destination memory area 'dest'
 */
char *_memcpy(char *dest, char *src, unsigned int n);

/* Function: _strchr
 * Description: Locates the first occurrence of a character in a string
 * Parameters:
 *   - s: The string being checked
 *   - c: The character to find
 * Return: Pointer to the first occurrence of the character in the string, or NULL if not found
 */
char *_strchr(char *s, char c);

/* Function: _strspn
 * Description: Calculates the length of a prefix substring
 * Parameters:
 *   - s: The string to be checked
 *   - accept: The criteria
 * Return: Length of the prefix substring if successful, or 0 if no matches found
 */
unsigned int _strspn(char *s, char *accept);

/* Function: _strpbrk
 * Description: Searches a string for any of a set of bytes
 * Parameters:
 *   - s: Source string to search
 *   - accept: Accepted characters
 * Return: Pointer to the location of the first found accepted character in the string, or NULL if no matches are found
 */
char *_strpbrk(char *s, char *accept);

/* Function: _strstr
 * Description: Locates a substring within a string
 * Parameters:
 *   - haystack: The string to search
 *   - needle: The substring to find
 * Return: Pointer to the beginning of the substring within the string, or NULL if not found
 */
char *_strstr(char *haystack, char *needle);

/* Function: print_chessboard
 * Description: Prints the chessboard pattern
 * Parameters:
 *   - a: Array of pieces representing the chessboard
 * Return: None
 */
void print_chessboard(char (*a)[8]);

/* Function: print_diagsums
 * Description: Prints the sums of the diagonals in an array
 * Parameters:
 *   - a: Array
 *   - size: Size of the array
 * Return: None
 */
void print_diagsums(int *a, int size);

/* Function: _strlen
 * Description: Calculates the length of a string
 * Parameters:
 *   - s: The string
 * Return: Length of the string
 */
int _strlen(char *s);

/* Function: set_string
 * Description: Sets the value of a pointer to char
 * Parameters:
 *   - s: Pointer to the value to modify
 *   - to: Pointer to the value to assign
 * Return: None
 */
void set_string(char **s, char *to);

/* Function: _putchar
 * Description: Writes a character to the standard output
 * Parameters:
 *   - c: The character to be written
 * Return: On success, the character written. On error, -1 is returned
 */
int _putchar(char c);

#endif /* MAIN_H */

/* End of main.h */
