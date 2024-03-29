#include "monty.h"

/**
 * _pint - prints the top
 * @head: head of the stack
 * @counter: number of lines in file
 * Return: nothing
*/
void _pint(stack_t **head, unsigned int counter)
{
	if (*head == NULL)
	{
		fprintf(stderr, "L%u: can't pint, stack empty\n", counter);
		fclose(data.file);
		free(data.line_content);
		free_stack(*head);
		exit(EXIT_FAILURE);
	}
	printf("%d\n", (*head)->n);
}
