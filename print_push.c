#include "monty.h"

/**
 * _push - add node to the stack
 * @head: head of the stack
 * @counter: number of lines in file
 * Return: nothing
*/

void _push(stack_t **head, unsigned int counter)
{
	int n, j = 0, flag = 0;

	if (data.arg)
	{
		if (data.arg[0] == '-')
			j++;
		for (; data.arg[j] != '\0'; j++)
		{
			if (data.arg[j] > 57 || data.arg[j] < 48)
				flag = 1; }
		if (flag == 1)
		{ fprintf(stderr, "L%d: usage: push integer\n", counter);
			fclose(data.file);
			free(data.line_content);
			free_stack(*head);
			exit(EXIT_FAILURE); }}
	else
	{ fprintf(stderr, "L%d: usage: push integer\n", counter);
		fclose(data.file);
		free(data.line_content);
		free_stack(*head);
		exit(EXIT_FAILURE); }
	n = atoi(data.arg);
	if (data.s_flag == 0)
		addnode(head, n);
	else
		addqueue(head, n);
}
