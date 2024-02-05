#include "stacks.h"
/**
 * queue_stk - displays the top
 * @head: points to the head of the stack
 * @line_cnt: counts number of lines
 * Return: none
*/
void queue_stk(stack_t **head, unsigned int line_cnt)
{
	(void)head;
	(void)line_cnt;
	bus.lifi = 1;
}

/**
 * addqueue_stk - add node to the tail
 * @n: new_value
 * @head: points to the head of stack
 * Return: none
*/
void addqueue_stk(stack_t **head, int n)
{
	stack_t *new_node, *join;

	join = *head;
	new_node = malloc(sizeof(stack_t));
	if (new_node == NULL)
	{
		printf("Error\n");
	}
	new_node->n = n;
	new_node->next = NULL;
	if (join)
	{
		while (join->next)
			join = join->next;
	}
	if (!join)
	{
		*head = new_node;
		new_node->prev = NULL;
	}
	else
	{
		join->next = new_node;
		new_node->prev = join;
	}
}
