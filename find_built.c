#include "monty.h"
/**
* find_built - find if the built-in sended exists or not
* @num_line: file line counter
* @opcode: built-in function
* Return: always void
**/
void (*find_built(int num_line, char *opcode))(stack_t **head,
															   unsigned int line_number)
{
	size_t i;

	instruction_t options[] = {
		{"pall", _pall},
		{"pint", _pint},
		{"pop", _pop},
		{"swap", _swap},
		{"add", _add},
		/* {"nop", _nop}, */
		{NULL, NULL}};

	for (i = 0; options[i].opcode != NULL; i++)
		if (_strcmp(options[i].opcode, opcode))
			return (options[i].f);

	/* case invalid instruction*/
	free_exit(2, num_line, opcode);
	return (NULL);
}
