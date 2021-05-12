#include "monty.h"

/**
* find_built - find if
* @head: head in the dobly linked list
* @line_number: file line counter
* Return: always void
**/
void (*find_built(int num_line, char *opcode, stack_t **head))(stack_t **stack, unsigned int line_number)
{
/* find_build(line_read)(&head, num_line) */
// typedef struct instruction_s
// {
//         char *opcode;
//         void (*f)(stack_t **stack, unsigned int line_number);
//     int i;
	size_t i;

	instruction_t options[] = {
		{"pall", _pall},
		// {"pint", _pint},
		{"pop", _pop},
		// {"swap", _swap},
		// {"add", _add},
        // {"nop", _nop},
		{NULL, NULL}
	};

	for (i = 0; options[i].opcode != NULL; i++)
		if (_strcmp(options[i].opcode, opcode))
			return (options[i].f);

	/* case invalid instruction*/
	perror_exit(num_line, 2, opcode, head);
	return (NULL);
}
