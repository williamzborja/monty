#include "monty.h"
/**
* _pint - prints the value at the top of the stack, followed by a new line
* @head: head in the dobly linked list
* @line_number: file line counter
* Return: always void
**/
void _pint(stack_t **head, unsigned int line_number)
{
	if ((*head) == NULL)
	{
		free_exit(3, line_number, NULL);
		return;
	}
	printf("%d\n", (*head)->n);
}
