#include "stacks.h"
/**
  *sub_stk - substration
  *@head: points to the head of stack
  *@line_cnt: counts number of lines
  *Return: none
 */
void sub_stk(stack_t **head, unsigned int line_cnt)
{
	stack_t *join;
	int sub, nodes;

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
	sub = join->next->n - join->n;
	join->next->n = sub;
	*head = join->next;
	free(join);
}

