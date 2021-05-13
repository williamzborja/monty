#include "monty.h"
/**
* _pop - Delete node in double linked list
* @head: head  the dobly linked list
* @line_num: file line counter
* Return: always void
 */
void _pop(stack_t **head, unsigned int line_num)
{
	stack_t *tmp = *head;

	if (head == NULL || *head == NULL)
	{
		free_exit(3, line_num, "pop");
		return;
	}
	if ((*head)->next == NULL)
	{
		free(tmp);
		(*head) = NULL;
		return;
	}
	(*head) = (*head)->next;
	(*head)->prev = NULL;
	free(tmp);
	/*
	*for (i = 0; tmp->next; i++)
	*	tmp = tmp->next;
	* if (tmp == NULL)
	*	return;
	*if (*head == tmp)
	*	*head = tmp->next;
	*if (tmp->next)
	*	tmp->next->prev = tmp->prev;
	*if (tmp->prev)
	*	tmp->prev->next = tmp->next;
	*free(tmp);
	*/
}
