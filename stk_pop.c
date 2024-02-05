#include "stacks.h"
/**
 * stk_pop - prints the top
 * @head: stack head
 * @line_cnt: line_number
 * Return: none
*/
void stk_pop(stack_t **head, unsigned int line_cnt)
{
	stack_t *h;

	if (*head == NULL)
	{
		fprintf(stderr, "L%d: can't pop an empty stack\n", line_cnt);
		fclose(bus.file);
		free(bus.content);
		free_stack(*head);
		exit(EXIT_FAILURE);
	}
	h = *head;
	*head = h->next;
	free(h);
}