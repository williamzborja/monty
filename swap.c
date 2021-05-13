#include "monty.h"
/**
* _swap - swaps the top two elements of the stack
* @head: head in the dobly linked list
* @line_number: file line counter
* Return: always void
**/
void _swap(stack_t **head, unsigned int line_number)
{
	int num_elements = 0, tmp_num = 0;

	if (head == NULL)
	{
		/* error: "the stack is empty";*/
		free_exit(3, line_number, "swap");
		return;
	}
	num_elements = len_list(*head);
	if (num_elements < 2)
	{
		/* error: "L<line_number>: can't swap, stack too short"; */
		free_exit(4, line_number, "swap");
		return;
	}
	tmp_num = (*head)->n;
	(*head)->n = (*head)->next->n;
	(*head)->next->n = tmp_num;
}
