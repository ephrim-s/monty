#include "stacks.h"
/**
 * stk_pint - prints the top
 * @head: stack head
 * @line_cnt: line_number
 * Return: none
*/
void stk_pint(stack_t **head, unsigned int line_cnt)
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