#include "monty.h"

/**
 * _pop - prints the top
 * @head: head of the stack
 * @counter: number of lines in file
 * Return: nothing
*/
void _pop(stack_t **head, unsigned int counter)
{
	stack_t *h;

	if (*head == NULL)
	{
		fprintf(stderr, "L%d: can't pop an empty stack\n", counter);
		fclose(data.file);
		free(data.line_content);
		free_stack(*head);
		exit(EXIT_FAILURE);
	}
	h = *head;
	*head = h->next;
	free(h);
}
