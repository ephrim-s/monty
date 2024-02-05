#include "stacks.h"
/**
 * stk_pall - prints the stack
 * @head: stack head
 * @line_cnt: no used
 * Return: none
*/
void stk_pall(stack_t **head, unsigned int line_cnt)
{
	stack_t *h;
	(void)line_cnt;

	h = *head;
	if (h == NULL)
		return;
	while (h)
	{
		printf("%d\n", h->n);
		h = h->next;
	}
}