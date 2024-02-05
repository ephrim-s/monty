#include "stacks.h"
/**
 * stk_mod - computes the rest of the division of the second
 * top element of the stack by the top element of the stack
 * @head: stack head
 * @line_cnt: line_number
 * Return: none
*/
void stk_mod(stack_t **head, unsigned int line_cnt)
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
		fprintf(stderr, "L%d: can't mod, stack too short\n", line_cnt);
		fclose(bus.file);
		free(bus.content);
		free_stack(*head);
		exit(EXIT_FAILURE);
	}
	h = *head;
	if (h->n == 0)
	{
		fprintf(stderr, "L%d: division by zero\n", line_cnt);
		fclose(bus.file);
		free(bus.content);
		free_stack(*head);
		exit(EXIT_FAILURE);
	}
	join = h->next->n % h->n;
	h->next->n = join;
	*head = h->next;
	free(h);
}