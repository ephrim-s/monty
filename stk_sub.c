#include "stacks.h"
/**
  *stk_sub- sustration
  *@head: stack head
  *@line_cnt: line_number
  *Return: none
 */
void stk_sub(stack_t **head, unsigned int line_cnt)
{
	stack_t *join;
	int sus, nodes;

	join = *head;
	for (nodes = 0; join != NULL; nodes++)
		join = join->next;
	if (nodes < 2)
	{
		fprintf(stderr, "L%d: can't sub, stack too short\n", line_cnt);
		fclose(bus.file);
		free(bus.content);
		free_stack(*head);
		exit(EXIT_FAILURE);
	}
	join = *head;
	sus = join->next->n - join->n;
	join->next->n = sus;
	*head = join->next;
	free(join);
}