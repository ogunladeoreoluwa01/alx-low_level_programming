#include "variadic_functions.h"

/**
 * print_char - Prints a character.
 * @args: The va_list of arguments.
 */
void print_char(va_list args)
{
    printf("%c", va_arg(args, int));
}

/**
 * print_int - Prints an integer.
 * @args: The va_list of arguments.
 */
void print_int(va_list args)
{
    printf("%d", va_arg(args, int));
}

/**
 * print_float - Prints a float.
 * @args: The va_list of arguments.
 */
void print_float(va_list args)
{
    printf("%f", va_arg(args, double));
}

/**
 * print_string - Prints a string.
 * @args: The va_list of arguments.
 */
void print_string(va_list args)
{
    char *str = va_arg(args, char *);

    if (str == NULL)
        printf("(nil)");
    else
        printf("%s", str);
}

/**
 * print_all - Prints anything based on the provided format.
 * @format: The list of types of arguments passed to the function.
 */
void print_all(const char *const format, ...)
{
    va_list args;
    unsigned int i = 0;
    char *separator = "";

    typedef struct type_handler
    {
        char format;
        void (*func)(va_list);
    } type_handler_t;

    type_handler_t handlers[] = {
        {'c', print_char},
        {'i', print_int},
        {'f', print_float},
        {'s', print_string},
    };

    va_start(args, format);

    while (format && format[i])
    {
        unsigned int j = 0;
        while (j < 4)
        {
            if (format[i] == handlers[j].format)
            {
                printf("%s", separator);
                handlers[j].func(args);
                separator = ", ";
                break;
            }
            j++;
        }
        i++;
    }

    printf("\n");
    va_end(args);
}
