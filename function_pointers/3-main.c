#include <stdio.h>
#include <stdlib.h>
#include "3-calc.h"
/**
 * main - Entry point of the program
 * @argc: The number of command line arguments
 * @argv: Array of command line argument strings
 *
 * Return: 0 on success
 */
int main(int argc, char *argv[])
{
	int (*op)(int, int);
	int op1, op2;
	/* verify if there is the good number of arguments */
	if (!(argc == 4))
	{
		printf("Error\n");
		exit(98);
	}
	/* put the good operator in the pointer op */
	op = get_op_func(argv[2]);
	/* exit if the operator is not correct */
	if (op == NULL)
	{
		printf("Error\n");
		exit(99);
	}
	/* put the number in int variable */
	op1 = atoi(argv[1]);
	op2 = atoi(argv[3]);
	/* handle the case when the user try to divide by 0 */
	if ((*argv[2] == '/' || *argv[2] == '%') && (op1 == 0 || op2 == 0))
	{
		printf("Error\n");
		exit(100);
	}
	/* execute the operation and print it */
	printf("%d\n", op(op1, op2));

return (0);
}
