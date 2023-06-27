#ifndef MAIN_H
#define MAIN_H
#include <stdio.h>
int _putchar(char c);
void reset_to_98(int *n);
void swap_int(int *a, int *b);
int _strlen(char *s);
void _puts(char *str);
void print_rev(char *s);
void rev_string(char *s);
void puts2(char *str);
void puts_half(char *str);
void print_array(int *a, int n);
char *_strcpy(char *dest, char *src);
int _atoi(char *s);
int main(void)
{
    int n = 0;
    int a = 10;
    int b = 20;
    char str1[] = "Hello, World!";
    char str2[] = "OpenAI";
    int arr[] = {1, 2, 3, 4, 5};
    char dest[20];
    char src[] = "Copy this string";

    reset_to_98(&n);
    printf("n after reset: %d\n", n);

    printf("Before swap - a: %d, b: %d\n", a, b);
    swap_int(&a, &b);
    printf("After swap - a: %d, b: %d\n", a, b);

    printf("Length of str1: %d\n", _strlen(str1));
    _puts(str1);

    printf("String in reverse: ");
    print_rev(str1);

    printf("String before reversal: %s\n", str2);
    rev_string(str2);
    printf("String after reversal: %s\n", str2);

    printf("Every other character: ");
    puts2(str1);

    printf("Second half of the string: ");
    puts_half(str1);

    printf("Array elements: ");
    print_array(arr, 5);

    printf("Copy string: %s\n", src);
    _strcpy(dest, src);
    printf("Copied string: %s\n", dest);

    printf("String to integer: %s\n", "12345");
    int num = _atoi("12345");
    printf("Converted integer: %d\n", num);

    return 0;
}

#endif
