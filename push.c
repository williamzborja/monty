#include "monty.h"
/**
 * _push - adds a new node at the beginning of a dlistint_t list
* @head: head in the dobly linked list
* @line_number: file line counter
* @token_num: parameter for execute push
* Return: always void
 **/
void _push(stack_t **head, unsigned int line_number, char *token_num)
{
	stack_t *new_node = NULL;
	int num;

	if (!head)
	{
		perror_exit(line_number, 3, "push", head);
		return;
	}

	if (!token_num)
	{
		perror_exit(line_number, 6, "push", head);
		return;
	}

	num = atoi(token_num);

	new_node = malloc(sizeof(stack_t));
	if (new_node == NULL)
	{
		/* error "Error: malloc failed"; */
		perror_exit(line_number, 5, NULL, head);
		return;
	}

	new_node->n = num;
	new_node->prev = NULL;
	new_node->next = *head;
	/*now new_node will point to what head pointed before*/
	if (*head != NULL)
		/*here we ask: if what head is pointing isn't NULL...do*/
		(*head)->prev = new_node;
	*head = new_node;
}
