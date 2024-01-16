/**
  *_rotr- rotates the stack to the bottom
  *@head: head of the stack
  *@counter: number of lines in file
  *Return: nothing
 */
void _rotr(stack_t **head, __attribute_((unused)) unsigned int counter)
{
	stack_t *copy;

	copy = *head;
	if (*head == NULL || (*head)->next == NULL)
	{
		return;
	}
	while (copy->next)
	{
		copy = copy->next;
	}
	copy->next = *head;
	copy->prev->next = NULL;
	copy->prev = NULL;
	(*head)->prev = copy;
	(*head) = copy;
}
