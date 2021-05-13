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
		free_exit(3, line_number, "push");
		return;
	}

	if (!token_num)
	{
		free_exit(6, line_number, "push");
		return;
	}


	if (token_num[0] == '0')
	{
		num = 0;
	}
	else
	{
		num = atoi(token_num);
		if (num == 0)
			free_exit(6, line_number, "push");
	}

	new_node = malloc(sizeof(stack_t));
	if (new_node == NULL)
	{
		/* error "Error: malloc failed"; */
		free_exit(5, line_number, NULL);
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
