#include "stacks.h"
/**
 * stk_queue - prints the top
 * @head: stack head
 * @line_cnt: line_number
 * Return: none
*/
void stk_queue(stack_t **head, unsigned int line_cnt)
{
	(void)head;
	(void)line_cnt;
	bus.lifi = 1;
}

/**
 * addqueue - add node to the tail stack
 * @n: new_value
 * @head: points to the head of stack
 * Return: none
*/
void addqueue(stack_t **head, int n)
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