#include "monty.h"

/**
 * free_dlistint - free
 * @head: dlistint_t first node;
 */
void free_stack(stack_t *head)
{
	/*edge case*/
	if (!head)
		return;

	/* normal */
	if (head->prev)
		free(head->prev);

	/* case base */
	if (head->next == NULL)
	{
		free(head);
		return;
	}
	/* recursion */
	free_stack(head->next);
}
