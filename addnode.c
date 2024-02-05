#include "stacks.h"
/**
 * addnode_stk - create node at the ahead
 * @head: points to the head of stack
 * @i: value of the new line
 * Return: none
*/
void addnode_stk(stack_t **head, int i)
{

	stack_t *new_node, *join;

	join = *head;
	new_node = malloc(sizeof(stack_t));
	if (new_node == NULL)
	{ printf("Error\n");
		exit(0); }
	if (aux)
		join->prev = new_node;
	new_node->i = i;
	new_node->next = *head;
	new_node->prev = NULL;
	*head = new_node;
}
