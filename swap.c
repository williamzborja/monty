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
		perror_exit(line_number, 3, "swap", head);
        return;
    }
    num_elements = len_list(*head);
    if (num_elements < 2)
    {
        /* error: "L<line_number>: can't swap, stack too short"; */
		perror_exit(line_number, 4, "swap", head);
        return;
    }
    tmp_num = (*head)->n;
    (*head)->n = (*head)->next->n;
    (*head)->next->n = tmp_num;
}