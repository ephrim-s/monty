#include "stacks.h"

/**
 * div_stk - seperates top element from the rear element
 * @head: points to head of stack
 * @line_cnt: counts number of lines
 * Return: none
 */

void div_stk(stack_t **head, unsigned int line_cnt)
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
		fprintf(stderr, "L%d: can't div, stack too short\n", line_cnt);
		fclose(bus.file);
		free(bus.content);
		free_stack(*head);
		exit(EXIT_FAILURE);
	}
	k = *head;
	if (k->n == 0)
	{
		fprintf(stderr, "L%d: division by zero\n", line_cnt);
		fclose(bus.file);
		free(bus.content);
		free_stack(*head);
		exit(EXIT_FAILURE);
	}
	join = k->next->n / k->n;
	k->next->n = join;
	*head = k->next;
	free(k);
}
