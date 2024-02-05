#include "stacks.h"
/**
 * pint_stk - displays the front
 * @head: points to the head of stack
 * @line_cnt: counts number of lines
 * Return: none
*/
void pint_stk(stack_t **head, unsigned int line_cnt)
{
	if (*head == NULL)
	{
		fprintf(stderr, "L%u: can't pint, stack empty\n", line_cnt);
		fclose(bus.file);
		free(bus.content);
		free_stack(*head);
		exit(EXIT_FAILURE);
	}
	printf("%d\n", (*head)->n);
}
