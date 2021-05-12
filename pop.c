#include "monty.h"

#define ERROR -1
#define SUCCESS 1
/**
* delete_dnodeint_at_index - Delete node in double linked list
* @head: head  the dobly linked list
* @line_number: file line counter
* Return: always void
 */
void _pop(stack_t **head, unsigned int line_num)
{
	unsigned int i;
	stack_t *tmp = *head;

	if (head == NULL || *head == NULL)
	{
		perror_exit(line_num, 3, "pop", head);
		return;
	}
	for (i = 0; tmp->next; i++)
		tmp = tmp->next;

	if (tmp == NULL)
		return;

	if (*head == tmp)
		*head = tmp->next;

	if (tmp->next)
		tmp->next->prev = tmp->prev;

	if (tmp->prev)
		tmp->prev->next = tmp->next;

	free(tmp);
}
