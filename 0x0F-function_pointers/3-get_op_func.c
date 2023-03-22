#include <stdio.h>
#include "3-calc.h"
#include <stdlib.h>
/**
 * get_op_func - Selects the correct function to perform
 * the operation asked by the user.
 * @s: The operator passed as argument to the program
 *
 * Return: A pointer to the function otherwise NULL is return if s
 * does not match the 5 expected operators.
 */
int (*get_op_func(char *s))(int, int)
{
	op_t ops[] = {
		{"+", op_add},
		{"-", op_sub},
		{"*", op_mul},
		{"/", op_div},
		{"%", op_mod},
		{NULL, NULL},
	};

	int e = 0;

	while (ops[e].op != NULL && *(ops[e].op) != *s)
		e++;

	return (ops[e].f);
}

