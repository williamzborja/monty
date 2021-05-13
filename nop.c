#include "monty.h"
/**
* _nop - doesn't do enything
* @head: head in the dobly linked list
* @line_number: file line counter
* Return: always void
**/
void _nop(stack_t **head, unsigned int line_number)
{
    (void)(*head);
    (void)line_number;
}