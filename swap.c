#include "stacks.h"
/**
 * stk_swap - adds the top two elements of the stack.
 * @head: stack head
 * @line_cnt: line_number
 * Return: none
*/
void stk_swap(stack_t **head, unsigned int line_cnt)
{
	stack_t *h;
	int len = 0, join;

	h = *head;
	while (h)
	{
		h = h->next;
		len++;
	}
	if (len < 2)
	{
		fprintf(stderr, "L%d: can't swap, stack too short\n", line_cnt);
		fclose(bus.file);
		free(bus.content);
		free_stack(*head);
		exit(EXIT_FAILURE);
	}
	h = *head;
	join = h->n;
	h->n = h->next->n;
	h->next->n = join;
}