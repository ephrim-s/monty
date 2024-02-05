#include "stacks.h"

/**
 * pall_stk - displays stack
 * @head: points to the head of stack
 * #line_cnt: counts number of lines
 * Return: none
 */

void pall_stk(stack_t **head, unsigned int line_cnt)
{
	stack_t *k;
	(void)line_cnt;

	k = *head;
	if (k == NULL)
		return;
	while (k)
	{
		printf("%d", k->n);
		k = k->next;
	}
}
