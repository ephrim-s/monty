#include "stacks.h"
/**
 * push_stk - creates node
 * @head: points to the head of the stack
 * @line_cnt: counts number of lines
 * Return: none
*/
void push_stk(stack_t **head, unsigned int line_cnt)
{
	int i, j = 0, flg = 0;

	if (bus.arg)
	{
		if (bus.arg[0] == '-')
			j++;
		for (; bus.arg[j] != '\0'; j++)
		{
			if (bus.arg[j] > 57 || bus.arg[j] < 48)
				flg = 1; }
		if (flg == 1)
		{ fprintf(stderr, "L%d: usage: push integer\n", line_cnt);
			fclose(bus.file);
			free(bus.content);
			free_stack(*head);
			exit(EXIT_FAILURE); }}
	else
	{ fprintf(stderr, "L%d: usage: push integer\n", line_cnt);
		fclose(bus.file);
		free(bus.content);
		free_stack(*head);
		exit(EXIT_FAILURE); }
	i = atoi(bus.arg);
	if (bus.lifi == 0)
		addnode_stk(head, i);
	else
		addqueue_stk(head, i);
}
