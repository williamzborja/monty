#include "monty.h"
/**
* _pall - prints all the elements of a stack_t list
* @head: head in the dobly linked list
* @line_number: file line counter
* Return: always void
**/
void _pall(stack_t **head, unsigned int line_number)
{
	size_t i = 0;
	stack_t *tmp;

	(void)line_number;
	tmp = (*head);
	if (head == NULL)
	{
		return;
	}
	while (tmp != NULL)
	{
		i++;
		printf("%d\n", tmp->n);
		tmp = tmp->next;
	}
}
