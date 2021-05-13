#include "monty.h"
/**
* _pint - prints the value at the top of the stack, followed by a new line
* @head: head in the dobly linked list
* @line_number: file line counter
* Return: always void
**/
void _pint(stack_t **head, unsigned int line_number)
{
	stack_t *tmp;

	(void) line_number;
	tmp = (*head);
	if (tmp == NULL)
	{
		free_exit(3, line_number, NULL);
		return;
	}
	while (tmp->next == NULL)
	{
		/*here you will reach the final node*/
		tmp = tmp->next;
	}
	printf("%d", tmp->n);
}