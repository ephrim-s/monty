#include "stacks.h"
/**
 * pchar_stk - displays characters at the front
 * @head: points to the head of the stack
 * @line_cnt: counts number of lines
 * Return: none
*/
void pchar_stk(stack_t **head, unsigned int line_cnt)
{
	stack_t *k;

	k = *head;
	if (!k)
	{
		fprintf(stderr, "L%d: can't pchar, stack empty\n", line_cnt);
		fclose(bus.file);
		free(bus.content);
		free_stack(*head);
		exit(EXIT_FAILURE);
	}
	if (k->n > 127 || k->n < 0)
	{
		fprintf(stderr, "L%d: can't pchar, value out of range\n", line_cnt);
		fclose(bus.file);
		free(bus.content);
		free_stack(*head);
		exit(EXIT_FAILURE);
	}
	printf("%c\n", k->n);
}
