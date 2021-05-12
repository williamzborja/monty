#include "monty.h"

FILE *validate_path(int argc, char *argv[], FILE *file)
{
  if (argc != 2)
    perror_exit(0, 0, NULL, NULL);
  /* perror_exit */

  file = fopen(argv[1], "r");
  if (file == NULL)
  {
    /*Error: Can't open file <file>*/
    perror_exit(0, 1, argv[1], NULL);
  }
  return (file);
}

void perror_exit(int line_number, int err_code, char *std_string, stack_t **head)
{
  /* print error msg*/

  /* 0 USAGE: monty file\n */
  if (err_code == 0)
  {
    fprintf(stderr, "USAGE: monty file\n");
  }
  else if (err_code == 1)
  {
    fprintf(stderr, "Error: Can't open file %s\n", std_string);
  }
  else if (err_code == 2)
  {
    fprintf(stderr, "L%d: unknown instruction %s", line_number, std_string);
  }
  else if (err_code == 3)
  {
    fprintf(stderr, "L%d: can't %s an empty stack", line_number, std_string);
  }
  else if (err_code == 5)
  {
    fprintf(stderr, "L%d: Error: malloc failed", line_number);
  }
  else if (err_code == 4)
  {
    fprintf(stderr, "L%d: L<line_number>: can't add, stack too short", line_number);
  }
  else if (err_code == 6)
  {
    fprintf(stderr, "L%d: usage: push integer", line_number);
  }
  /* frees */

  free_stack(*head);
  free(head);
  head = NULL;

  if (err_code == 99)
  {
    free(std_string);
    exit(EXIT_SUCCESS);
  }
  else
  {
    exit(EXIT_FAILURE);
  }
}
