#include "monty.h"

/**
 *  _strcmp - validate if two strings are equals.
 *  @str1: text one.
 *  @str2: text two.
 *  Return: If the texts are equal 1, or else 0.
 */
int _strcmp(char *str1, char *str2)
{
	/* edge case */
	if (!str1 || !str2)
		return (0);

	/* if case base failure*/
	if (*str1 != *str2)
		return (0);

	/* if case base success*/
	if (!*str1 && !*str2)
		return (1);

	/* recursion case */
	return (_strcmp(str1 + 1, str2 + 1));
}

int tokenize(char *opcode, char **tokens)
{
	size_t i;
	char *token;
	for (i = 0; 1; i++)
	{
		token = strtok(((i == 0) ? opcode : NULL), DELIM);
		if (token == NULL || i == 2)
		{
			return (0);
		}
		tokens[i] = token;
	}
	return (1);
}
/**
 * dlistint_len - counts the number of elements in a linked stack_t list
 * @h: head in the dobly linked list
 * Return: the number of elements in a linked stack_t list
 **/
size_t len_list(const stack_t *h)
{
	size_t i = 0;

	if (h == NULL)
		return (0);
	while (h != NULL)
	{
		i++;
		h = h->next;
	}
	return (i);
}