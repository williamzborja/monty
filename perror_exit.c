#include "monty.h"
/**
 * validate_path - checks the correct format and access from a file
 * @argc: num of parameters sended
 * @argv: strings of parameters sended
 * @file: file information
 * Return: FILE data
 **/
FILE *validate_path(int argc, char *argv[], FILE *file)
{
	if (argc != 2)
		perror_exit(0, 0, NULL, NULL);
	/* perror_exit */

	file = fopen(argv[1], "r");
	if (file == NULL)
	{
		/*Error: Can't open file <file>*/
		perror_exit(0, 1, argv[1], NULL);
	}
	return (file);
}
/**
 * perror_exit - print error message on the std_error and exit
 * @line_num: counter from the file readed
 * @err_code: code for find an especific error
 * @std_string: string for manage an especific error
 * @head: head in the double linked list
 * Return: always void
 **/
void perror_exit(int line_num, int err_code, char *std_string, stack_t **head)
{
	/* print error msg*/

	/* 0 USAGE: monty file\n */
	if (err_code == 0)
  {
    fprintf(stderr, "USAGE: monty file\n");
    exit(EXIT_FAILURE);
  }

	else if (err_code == 1)
		fprintf(stderr, "Error: Can't open file %s\n", std_string);
	else if (err_code == 2)
	{
		fprintf(stderr, "L%d: unknown instruction %s", line_num,
			std_string);
	}
	else if (err_code == 3)
	{
		fprintf(stderr, "L%d: can't %s an empty stack", line_num,
			std_string);
	}
	else if (err_code == 5)
		fprintf(stderr, "L%d: Error: malloc failed", line_num);
	else if (err_code == 4)
		fprintf(stderr, "L%d: L<line_number>: can't add, stack too short", line_num);
	else if (err_code == 6)
	{
		fprintf(stderr, "L%d: usage: push integer", line_num);
	}

	/* frees */
  if ((*head)!= NULL)
  {
    free_stack((*head));
  }

	head = NULL;

	if (err_code == 99)
	{
		free(std_string);
		exit(EXIT_SUCCESS);
	}
	else
	{
		exit(EXIT_FAILURE);
	}
}
