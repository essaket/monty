#include "monty.h"

/**
* _handle - calls the function
* @content: line content
* @stack: head of the stack
* @counter: number of lines in file
* @file: monty file
* Return: nothing
*/
int _handle(char *content, stack_t **stack, unsigned int counter, FILE *file)
{
	unsigned int i = 0;
	char *op;

	instruction_t opst[] = {
				{"push", _push}, {"pall", _pall}, {"pint", _pint},
				{"pop", _pop}, {"swap", _swap},
				{"add", _add},
				{"nop", _nop},
				{"sub", _sub},
				{"div", _div},
				{"mul", _mul},
				{"mod", _mod},
				{"pchar", _pchar},
				{"pstr", _pstr},
				{"rotl", _rotl},
				{"rotr", _rotr},
				{"queue", _queue},
				{"stack", _stack},
				{NULL, NULL}
				};

	op = strtok(content, " \n\t");
	if (op && op[0] == '#')
		return (0);
	data.arg = strtok(NULL, " \n\t");
	while (opst[i].opcode && op)
	{
		if (strcmp(op, opst[i].opcode) == 0)
		{	opst[i].f(stack, counter);
			return (0);
		}
		i++;
	}
	if (op && opst[i].opcode == NULL)
	{ fprintf(stderr, "L%d: unknown instruction %s\n", counter, op);
		fclose(file);
		free(content);
		free_stack(*stack);
		exit(EXIT_FAILURE); }
	return (1);
}
