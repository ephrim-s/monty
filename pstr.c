#include "stacks.h"
/**
 * stk_pstr - prints the string starting at the top of the stack,
 * followed by a new
 * @head: stack head
 * @line_cnt: line_number
 * Return: none
*/
void stk_pstr(stack_t **head, unsigned int line_cnt)
{
	stack_t *h;
	(void)line_cnt;

	h = *head;
	while (h)
	{
		if (h->n > 127 || h->n <= 0)
		{
			break;
		}
		printf("%c", h->n);
		h = h->next;
	}
	printf("\n");
}