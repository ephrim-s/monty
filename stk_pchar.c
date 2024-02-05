#include "stacks.h"
/**
 * stk_pchar - prints the char at the top of the stack,
 * followed by a new line
 * @head: stack head
 * @line_cnt: line_number
 * Return: none
*/
void stk_pchar(stack_t **head, unsigned int line_cnt)
{
	stack_t *h;

	h = *head;
	if (!h)
	{
		fprintf(stderr, "L%d: can't pchar, stack empty\n", line_cnt);
		fclose(bus.file);
		free(bus.content);
		free_stack(*head);
		exit(EXIT_FAILURE);
	}
	if (h->n > 127 || h->n < 0)
	{
		fprintf(stderr, "L%d: can't pchar, value out of range\n", line_cnt);
		fclose(bus.file);
		free(bus.content);
		free_stack(*head);
		exit(EXIT_FAILURE);
	}
	printf("%c\n", h->n);
}