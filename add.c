#include "monty.h"
/**
* add - adds the top two elements of the stack
* @head: head in the dobly linked list
* @line_num: file line counter
* Return: always void
**/
void add(stack_t **head, unsigned int line_num)
{
	int num_elements = 0;
	stack_t *tmp;

	if (head == NULL)
	{
		perror_exit(line_num, 5, "add", head);
		return;
	}
	num_elements = len_list(*head);
	if (num_elements < 2)
	{
		perror_exit(line_num, 5, "add", head);
		return;
	}
	tmp = (*head);
	/*here the values that are inside the first two nodes*/
	/*are added together in the second node*/
	(*head)->next->n = ((*head)->n + (*head)->next->n);
	(*head) = (*head)->next;
	/*at this point head now points to what used to be the second node*/
	(*head)->prev = NULL;
	/*free the unnecessary node*/
	free(tmp);
}
