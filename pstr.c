#include "stacks.h"
/**
 * pstr_stk - displays the string at the top
 * @head: points to the head of stack
 * @line_cnt: counts number of lines
 * Return: none
*/
void pstr_stk(stack_t **head, unsigned int line_cnt)
{
	stack_t *k;
	(void)line_cnt;

	k = *head;
	while (k)
	{
		if (k->n > 127 || k->n <= 0)
		{
			break;
		}
		printf("%c", k->n);
		k = k->next;
	}
	printf("\n");
}
