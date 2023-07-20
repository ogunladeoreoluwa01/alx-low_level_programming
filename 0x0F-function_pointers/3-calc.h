#ifndef MAIN_H
#define MAIN_H

int op_add(int a, int b);
int op_sub(int a, int b);
int op_mul(int a, int b);
int op_div(int a, int b);
int op_mod(int a, int b);
int (*get_op_func(char *s))(int, int);
/**
 * struct op - Structure to store an operator and its associated function.
 *
 * This structure is used to associate an operator character with its
 * corresponding function in a calculator program.
 *
 * @op: The operator character.
 * @f: A pointer to the function associated with the operator.
 */

typedef struct op
{
	char *op;
	int (*f)(int a, int b);
} op_t;

#endif
