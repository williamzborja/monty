#ifndef MONTY_H
#define MONTY_H

/* LIBRARIES */
#include <unistd.h>
#include <fcntl.h>
#include <stdlib.h>
#include <stdio.h>
#include <string.h>

/* STRUCTURES */
/**
 * struct stack_s - doubly linked list representation of a stack (or queue)
 * @n: integer
 * @prev: points to the previous element of the stack (or queue)
 * @next: points to the next element of the stack (or queue)
 *
 * Description: doubly linked list node structure
 * for stack, queues, LIFO, FIFO Holberton project
 */

#define DELIM " "
typedef struct stack_s
{
	int n;
	struct stack_s *prev;
	struct stack_s *next;
} stack_t;

/**
 * struct instruction_s - opcode and its function
 * @opcode: the opcode
 * @f: function to handle the opcode
 *
 * Description: opcode and its function
 * for stack, queues, LIFO, FIFO Holberton project
 */
typedef struct instruction_s
{
	char *opcode;
	void (*f)(stack_t **stack, unsigned int line_number);
} instruction_t;

/* MAIN FUNCTIONS */
/*print error msg in standard error*/
void perror_exit(int, int, char *, stack_t **);

void (*find_built(int num_line, char *opcode, stack_t **head))(stack_t **stack, unsigned int line_number);

FILE *validate_path(int argc, char *argv[], FILE *file);

int tokenize(char *, char **);

void execute(stack_t **, char *, size_t);
void free_stack(stack_t *head);
/* BUILT-IN FUNCTIONS */
/*prints all the elements of a stack_t list*/
void _pall(stack_t **, unsigned int);
/*adds a new node at the beginning of a dlistint_t list*/
void _push(stack_t **head, unsigned int num_line, char *token_num);
/* Delete node in double linked list*/
void _pop(stack_t **, unsigned int);
/*swaps the top two elements of the stack*/
void _swap(stack_t **head, unsigned int line_number);
/*prints the value at the top of the stack, followed by a new line*/
void _pint(stack_t **head, unsigned int line_number);


void test();
/*validate if two strings are equals*/
int _strcmp(char *str1, char *str2);
/*counts the number of elements in a linked stack_t list*/
size_t len_list(const stack_t *head);
#endif
