#include "stacks.h"
/**
 * pop_stk - displays the top
 * @head: points to the head of stack
 * @line_cnt: counts number of lines
 * Return: none
*/
void pop_stk(stack_t **head, unsigned int line_cnt)
{
	stack_t *k;

	if (*head == NULL)
	{
		fprintf(stderr, "L%d: can't pop an empty stack\n", line_cnt);
		fclose(bus.file);
		free(bus.content);
		free_stack(*head);
		exit(EXIT_FAILURE);
	}
	k = *head;
	*head = k->next;
	free(k);
}
