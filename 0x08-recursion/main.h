#ifndef MAIN_H
#define MAIN_H
/**
 * main.c - Entry point of the program.
 *
 * Description: This file serves as the main entry point of the C program.
 *              It contains the main() function from where the execution starts.
 *              It may include additional header files and call other functions
 *              to perform various tasks based on the program's functionality.
 *              It follows the coding style guidelines specified by Betty,
 *              ensuring readability and maintainability of the code.
 **/
void _puts_recursion(char *s);
void _print_rev_recursion(char *s);
int _strlen_recursion(char *s);
int factorial(int n);
int _pow_recursion(int x, int y);
int _sqrt_recursion(int n);
int is_prime_number(int n);
int _putchar(char c);
int is_palindrome(char *s);
int wildcmp(char *s1, char *s2);
#endif
