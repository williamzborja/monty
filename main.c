#include "monty.h"
/**
 * main - monty interpreter
 * @argc: args counter
 * @argv: args values
 * Return: exit status
 */
int main(int argc, char *argv[])
{
	/*declaration variables*/
	FILE *file = NULL;
	size_t buffer_size = 0, num_line = 1;
	ssize_t char_read = 0;
	char *line_read = NULL;
	stack_t *head = NULL;

	/* validate path */
	file = validate_path(argc, argv, file);

	/* initialize stack */

	/* read file*/
	for (num_line = 0; char_read != EOF; num_line++)
	{
		/*recordar liberar el malloc de getline*/
		char_read = getline(&line_read, &buffer_size, file);
		if (char_read == -1)
		{
			fclose(file);
			perror_exit(num_line, 99, line_read, &head);
		}
		if (line_read[char_read - 1] == '\n')
		{
			/*para eliminar el caracter '/n'*/
			line_read[char_read - 1] = '\0';
		}
		execute(&head, line_read, num_line);/* execute */
	}
	fclose(file);
	return (EXIT_SUCCESS);
}
