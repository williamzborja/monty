#include "monty.h"

void print_err(int line_num, int err_code, char *std_string)
{
	if (err_code == 0)
	{
		fprintf(stderr, "USAGE: monty file\n");
		exit(EXIT_FAILURE);
	}
	else if (err_code == 1)
	{
		fprintf(stderr, "Error: Can't open file %s\n", std_string);
		exit(EXIT_FAILURE);
	}
	else if (err_code == 2)
	{
		fprintf(stderr, "L%d: unknown instruction %s\n", line_num,
				std_string);
	}
	else if (err_code == 3)
	{
		fprintf(stderr, "L%d: can't %s an empty stack\n", line_num,
				std_string);
	}
	else if (err_code == 5)
		fprintf(stderr, "Error: malloc failed\n");
	else if (err_code == 4)
		fprintf(stderr, "L%d: can't add, stack too short\n", line_num);
	else if (err_code == 6)
		fprintf(stderr, "L%d: usage: push integer\n", line_num);
	else if (err_code == 7)
		fprintf(stderr, "L%d: can't pint, stack empty\n", line_num);
}

