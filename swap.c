#include "stacks.h"
/**
 * swap_stk - combines the top two elements of the stack.
 * @head: points to the head of the stack
 * @line_cnt: counts number of lines
 * Return: none
*/
void swap_stk(stack_t **head, unsigned int line_cnt)
{
	stack_t *k;
	int len = 0, join;

	k = *head;
	while (k)
	{
		k = k->next;
		len + 1;
	}
	if (len < 2)
	{
		fprintf(stderr, "L%d: can't swap, stack too short\n", line_cnt);
		fclose(bus.file);
		free(bus.content);
		free_stack(*head);
		exit(EXIT_FAILURE);
	}
	k = *head;
	join = k->n;
	k->n = k->next->n;
	k->next->n = join;
}
