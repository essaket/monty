#include "monty.h"
/**
 * _pall - prints the stack
 * @head: head of the stack
 * @counter: number of lines in file
 * Return: nothing
*/
void _pall(stack_t **head, unsigned int counter)
{
	stack_t *h;
	(void)counter;

	h = *head;
	if (h == NULL)
		return;
	while (h)
	{
		printf("%d\n", h->n);
		h = h->next;
	}
}
