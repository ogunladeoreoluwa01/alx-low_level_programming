#ifndef MAIN_H
#define MAIN_H
#include <stdio.h>
/*
 * main.h
 *
 * Description: Header file for the corresponding source file. It includes
 *              function prototypes for various string manipulation functions
 *              and other utility functions.
 *
 * Header guards are used to prevent multiple inclusions of the header file.
 * The included functions cover tasks such as string concatenation, string
 * comparison, string copying, array reversal, character transformations, and
 * more. Additionally, there are functions for printing a buffer, performing
 * infinite addition of large numbers, printing an integer, and applying the
 * ROT13 cipher.
 *
 * The functions declared in this header file can be used by including this
 * header in a C source file where they are needed.
 *
 * Author: Ogunlade oreoluwa
 */
int _putchar(char c);
char *_strcat(char *dest, char *src);
char *_strncat(char *dest, char *src, int n);
char *_strncpy(char *dest, char *src, int n);
int _strcmp(char *s1, char *s2);
void reverse_array(int *a, int n);
char *string_toupper(char *);
char *cap_string(char *);
char *leet(char *);
void print_buffer(char *b, int size);
char *infinite_add(char *n1, char *n2, char *r, int size_r);
void print_number(int n);
char *rot13(char *);

#endif
