#include "stacks.h"
/**
 * addnode - add node to the head stack
 * @head: points to the head of stack
 * @n: new_value
 * Return: none
*/
void addnode(stack_t **head, int n)
{

	stack_t *new_node, *join;

	join = *head;
	new_node = malloc(sizeof(stack_t));
	if (new_node == NULL)
	{ printf("Error\n");
		exit(0); }
	if (join)
		join->prev = new_node;
	new_node->n = n;
	new_node->next = *head;
	new_node->prev = NULL;
	*head = new_node;
}