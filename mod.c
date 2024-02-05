#include "stacks.h"

/**
 * mod_stk - calculates the rear element of the stack
 * @head: points to the head of the stack
 * @line_cnt: counts number of lines
 * Return: none
 */

void mod_stk(stack_t **head, unsigned int line_cnt)
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
		fprintf(stderr, "L%d: cant't mod, stack too short\n", line_cnt);
		fclose(bus.file);
		free(bus.content);
		free_stack(*head);
		exit(EXIT_FAILURE);
	}
	k = *head;
	if (k->n == 0)
	{
		fprintf(stderr, "L%d: division by zero\n", line_cnt);
	}
	join = k->next % k->n;
	k->next->n = join;
	*head = k->next;
	free(k);
}
